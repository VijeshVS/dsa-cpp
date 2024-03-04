#include <iostream>

using namespace std;

class Node{
    public: 
        int data;
        Node *next;
        
    // Constructor initialization
    Node(int data){
        this->data = data;
        this->next = NULL;
    }    
};

void InsertAtHead(Node* &head,int data){
    //creation of the node
    Node* temp = new Node(data);

    //Dont forget Head is a pointer
    temp->next = head;

    head = temp;

}

void InsertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}