#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    cin>>n;
    int cntlucky=0;
    int cntunlucky=0;
    while(n!=0){
      int r=n%10;
      if(r!=4 && r!=7){
        cntunlucky++;
      }
      else if(r==4 || r==7){
        cntlucky++;
      }
      n=n/10;
    }
    if(cntlucky==4 || cntlucky==7){
        cout<<"YES"<<endl;
        return 0;
    }
    else{
    cout<<"NO"<<endl;
    }
    return 0;
}