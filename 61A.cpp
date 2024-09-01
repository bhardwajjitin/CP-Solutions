#include<bits/stdc++.h>
using namespace std;

int main(){
    string num1,num2;
    cin>>num1>>num2;
    string ans="";
    for(int i=0;i<num1.size();i++){
        if(num1[i]!=num2[i]){
            ans=ans+"1";
        }
        else{
            ans=ans+"0";
        }
    }
    cout<<ans<<endl;
    return 0;
}