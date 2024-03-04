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


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool DetectCycle(Node* head){
    Node* fast = head;
    Node* slow = head;

    while( fast!=NULL ){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast ){
            return true;
        }
    }

    return false;
}

Node* findLoopStart(Node*head){
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow)
            break;
    }

    slow = head;

    while(fast!=slow){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;

}

void removeLoop(Node* head){
    Node* inter = findLoopStart(head);

    Node* temp = inter;

    while(temp->next != inter){
        temp = temp->next;
    }

    temp->next = NULL;
    return;
}

void DeleteNode(Node* &head,int position){
    Node* curr = head;
    Node* prev = NULL;


    if(position == 1){
        prev = curr;
        curr = curr->next;
        head = curr;

        delete prev;
        return;
    }  
    else{
        int ct = 1;

        while(ct < position){
            prev = curr;
            curr = curr->next;
            ct++;
        }

        prev->next = curr->next;

        delete curr;
        return;
    }
}

Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = slow;

    if(head->next == NULL){
        return head;
    }

    do{
        fast = fast->next->next;
        slow = slow->next;

    }while(fast!=NULL && fast->next!=NULL);

    return slow;
}

 

int main(){
    Node *n = new Node(23);

    Node* head = n;
    Node* tail = n;

    // cout<<"Data is "<<n->data<<endl;
    // cout<<"Next Address is "<<n->next<<endl;

   InsertAtHead(head,90);
   InsertAtHead(head,15);
   InsertAtHead(head,12);
   InsertAtHead(head,1);
   InsertAtHead(head,32);

   print(head);

   tail->next = head->next->next;
   
    if(DetectCycle(head)){
        cout<<"Cycle is present "<<endl;
    }
    else
        cout<<"Cycle is not present "<<endl;

    Node* ans  = findLoopStart(head);

    cout<<"Data of Start Loop is "<<ans->data<<endl;  

    removeLoop(head);

    print(head);

   

}