#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
string s;
cin>>s;
int cnt=0;
char prev=s[0];
for(int i=1;i<n;i++){
    if(s[i]==prev){
        cnt++;
    }
    else{
        prev=s[i];
    }
}
cout<<cnt<<endl;
}