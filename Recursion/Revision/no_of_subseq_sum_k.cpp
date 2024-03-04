#include <iostream>

using namespace std;

int solve(int ind,int arr[],int target){
    if(ind>=4){
        if(target == 0)
            return 1;
        else
            return 0;
    }

    int l = solve(ind+1,arr,target-arr[ind]);
    int r = solve(ind+1,arr,target);

    return l+r;

}

int main(){
    int arr[4] = {1,2,3,4};

    // vector<int> ds;

    int target = 4;

    

    cout<<"No of subsequences having the sum  K=4 is "<<solve(0,arr,target);
}