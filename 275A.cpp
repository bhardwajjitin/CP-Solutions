#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>grid(3,vector<int>(3,1));
    vector<vector<int>>times(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>times[i][j];
            times[i][j]=times[i][j]%2;
        }
    }
    vector<int>di={-1,0,0,1};
    vector<int>dj={0,-1,1,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int num=times[i][j];
            if(num==1){
            for(int k=0;k<4;k++){
                int nrow=i+di[k];
                int ncol=j+dj[k];
                if(nrow>=0 && nrow<3 && ncol>=0 && ncol<3){
                    grid[nrow][ncol]=!grid[nrow][ncol];
                }
            }
            grid[i][j]=!grid[i][j];
            }
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<grid[i][j];
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>grid(3,vector<int>(3,1));
    vector<vector<int>>times(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>times[i][j];
            times[i][j]=times[i][j]%2;
        }
    }
    vector<int>di={-1,0,0,1};
    vector<int>dj={0,-1,1,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int num=times[i][j];
            if(num==1){
            for(int k=0;k<4;k++){
                int nrow=i+di[k];
                int ncol=j+dj[k];
                if(nrow>=0 && nrow<3 && ncol>=0 && ncol<3){
                    grid[nrow][ncol]=!grid[nrow][ncol];
                }
            }
            grid[i][j]=!grid[i][j];
            }
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<grid[i][j];
        }
        cout<<endl;
    }
}