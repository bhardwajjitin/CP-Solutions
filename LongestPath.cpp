#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    vector<int>indegree(n+1,0);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        indegree[u]++;
    }
    queue<int>q;
    for(int i=0;i<=n;i++){
        if(indegree[i]==0)q.push(i);
    }
    
    vector<int>dp(n+1,0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            indegree[it]--;
            dp[it]=max(dp[it],dp[node]+1);
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    int ans=0;
    for(auto it:dp){
        ans=max(ans,it);
    }
    cout<<ans;

    return 0;
}