#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

void insertatHead(Node* &head,Node* &tail,int data){

    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }

}

void insertatTail(Node* &head,Node* &tail,int data){

    if(tail == NULL){
        Node*temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }

}

void insertNode(Node* &head,Node* &tail,int position,int data){
    if(position == 1){
        Node *temp = new Node(data);
        insertatHead(head,tail,data);
        return;
    }
    else{
        Node *n = new Node(data);
        Node *temp = head;
        int ct = 1;

        while(ct<position - 1){
            temp = temp->next;
            ct++;
        }

        if(!temp){
            insertatTail(head,tail,data);
            return;
        }

        n->next = temp->next;
        temp->next = n;
        n->prev = temp;
        return;

    }
}

void DeleteNode(Node* &head,int position){
    
    if(position == 1){
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;

        int ct = 1;
        while(ct<position){
            prev = curr;
            curr = curr->next ;
            ct++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next->prev = prev;

        delete curr;

    }

}

void print(Node* &head){
    Node* temp = head;
    
    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    cout<<endl;
}

int main(){

    Node* tail = NULL;
    Node* head = NULL;

    insertatHead(head,tail,10);
    print(head);
    insertatTail(head,tail,20);
    print(head);
    insertatTail(head,tail,12);
    print(head);
    insertatTail(head,tail,34);
    print(head);
    insertatTail(head,tail,11);
    print(head);

    DeleteNode(head,3);
    print(head);

    
}