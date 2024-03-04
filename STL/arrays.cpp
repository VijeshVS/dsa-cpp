#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int,5> arr = {1,2,3,4,5} ;
    // All elements are initialized by garbage
    // Array size is fixed ig
    cout<<"Size of the array is "<<arr.size()<<endl;
    cout<<"Element at index 2 -> "<<arr.at(2)<<endl;
    cout<<"First element "<<arr.front()<<endl;
    cout<<"Last element "<<arr.back()<<endl;
    cout<<"Is empty?? "<<arr.empty()<<endl;

}