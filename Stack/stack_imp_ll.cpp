#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack{
    public: 
        Node* top;

        Stack(){
            top = NULL;
        }

    void spush(int data){
    if(top == NULL){
        Node* temp = new Node(data);
        temp->prev = top;
        top = temp;
    }
    else{
        Node* temp = new Node(data);
        top->next = temp;
        temp->prev = top;
        top = temp;
    }
}

int spop(){
    int num = top->data;
    Node* delele = top;
    Node* temp = top->prev;
    temp->next = NULL;
    delete delele;
    top = temp;
    return num;
}

void print(){
    Node* temp = top;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<"X";
    cout<<endl;
}

};



// push pop top

int main(){
    Stack st;

    st.spush(2);
    st.spush(3);
    st.spush(4);
    int k = st.spop();
    st.print();
}