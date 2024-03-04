#include <iostream>

using namespace std;

class twoStack{
    public:
        int *arr;
        int top1;
        int top2;
        int size;

    twoStack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }   

    void pushatOne(int data){
        if(top2-top1>1){
            top1++;
            arr[top1] = data;
        }
        else{
            cout<<"Stack is full "<<endl;
        }
    } 

    void pushatTwo(int data){
        if(top2-top1>1){
            top2--;
            arr[top2] = data;
        }
        else{
            cout<<"Stack is full ";
        }
    }

    int popatOne(){
        if(top1 == -1){
            cout<<"Stack One is empty";
            return;
        }
        int num = arr[top1];
        top1--;
        return num;
    }

    int popatTwo(){
        if(top2 == size){
            cout<<"Stack Two is empty";
            return;
        }
        int num = arr[top2];
        top2++;
        return num;
    }
};

int main(){


}