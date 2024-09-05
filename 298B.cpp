#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    string s;
    cin>>s;
    int diffx=c-a;
    int diffy=d-b;
    int east=0;
    int west=0;
    int north=0;
    int south=0;
    if(diffx>=0){
        east+=diffx;
    }
    if(diffx<0){
        west+=abs(diffx);
    }
    if(diffy>=0){
        north+=diffy;
    }
    if(diffy<0){
        south+=abs(diffy);
    }
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='E' && east>0){
            east--;
        }
        if(s[i]=='N' && north>0){
            north--;
        }
        if(s[i]=='S' && south>0){
            south--;
        }
        if(s[i]=='W' && west>0){
            west--;
        }
        cnt++;
        if(!north && !east && !south && !west){
        cout<<cnt<<endl;
        return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}