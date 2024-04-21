#include<bits/stdc++.h>

using namespace std;

int mod= 1e9+7;

int solve(int idx, int n, vector<int> &arr){
    if(idx==0){

        return 1;
    }

    int notTake= solve(idx-1, n, arr);

    int take = 0;
    if(arr[idx]<=n)
     take = solve(idx, n-arr[idx], arr);

    return (take+notTake)%mod;
}

int main(){

    int n; 
    cin>>n;
    vector<int> arr= {1,2,3,4,5,6};

    cout<<solve(arr.size()-1, n, arr);
} 