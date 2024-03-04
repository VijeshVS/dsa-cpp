#include <iostream>
#include <vector>
using namespace std;

void print(int ind,vector<int>& ans,int arr[]){
  if(ind>=3){
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
  }

  ans.push_back(arr[ind]);
  print(ind+1,ans,arr);
  ans.pop_back();
  print(ind+1,ans,arr);

}

int main() {
  int arr[3] = {3,1,2};
  cout<<"Subarray of the array is "<<endl;
  vector<int> ans;
  print(0,ans,arr);
}