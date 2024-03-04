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



void InsertAtPos(Node* &tail,Node* &head,int position,int data){
    Node* toInsert = new Node(data);
    Node* traverser = head;

    if(position == 1){
        InsertAtHead(head,data);
        return;
    }

    int ct = 1;

    while(ct<position-1){
        traverser = traverser->next;
        ct++;
    }

    if(!traverser->next){
        InsertAtTail(tail,data);
        return;
    }


    toInsert->next = traverser->next;
    traverser->next = toInsert;

}

void DeleteNode(Node* &head,int position){
    Node* curr = head;
    Node* prev = NULL;


    if(position == 1){
        prev = curr;
    
    }  
    else{

    }
}



void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}