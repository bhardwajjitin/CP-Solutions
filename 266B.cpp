#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        int i=0;
        while(i<n-1){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i+=2;
                continue;
            }
            i++;

        }
    }
    cout<<s<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        int i=0;
        while(i<n-1){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i+=2;
                continue;
            }
            i++;

        }
    }
    cout<<s<<endl;
    return 0;
}