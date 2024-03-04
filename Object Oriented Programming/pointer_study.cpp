#include <iostream>

using namespace std;

// String supports C-string procedure
// where as int supports *p procedure


int main(){
    char *name  = new char[10];
    int *p = new int;

    *p = 5;


    cout<<endl;
    cout<<"His name is "<<name<<endl;
    cout<<"His grade is "<<*p<<endl;
}