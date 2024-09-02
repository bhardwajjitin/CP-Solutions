#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    int cnt=0;
    for(int j=1;j<=5;j++){
        if((sum+j)%(n+1)!=1)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}