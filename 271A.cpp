#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>st;
    int curr=n+1;
    while(st.size()!=4){
        int temp=curr;
       while(curr!=0){
        int r=curr%10;
        st.insert(r);
        curr/=10;
       }
       if(st.size()==4){
        cout<<temp<<endl;
        return 0;
       }
       n+=1;
       curr=n;
       st.clear();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>st;
    int curr=n+1;
    while(st.size()!=4){
        int temp=curr;
       while(curr!=0){
        int r=curr%10;
        st.insert(r);
        curr/=10;
       }
       if(st.size()==4){
        cout<<temp<<endl;
        return 0;
       }
       n+=1;
       curr=n;
       st.clear();
    }
    return 0;
}