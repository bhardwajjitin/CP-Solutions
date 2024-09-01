#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int m,n;
    cin>>m>>n;
    int next=-1;
    for(int i=m+1;i<=n;i++){
        if(isprime(i)){
            next=i;
            break;
        }
    }
    if(next!=n)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}