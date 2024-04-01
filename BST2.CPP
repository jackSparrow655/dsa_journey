#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* tree(node* root, int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data > root->data){
        root->right = tree(root->right, data);
    }
    if(data<=root->data){
        root->left = tree(root->left, data);
    }
    return root;
}
void takeInput(node* &root){
    int data;
    cin>> data;
    while(data != -1){
        root = tree(root, data);
        cin>>data;
    }
}
void levelOrder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int min(node* root){
    if(root == NULL){
        return -1;
    }
    int ans;
    while(root != NULL){
        ans = root->data;
        root = root->left;
    }
    return ans;
}
node *deleteNode(node *root, int X) {
    // your code goes here
    if(root == NULL){
        delete root;
        return NULL;
    }
    else if(root->data == X){
        if(root->right ==NULL && root->left == NULL){
            delete root;
            return NULL;
        }
        else if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL && root->left != NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            int mini = min(root->right);
            root->data = mini;
            root->right = deleteNode(root->right, X);
            return root;
        }
    }
    else if(root->data > X){
        root->left = deleteNode(root->left, X);
        return root;
    }
    else if(root->data < X){
        root->right = deleteNode(root->right, X);
        return root;
    }
}
/*node* deleteNode(node* &root, int val){
    if(root == NULL ){
        return root;
    }
    else if(root->data == val){
        // 0 child
        if(root->right == NULL && root->left == NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left != NULL && root->right != NULL){
            int mini = min(root->right);
            root->data = mini;
            root->right = deleteNode(root->right, mini);
            return root;
        }
        
    }
    else if(root->data > val){
        root->left = deleteNode(root->left, val);
        return root;
    }
    else {
        root->right = deleteNode(root->right, val);
        return root;
    }
}*/

int main(){
    node* root = NULL;
    cout << "enter the values of BST: ";
    takeInput(root);
    cout << "printing the binary tree: " << endl;
    levelOrder(root);
    cout << "minimum value of the BST is" << min(root) << endl;
    int val;
    cout << "enter the value you want to delete: ";
    cin >> val;
    root = deleteNode(root, val);
    cout <<endl<< "printing the binary tree: " << endl;
    levelOrder(root);

}