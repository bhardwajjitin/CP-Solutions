#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<long long>orig_pre(n);
    orig_pre[0]=arr[0];
    for(int i=1;i<n;i++){
        orig_pre[i]=orig_pre[i-1]+arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<long long>sort_pre(n);
    sort_pre[0]=arr[0];
    for(int i=1;i<n;i++){
        sort_pre[i]=sort_pre[i-1]+arr[i];
    }

    int m;
    cin>>m;
    while(m--){
    int type,l,r;
    cin>>type>>l>>r;
    if(type==1){
        if(l>1){
          cout<<orig_pre[r-1]-orig_pre[l-2]<<endl;
        }
        else{
            cout<<orig_pre[r-1]<<endl;
        }
    }
    else{
        if(l>1){
          cout<<sort_pre[r-1]-sort_pre[l-2]<<endl;
        }
        else{
            cout<<sort_pre[r-1]<<endl;
        }
    }
    }
    return 0;
}