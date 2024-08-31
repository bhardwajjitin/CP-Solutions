#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
       if(m<n)cout<<"No"<<endl;
       else{
        if(m%2==n%2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
       }
    }
    return 0;
}