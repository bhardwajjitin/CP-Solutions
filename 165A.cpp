#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int x=arr[i].first;
        int y=arr[i].second;
        bool right=false,left=false,up=false,down=false;
        for(int j=0;j<n;j++){
           int x1=arr[j].first;
           int y1=arr[j].second;
           if(x1>x && y==y1)right=true;
           if(x1<x && y==y1)left=true;
           if(x1==x && y1<y)down=true;
           if(x1==x && y1>y)up=true;
        }
        if(left && right && up && down){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}