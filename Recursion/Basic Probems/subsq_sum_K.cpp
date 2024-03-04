#include <iostream>
#include <vector>
using namespace std;

void print(int ind,vector<int>& ans,int arr[],int sum,int act){
  
  if(ind>=3){
    if(sum == act){
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    }
    return;
  }

  ans.push_back(arr[ind]);
  print(ind+1,ans,arr,sum+arr[ind],act);
  ans.pop_back();
  print(ind+1,ans,arr,sum,act);

}

int main() {
  int arr[3] = {3,1,2};
  int sum = 3;
  cout<<"Subarray of the array having sum 3 is "<<endl;
  vector<int> ans;
  print(0,ans,arr,0,sum);
}