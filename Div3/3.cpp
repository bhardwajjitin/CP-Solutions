#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        int cnt=1;
        int currdiff=1;
        int prev=l;
        int curr=l+1;
        while(curr<=r){
           prev=curr;
           currdiff+=1;
           curr+=currdiff;
           cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}