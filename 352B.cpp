#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<int,vector<int>>umap;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        umap[temp].push_back(i+1);  
    }
    vector<pair<int,int>>ans;
    int cnt=0;
    for(auto it:umap){
        if(it.second.size()==1){
            ans.push_back({it.first,0});
            cnt++;
        }
        else{
            vector<int>arr=it.second;
            int diff=arr[1]-arr[0];
            bool flag=true;
            for(int i=1;i<arr.size();i++){
                if(diff!=arr[i]-arr[i-1]){
                    flag=false;
                    break;
                }
            }
            if(flag){
            cnt++;
            ans.push_back({it.first,diff});
            }
        }
    }
    cout<<cnt<<endl;
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}