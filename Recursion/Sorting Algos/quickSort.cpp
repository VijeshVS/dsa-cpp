#include <iostream>
using namespace std;

int pI(int arr[],int low,int high){
  int pivot = arr[low];

  int i = low;
  int j = high;

  while(i<j){
    while(arr[i]<=pivot && i<=high-1){
      i++;
    }

    while(arr[j] > pivot && j>=low+1){
      j--;
    }

    if(i<j) swap(arr[i],arr[j]);
  }

  swap(arr[low],arr[j]);

  return j;
}

void quickSort(int arr[],int low,int high){
  if(low>high){
      return;
  }

  int pivotIndex = pI(arr,low,high);
  quickSort(arr,low,pivotIndex-1);
  quickSort(arr,pivotIndex+1,high);

}

int main() {
  int arr[5] = {2,5,1,7,4};

  quickSort(arr,0,4);

  for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
  }
}