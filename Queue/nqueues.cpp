#include <iostream>

using namespace std;

class NQueues{
    public:
        int *arr;
        int *next;
        int *front;
        int *rear;
        int freeSpot;
        int size;

    NQueues(int size,int m){
        this->size = size;
        arr = new int[size];
        for(int i=0;i<size;i++){
            arr[i] = -1;
        }
        next = new int[size];

        //both are initialized to -1
        front = new int[m];
        rear = new int[m];

        for(int i=0;i<m;i++){
            front[i] = -1;
            rear[i] = -1;
        }

        freeSpot = 0;
        
        for(int i=0;i<size;i++){
            next[i] = i+1;
        }

        next[size-1] = -1;
    }    

    void enqueue(int x,int qn){
        if(freeSpot == -1){
            cout<<"Queue is full "<<endl;
            return;
        }

        int index = freeSpot;
        // cout<<"FreeSpot is -> "<<freeSpot<<endl;
        freeSpot = next[index];
        if(front[qn-1] == -1){
            front[qn-1] = index;
            rear[qn-1] = index;
        }
        else{
            next[rear[qn-1]] = index;
            rear[qn-1] = index;
        }
        arr[index] = x; 
        
    }

    int dequeue(int qn){
        if(front[qn-1] == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int index = front[qn-1];

        front[qn-1] = next[index];
        next[index] = freeSpot;
        freeSpot = index;

        int num = arr[index];
        arr[index] = 0;
        return num;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"->";
        }
        cout<<endl;
    }
};


int main(){
    NQueues q(6,2);

    q.enqueue(12,1);
    q.print();

    q.enqueue(13,1);
    q.enqueue(16,1);

    q.print();

    cout<<"Popped element is "<<q.dequeue(1)<<endl;

    q.print();
}
