#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>>grid(m,vector<char>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    queue<pair<pair<int,int>,char>>q;
    int di[]={-1,0,0,1};
    int dj[]={0,-1,1,0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='.'){
                q.push({{i,j},'B'});
                grid[i][j]='B';
                while(!q.empty()){
                    auto top=q.front();
                    int row=top.first.first;
                    int col=top.first.second;
                    char color=top.second;
                    q.pop();
                    for(int i=0;i<4;i++){
                        int nrow=row+di[i];
                        int ncol=col+dj[i];
                        if(nrow>=0 & ncol>=0 && nrow<m && ncol<n && grid[nrow][ncol]=='.'){
                            if(color=='W'){
                                grid[nrow][ncol]='B';
                            }
                            else{
                                grid[nrow][ncol]='W';
                            }
                            q.push({{nrow,ncol},grid[nrow][ncol]});
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}