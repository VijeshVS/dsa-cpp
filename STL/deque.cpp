#include <iostream>
#include <deque>

using namespace std;

void main(){
    deque<int> d;

    d.push_back(3);
    d.push_front(5);
    d.pop_back();
    d.pop_front();

    //d.front() , d.back() , d.size() 
    // d.at(index) , isEmpty()
    
    // d.erase(range)
    d.erase(d.begin(),d.begin() + 1);
    // one element i.e first element is deleted

    //print the elements of deque
    for(int i:d){
        cout<<i<<" ";
    }

    
}