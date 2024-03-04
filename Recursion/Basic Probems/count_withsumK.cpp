#include <iostream>
#include <vector>
using namespace std;

void print(int ind,vector<int>& ans,int arr[],int sum,int act,int &count){
  
  if(ind>=3){
    if(sum == act){
      count++;
    }
    return;
  }

  ans.push_back(arr[ind]);
  print(ind+1,ans,arr,sum+arr[ind],act,count);
  ans.pop_back();
  print(ind+1,ans,arr,sum,act,count);

}

int main() {
  vector<int> ans;
  int arr[3] = {3,1,2};
  int sum = 10;
  int count = 0;
  print(0,ans,arr,0,sum,count);
  cout<<"Number of Subarray of the array having sum 3 is "<<count<<endl;
  
  
}