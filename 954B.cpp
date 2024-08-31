#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>>grid(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>di={-1,0,0,1};
        vector<int>dj={0,-1,1,0};
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                bool flag=true;
                for(int k=0;k<4;k++){
                    int nrow=i+di[k];
                    int ncol=j+dj[k];
                    if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && grid[nrow][ncol]>=grid[i][j]){
                       flag=false;
                       break;
                    }
                }
                if(flag){
                    pq.push({i,j});
                }
            }
        }
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int row=it.first;
            int col=it.second;
            int maxi=INT_MIN;
            for(int i=0;i<4;i++){
                int nrow=row+di[i];
                int ncol=col+dj[i];
                if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && grid[nrow][ncol]<grid[row][col]){
                    maxi=max(maxi,grid[nrow][ncol]);
                }
            }
            grid[row][col]=maxi;
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}