#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>arr(n);
    unordered_map<long long,long long>umapst,umapend;

    for(int i=0;i<n;i++){
        cin>>arr[i];   
    }
    for(int i=0;i<n;i++){
        umapst[arr[i]]=i+1;
        umapend[arr[n-1-i]]=i+1;
    }
    int m;
    cin>>m;
    long long cntv=0,cntp=0;
    for(int i=0;i<m;i++){
        long long find;
        cin>>find;
        cntv+=umapst[find];
        cntp+=umapend[find];
    }
    cout<<cntv<<" "<<cntp<<endl;
    return 0;
}