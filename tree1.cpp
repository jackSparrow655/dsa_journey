#include <bits/stdc++.h> 
using namespace std;
class node {
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
node* build(node* root){
    cout << "enter the data:" << endl;
    int data;
    cin>> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout << "enter the value of left of " << data<< endl;
    root->left = build(root->left);
    cout << "enter the value of right of "<< data << endl;
    root->right = build(root->right);
    return root;
}
void level_travarsal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
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
void build_level_order(node* &root){
    queue<node*> q;
    cout << "enter data for root: ";
    int data;
    cin>> data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout << "enter data for left of "<< temp->data << ":";
        int left_data;
        cin>>left_data;
        if(left_data != -1){
            // temp->left->data = left_data;
            temp->left = new node(left_data);
            q.push(temp->left);
        }
        cout << "enter data fot right of "<< temp->data <<": ";
        int right_data;
        cin>>right_data;
        if(right_data != -1){
            // temp->right->data = right_data;
            temp->right = new node(right_data);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;
    // root = build(root);
    // 1 5 2 -1 -1 11 -1 -1 3 7 -1 -1 9 -1 -1
    build_level_order(root);
    // 1 5 3 2 11 7 9 -1 -1 -1 -1 -1 -1 -1 -1
    level_travarsal(root);

}
