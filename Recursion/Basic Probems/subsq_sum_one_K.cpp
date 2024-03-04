#include <iostream>
#include <vector>
using namespace std;

bool print(int ind,vector<int>& ans,int arr[],int sum,int act){
  
  if(ind>=3){
    if(sum == act){
    for(auto i: ans){
        cout<<i<<" ";
    }
    return true;
    cout<<endl;
    }
    return false;
  }

  ans.push_back(arr[ind]);
  if (print(ind+1,ans,arr,sum+arr[ind],act))
      return true;

    ans.pop_back();
  
  if(print(ind+1,ans,arr,sum,act))
      return true;

  return false;

}

int main() {
  int arr[3] = {3,1,2};
  int sum = 2;
  cout<<"Subarray of the array having sum 3 is "<<endl;
  vector<int> ans;
  print(0,ans,arr,0,sum);
}