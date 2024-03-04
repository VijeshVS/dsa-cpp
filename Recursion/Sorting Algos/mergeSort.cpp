#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int low,int mid,int high){
  int left = low;
  int right = mid+1;

  vector<int> ans;

  while(left<=mid && right<=high){
    if(arr[left]>=arr[right]){
      ans.push_back(arr[right]);
      right++;
    }else{
      ans.push_back(arr[left]);
      left++;
    }
  }

  while(left<=mid){
    ans.push_back(arr[left]);
    left++;
  }

  while(right<=high){
    ans.push_back(arr[right]);
    right++;
  }

  for(int i = low ;i<=high;i++){
    arr[i] = ans[i-low];
  }

}


void mergeSort(int arr[],int low,int high){
  if(low == high) return;
  int mid = (low+high)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);

  merge(arr,low,mid,high);
}

int main() {
  int arr[5] = {2,7,4,5,1};
  mergeSort(arr,0,4);
  for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
  }
}