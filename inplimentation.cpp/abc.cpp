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
void display(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            node* fr = q.front();
            q.pop();
            cout << fr->data << " ";
            if(fr->left) q.push(fr->left);
            if(fr->right) q.push(fr->right);
        }
        cout << endl;
    }
}
int main(){
    node* root = NULL;
    root = build(root);
    display(root);
}
