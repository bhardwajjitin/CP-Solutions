#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int>umap;
    for(auto it:s){
        umap[it]++;
    }
    vector<int>count;
    for(auto it:umap){
        if(it.second%2!=0){
            count.push_back(it.second);
        }
    }
    int flag=0;
    if(count.size()>0){
    sort(count.begin(),count.end());
    int i=0;
    while(i<count.size()-1){
       while(count[i]!=0){
           count[i]--;
           flag=!flag;
       }
       i++;
    }
    }
    if(flag==0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    return 0;
}