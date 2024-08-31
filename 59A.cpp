#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cntlower=0;
    int cntupper=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')cntupper++;
        else cntlower++;
    }
    if(cntlower>=cntupper){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
      for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }  
    }
    cout<<s<<endl;
    return 0;
}
