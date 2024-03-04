#include <iostream>

using namespace std;

class Node{
    public: 
        int data;
        Node *next;

        Node(int data){
            this-> data = data;
            this -> next = NULL;
        }

};

void insertatHead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        tail->next = temp;
        return;
    }
}

void print(Node* &head,Node* &tail){
    if(tail == head){
        cout<<head->data<<endl;
        return;
    }

    Node* temp = head;
    int ct = 1;

    while(temp->next != head->next || ct == 1 ){
        cout<<temp->data<<" ";
        temp = temp->next;
        ct++;
    }

}



int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insertatHead(head,tail,20);
  
    print(head,tail);

    
}