#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> ans;
    
    // Dynamic array having good functions to be worked with

    cout<<"Capacity-> "<<ans.capacity()<<endl;
    // when allocated memory is not enough it gets doubled

    cout<<"Size-> "<<ans.size()<<endl;
    // v.front() , v.back() , 
    // v.clear() -> clears the elements of the array but not capacity

    // v.shrink_to_fit -> reduces capacity

    vector<int> a(3,4);
    // arg1 = size , arg2 = value to be initialized with

    vector<int> b(a);
    // copy a to b

    // v.push_back() , v.pop_back()
    
}