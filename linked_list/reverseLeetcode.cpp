#include <iostream>
using namespace std;

class Node{

public:
    Node* next = NULL;
    int data;

    //constructor
    Node(int data){

        this -> data = data;
    }
};


void reverseList(Node* &head){

    //Initialize the pointers-
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while (curr != NULL) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
}

int main (int argc, char *argv[]) {


    Node* node1 = new Node(10);
    Node* head = node1;


    return 0;
}
