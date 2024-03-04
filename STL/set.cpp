#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;
    // add elements in set
    s.insert(5);
    s.insert(2);

    // traversal through the set
    // for(auto i:s){
    //     cout<<i<<" ";
    // }

    set<int> p;

    bool i = p.begin() == p.end();

    cout<<i;
    // s.find() will return a itertor
}