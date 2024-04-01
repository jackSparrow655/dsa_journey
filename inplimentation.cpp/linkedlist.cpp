#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insertHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << -1;
}

void insertMiddle(node* &head,node* &tail, int posi, int d){
    if(posi == 1){
        insertHead(head, d);
        return;
    }
    node* temp = new node(d);
    node* head1 = head;
    for(int i = 0; i < posi-2; i++){
        head1 = head1->next;
    }
    node* temp2 = head1->next;
    head1->next = temp;
    temp->next = temp2;
    if(tail->next != NULL){
        tail = tail->next;
    }
}

int main(){
    node* head = new node(10);
    node* tail = head;
    insertHead(head, 15);
    insertHead(head, 20);
    insertHead(head, 25);
    insertHead(head, 35);
    insertTail(tail, 100);
    insertTail(tail, 500);
    insertMiddle(head, tail, 8, 17);
    cout <<"head =" << head->data << endl;
    print(head);
    cout << endl << "head = "<< head->data << endl << "tail = " << tail->data<< endl;
}