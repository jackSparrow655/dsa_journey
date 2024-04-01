#include <bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;

//constructor called
node(int d){
    this->data = d;
    this->next = NULL;
}
~node(){
    int value = this->data;
    if(this->next != NULL){
        delete next;
        this->next = NULL;
    }
    cout << "node is deleted for the value: " << value << endl;
}

};
void insert_head(node* &head, int d){
    //create a new node
    node * temp = new node(d);
    temp-> next = head;
    head = temp; // same- temp->data = head;
}
void insert_tail(node* &tail, int d){
    node* temp = new node(d);
    tail-> next = temp;
    tail = temp;
}
void insert_mid(node * & head, int index, int d){
    node * nodeToinsert = new node(d);
    node* temp = head;
    if(index == 1){
        // nodeToinsert->next = temp;
        // head = nodeToinsert;
        insert_head(head, d);
        return;
    }
    // else{
    int cnt = 1;
    while(cnt < index-1){
        temp = temp-> next;
        cnt++;
    }
    nodeToinsert->next = temp-> next;
    temp->next = nodeToinsert;
    }


// }

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp-> next;
    }
}
void delete_node(int index, node * &head){
    if(index == 1){
        node*temp = head;
        temp = temp->next;
        head = temp;
        temp->next = NULL;
        delete temp;
    }
    else{
        node * temp = head;
        node *prev = NULL;
        node *curr = temp;
        int cnt = 1;
        while(cnt < index){
            prev = curr;
            curr = curr->next;
            cnt ++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    // node node1(10);
    node* node1 = new node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    node* head = node1;
    node* tail = node1;
    insert_tail(tail, 15);
    insert_tail(tail, 25);
    insert_tail(tail, 5);
    print(head);
    cout << endl;
    insert_mid(head, 1, 20);
    print(head);
    cout << endl;
    delete_node(1,head);
    print(head);

}