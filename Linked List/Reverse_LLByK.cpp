#include <iostream>
#include <map>

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


void print(Node* &head){
    
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


Node* reverseByK(Node* head,int k){

    if(head == NULL){
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;


    int ct = 1;

    while(ct < k){
        prev = curr;
        curr = curr->next;
        ct++;
    }

    forward = curr->next;

    curr->next = prev;
    prev->next = NULL;
    prev = curr;
    curr = forward;
    
    head->next = reverseByK(forward,k);

    return prev;

}

void removeDups(Node* head){
    map<int , bool> count;
    count[head->data] = true;
   
    Node* temp = head;

    while(temp!=NULL && temp->next!=NULL){
        if(count[temp->next->data]){
            Node* next_next = temp->next->next;
            Node* del = temp->next;
            temp->next = next_next;
            delete del;
        }
        else{
            count[temp->next->data] = true;
            temp = temp->next;
        }
    }

}

int main(){
    Node *n = new Node(5);

    Node* head = n;
    Node* tail = n;

    InsertAtTail(tail,2);
    InsertAtTail(tail,2);
    InsertAtTail(tail,4);


  

    print(head);
   removeDups(head);
   print(head);



}