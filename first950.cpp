#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string res;
        cin>>res;
        unordered_map<char,int>umap;
        for(int i=0;i<m;i++){
            umap[res[i]]++;
        }
        int cnt=0;
        for(char ch='A';ch<='G';ch++){
            if(umap.find(ch)==umap.end()){
                cnt+=n;
            }
            else if(umap[ch]<n){
                cnt+=n-umap[ch];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}