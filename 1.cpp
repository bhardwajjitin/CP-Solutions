#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    int mini=INT_MAX;
    for(int c=a;c<=b;c++){
    int temp=c-a+ b-c;
     mini=min(mini,temp);
    }
    cout<<mini<<endl;
    }
    return 0;
}