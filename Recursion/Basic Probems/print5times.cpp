#include <iostream>

using namespace std;

void print(int i){
    if(i==0){
        return;
    }

    cout<<"Vijesh ";
    print(i-1);
}

int main(){
    print(5);
}