#include <bits/stdc++.h>
using namespace std;
 class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
 };
 node* build_tree(node* root){
    int val;
    cout << "enter the value: " ;
    cin >> val;
    if(val == -1) return NULL;
    root = new node(val);
    cout << "enter the data for " << root->data << " ka left : ";
    root->left = build_tree(root->left);
    cout << "enter the data for " <<  root->data <<" ka right : ";
    root->right = build_tree(root->right);
    return root;
 }
 void level_order(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp != NULL) cout << temp->data << " ";
        else if(temp == NULL){
            cout << endl;
            if(!q.empty()) q.push(NULL);
        }
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
 }
//10 7 5 -1 -1 9 -1 -1 15 -1 17 16 -1 -1 19 -1 -1 
 int main(){
    node* root = NULL;
    root = build_tree(root);
    level_order(root);
 }