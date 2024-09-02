#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        // if(a==0 && b==0){
        //     cout<<"YES"<<endl; 
        //     continue;
        // }
        // else if(a==0 && b%2!=0){
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        // else if(b==0 && a%2!=0){
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        while(b>1){
           b-=2;
        }
        if(b>0 && a>=2){
            a-=2;
        }
        else if(b>0 && a<2){
           cout<<"NO"<<endl;
           continue;
        
        }
        if(a%2==0){
            cout<<"YES"<<endl;
        }
        else if(a%2!=0){
            cout<<"NO"<<endl;
        }
    }
}