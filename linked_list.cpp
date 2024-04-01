#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    //constructor
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insert_head(node* &head, int value){
    node *temp = new node(value);
    temp->next = head;
    head = temp;
}

void insert_tail(node* & tail, int value){
    node *temp = new node(value);
    tail->next = temp;
    tail = temp;
}

int length(node* &head){
    node* temp = head;
    int cnt = 1;
    while(temp->next != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void indert_position(node* &tail,node* &head, int index, int value){
    node* temp = new node(value);
    node* curr = head;
    if(index == 1){
        insert_head(head, value);
        return;
    }
    int cnt = 1;
    while(cnt < index - 1){
        curr = curr->next;
        cnt++;
    }
    // if(curr->next == NULL){
    //     insert_tail(tail, value);
    //     return;
    // }
    int n = length(head);
    if(index == n+1){
        insert_tail(tail, value);
    }
    
    temp->next = curr->next;
    curr->next = temp;

}

void print(node* &head){
    node *temp = head; 
    while(temp->next != NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << temp->data<< endl;
}

int main(){
    node* node1 = new node(10);
    node * head = node1;
    node * tail = node1;
    // cout << node1 -> data << endl;
    insert_tail(tail, 20);
    insert_tail(tail, 30);
    insert_tail(tail, 40);
    indert_position(tail,head, 5, 25);
    cout << "length of the linkedlist is: " << length(head) << endl;
    print(head);
    cout << "head is: "<< head->data <<endl;
    cout << "tail is: " << tail-> data << endl;

}