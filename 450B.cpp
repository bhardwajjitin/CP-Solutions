#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,y;
    cin>>x>>y;
    long long n;
    cin>>n;
    // mathematical approach
    int op=n%6;
    long long ans;
    switch(op){
        case 0:
        ans=x-y;
        break;
        case 1:
         ans=x;
        break;
        case 2:
         ans=y;
        break;
        case 3:
        ans=y-x;
        break;
        case 4:
        ans=-x;
        break;
        case 5:
        ans=-y;
        break; 
        default:
        cout<<-1<<endl;
        break;
    }
    if(ans>=0){
        cout<<ans%1000000007<<endl;
    }
    else{
        ans=ans%1000000007;
        ans+=1000000007;
        cout<<ans%1000000007<<endl;
    }
    return 0;
}