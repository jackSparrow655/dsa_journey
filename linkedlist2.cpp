#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;

    //constructor
    node(int d){
        this-> next = NULL;
        this->prev = NULL;
        this->data = d;
    }
    ~node(){
        int value = this->data;
        if(next != NULL){
            delete this;
            next = NULL;
        }
        cout << "node deleted for the value of:" << value << endl;
    }
};
int length(node* &head){
    int cnt = 1;
    node *temp = head;
    while(temp->next != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void print(node* &head){
    node * temp = head;
    if(length(head) == 1){
        cout << temp->data <<" ";
        return;
    }
    int cnt = 0;
    while(cnt < length(head)){
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
}
void insert_first(node* &head, int d){
    node *temp = new node(d);
    node *curr = head;
    temp->next = curr;
    curr->prev = temp;
    head = temp;

}

void insert_last(node*&tail, int d){
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insert_mid(int index, node* &head,node*&tail, int d){
    if(index == 1){
        insert_first(head, d);
        return;
    }
    // if(index == length(head)){
    //     insert_last()
    // }
    node* temp = new node(d);
    node* key = head;
    int cnt = 1;
    while(cnt < index -1){
        key = key->next;
        cnt++;
    }
    temp->prev = key;
    temp->next = key->next;
    key->next = temp;
    if(cnt == length(head)-1){
        tail = temp;
    }
}
void remove_node(node *&head, int index){
    if(index == 1){
        node*temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else if(index == length(head)){
        node*pre = NULL;
        node*post = head;
        int cnt = 1;
        while(cnt < index){
            pre = post;
            post = post->next;
            cnt++;
        }
        pre->next = NULL;
        post->next = NULL;
        post->prev = NULL;
        delete post;

    }
    else{
        node*pre = NULL;
        node*post = head;
        int cnt = 1;
        while(cnt < index){
            pre = post;
            post = post->next;
            cnt++;
        }
        pre->next = post->next;
        post->next->prev = pre;
        post->next = NULL;
        post->prev = NULL;
        delete post;
    }

}

int main(){
    node * node1 = new node(10);
    node*head = node1;
    node*tail = node1;
    print(head);
    cout << endl;
    insert_first(head, 20);
    insert_first(head, 30);
    insert_first(head, 50);
    insert_last(tail, 60);
    print(head);
    cout <<endl<<"length of the linked list is: "<< length(head) << endl;
    insert_mid(1,head,tail,40);
    print(head);
    cout << endl;
    // cout <<endl<<"length of the linked list is: "<< length(head) << endl;
    // cout <<"head is: " << head->data << endl;
    // cout << "tail is: " << tail-> data << endl;
    remove_node(head, 6);
    print(head);
    




}