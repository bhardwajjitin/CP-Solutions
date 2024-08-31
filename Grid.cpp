#include<bits/stdc++.h>
#define mod 1000000007;
using namespace std;

int solve(vector<vector<char>>&grid,int m,int n,int i,int j,vector<vector<int>>&dp){
    if(i==m-1 && j==n-1)return 1;
    if(i>=m || j>=n)return 0;

    if(dp[i][j]!=-1)return dp[i][j];
    int down=0;
    int right=0;
    if(i+1<m && grid[i+1][j]!='#')down=solve(grid,m,n,i+1,j,dp);
    if(j+1<n && grid[i][j+1]!='#')right=solve(grid,m,n,i,j+1,dp);
    return dp[i][j]=(down+right)%mod;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>>grid(m,vector<char>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<int>>dp(m,vector<int>(n,-1));
    cout<<solve(grid,m,n,0,0,dp);
    return 0;
}