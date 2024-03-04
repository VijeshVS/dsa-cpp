
// print the first subsequence having the sum K
#include <iostream>

using namespace std;


bool solve(int ind,int arr[],int target,vector<int> &ds){
    if(ind>=4){
        if(target == 0){
            for(int i = 0;i < ds.size();i++){
                cout<<ds[i]<<" ";
            }
            return true;
        }
        return false;
    }

    ds.push_back(arr[ind]);
    if(solve(ind+1,arr,target-arr[ind],ds)){
        return true;
    }
    ds.pop_back();
    if(solve(ind+1,arr,target,ds)){
        return true;
    }

}

int main(){
    int arr[4] = {1,2,3,4};

    vector<int> ds;

    int target = 4;

    solve(0,arr,target,ds);

    return 0;
}