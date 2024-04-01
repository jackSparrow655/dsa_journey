#include <bits/stdc++.h> 
using namespace std;
class node {
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
node* build(node* root){
    cout << "enter the data: ";
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }
    root = new node(d);
    cout <<"enter the value of left of" << d <<endl;
    root->left = build(root->left);
    cout << "enter the value of right of " << d << endl;
    root->right = build(root->right);
    return root;
}
void level_traversal(node* root){
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
            cout << temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}
int main(){
    node *root = NULL;
    root = build(root);
    level_traversal(root);
}