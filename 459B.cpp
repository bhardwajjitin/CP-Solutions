#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long mini=arr[0];
    long long maxi=arr[arr.size()-1];
    long long diff=maxi-mini;
    cout<<diff<<" ";
    long long cntmini=0,cntmaxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==mini){
            cntmini++;
        }
        if(arr[i]==maxi){
            cntmaxi++;
        }
    }
    if(maxi!=mini){
    cout<<cntmaxi*cntmini;
    }
    else{
      long long  sum=0;
      for(long long i=1;i<cntmaxi;i++){
        sum+=i;
      }
      cout<<sum;
    }

}