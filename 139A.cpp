#include<bits/stdc++.h>
using namespace std;

int main(){
    int pages;
    cin>>pages;
    vector<int>arr(7);
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int i=0;
    while(pages>arr[i]){
        pages-=arr[i];
        i++;
        i%=7;
    }
    cout<<i+1<<endl;
    return 0;
}