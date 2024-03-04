#include<iostream>
void demo(){
    static int a=0;
    a++;
    std::cout<<a;
}
int main(){
    demo();
    std::cout<<"\n";
}