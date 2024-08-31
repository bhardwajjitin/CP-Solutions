#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>arr(n);
        int fav;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i+1==f){
                fav=arr[i];
            }
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int lastind,firstind;
        for(int i=0;i<n;i++){
            if(arr[i]==fav)lastind=i;
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==fav)firstind=i;
        }
        if(firstind+1>k)cout<<"No"<<endl;
        else if(lastind+1<=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"Maybe"<<endl;
        }
    }
    return 0;
}