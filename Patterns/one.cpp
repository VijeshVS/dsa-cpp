// 15
// 14 13
// 12 11 10
// 9   8  7  6
// 5   4  3  2  1

#include <iostream>

using namespace std;

int main(){
   int count = 15;

   for(int i = 0;i<5;i++){
        for(int j = 0;j<=i;j++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
   }
}