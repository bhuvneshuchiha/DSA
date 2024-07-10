#include <iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if (this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for data" << endl;
    }
};

void insertAtHead(Node* &head, int d){

    //HACK:if the list is empty
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
    }

    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }

}

void print(Node* head){
    Node* temp = head;
    while (temp -> next != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void deleteAtPosition(Node* &tail, Node* &head, int position){

    if (position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position) {
            if (curr -> next == NULL) {
                prev -> next = curr;
                curr -> next = NULL;
                prev = tail;
            }
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


void insertAtTail(Node* &tail, int d){

    //HACK:if the list is empty
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
    }

    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail, Node* &head,int position, int d){
    if (position == 1) {
        insertAtHead(head,  d);
        return;
    }
    int count = 1;
    Node* temp= head;

    while (count < position - 1) {
        temp = temp -> next;
        count++;
    }

    //Inserting at last position
    if (temp -> next == NULL) {
        insertAtTail(tail, d);
    }

    //Create node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


int main () {

    //Created a new node
    Node* node1 = new Node(10);
    /*cout << node1 -> data << endl;*/
    /*cout << node1 -> next << endl;*/

    //Pointed head to the new created node.
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);
    insertAtTail(tail, 20);

    insertAtPosition(tail, head, 2, 25);
    print(head);
    return 0;
}
