#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    deque<pair<int,int>>arr(n);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back({temp,i+1});
    }
    int ind;
    while(!arr.empty()){
        if(arr.front().first<=m){
            ind=arr.front().second;
            arr.pop_front();
        }
        else{
            auto it=arr.front();
            arr.pop_front();
            int change=it.first-m;
            int index=it.second;
            arr.push_back({change,index});
        }
    }
    cout<<ind<<endl;
    return 0;

}