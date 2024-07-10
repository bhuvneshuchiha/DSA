#include <iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if (this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    //assuming the element is present in the list

    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else{
        //non empty list
        //assuming that the element is present in the list

        Node * curr = tail;
        while (curr -> data == element) {
            curr = curr -> next;
        }

        //element found and current is at the element

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void deleteNode(Node* &tail, int value){

    //empty list
    if (tail == NULL) {
        cout << "List is empty" << endl;
    }

    else{
        //non-empty

        //assuming the value is present in the list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 node linked list
        if (curr == prev) {
            tail = NULL;
        }

        //>=2 node linked list
        if (tail == curr) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }

}

void print(Node* tail){

    if (tail == NULL) {
        cout << " List is empty " << endl;
        return;
    }
    Node* temp = tail;
    cout << tail -> data << " ";

    while(tail -> next != temp){
        cout << tail -> data <<" ";
        tail = tail -> next;
    }
    cout << " ";

}

int main () {


    Node* tail = NULL;
    //inserting in an empty list
    insertNode(tail, 5, 10);


    return 0;
}
