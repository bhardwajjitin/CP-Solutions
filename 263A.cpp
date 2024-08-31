#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<vector<int>>grid(5,vector<int>(5));
   int row,col;
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>grid[i][j];
        if(grid[i][j]==1){
            row=i;
            col=j;
        }
    }
   }
   cout<<abs(2-row)+abs(2-col);
   return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<vector<int>>grid(5,vector<int>(5));
   int row,col;
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>grid[i][j];
        if(grid[i][j]==1){
            row=i;
            col=j;
        }
    }
   }
   cout<<abs(2-row)+abs(2-col);
   return 0;
}