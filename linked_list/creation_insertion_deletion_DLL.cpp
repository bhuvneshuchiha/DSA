#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~Node(){
        int value = this -> data;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

void print(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* head){
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
}

void insertAtHead(Node* &tail, Node* &head, int d){

    //HACK:empty list
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}

void insertAtTail(Node* &head, Node* &tail, int d){

    //HACK:empty list
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else{
        Node* temp = new Node(d);
        tail-> next = temp;
        temp -> prev = tail;
        temp = tail;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int d, int position){

    if (position == 1) {
        insertAtHead(tail, head, d);
        return;
    }
    Node* temp = head;
    int count = 1;

    while (count < position) {
        temp = temp -> next;
        count ++;
    }

    //insert at middle
    Node* nodeToInsert = new Node(d);
    //temp will be at the position where we want to insert
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

    //insert at last position
    if (temp -> next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

}

void deleteNode(int position, Node* &head){

    if (position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head,tail, 20);
    insertAtTail(tail, head, 22);
    print(head);

}
