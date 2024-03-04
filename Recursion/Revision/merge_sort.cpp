// Merge sort algo

#include <iostream>

using namespace std;


void merge(vector<int> &arr,int low,int mid,int high){
    int i = low;
    int j = mid+1;
    vector<int> ans;

    while(i<=mid && j<=high){
        if(arr[i]>=arr[j]){
            ans.push_back(arr[j]);
            j++;
        }else{
            ans.push_back(arr[i]);
            i++;
        }
    }

    while(i<=mid){
        ans.push_back(arr[i]);
        i++;
    }

    while(j<=high){
        ans.push_back(arr[j]);
        j++;
    }


    for(int i = low;i<=high;i++){
        arr[i] = ans[i-low];
    }
}

void mergeSort(vector<int> &arr,int low,int high){
    if(low == high){
        return;
    }
    int mid = (low+high)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    vector<int> arr(5,0);

    arr[0] = 4;
    arr[1] = 1;
    arr[2] = 5;
    arr[3] = 10;
    arr[4] = 2;

    cout<<"Array before merge sort is "<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,0,5-1);
    cout<<"Array after merge sort is "<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }

   
}