#include<bits/stdc++.h>
#include<numeric>
using namespace std;

// DATE 26 may 2024
// TLE
long long solve(vector<long long>&arr,int ind,long long lcm,unordered_map<long long,int>&umap,int cnt,vector<long long>&dp){
    if(ind<0){
        if(umap.find(lcm)==umap.end()){
            return cnt;
        }
        return 0;
    }
    if(dp[ind]!=-1)return dp[ind];
    long long mygcd=__gcd(arr[ind],lcm);
    long long multi=arr[ind]*lcm;
    long long exc=solve(arr,ind-1,lcm,umap,cnt,dp);
    long long inc=solve(arr,ind-1,multi/mygcd,umap,cnt+1,dp);
    return dp[ind]=max(inc,exc);   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        unordered_map<long long,int>umap;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            umap[arr[i]]++;
        }
        vector<long long>dp(n,-1);
        cout<<solve(arr,n-1,1,umap,0,dp)<<endl;
    }
    return 0;
}