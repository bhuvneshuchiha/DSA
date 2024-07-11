#include <iostream>
using namespace std;

class Node{

public:
    Node* next = NULL;
    int data;

    Node(int d){
        this -> data = d;
    }

};

void middleOfLL(Node* &head){

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast -> next != NULL){

        fast = fast -> next -> next;
        slow = slow -> next;

    }
}

int main(){

    return 0;
}
