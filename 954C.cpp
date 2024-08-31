#include<bits/stdc++.h>
using namespace std;
long long solve(string&s,int ind){
    if(ind>=s.size()){
        return 0;
    }
    s.insert(s.begin()+ind,'+');
    int add=solve(s,ind+2);
    s.erase(s.begin()+ind);
    s.insert(s.begin()+ind,'*');
    int mul=solve(s,ind+2);
    s.erase(s.begin()+ind);
    int same=solve(s,ind+1);
    return min(same,min(add,mul));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s,1)<<endl;
    }
    return 0;
}