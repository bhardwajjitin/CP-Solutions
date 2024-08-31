#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int first=abs(a-a)+abs(b-a)+abs(c-a);
        int second=abs(a-b)+abs(b-b)+abs(c-b);
        int third=abs(a-c)+abs(b-c)+abs(c-c);
        cout<<min(first,min(second,third))<<endl;
    }
    return 0;
}