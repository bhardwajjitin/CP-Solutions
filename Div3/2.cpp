#include<bits/stdc++.h>
using namespace std;
int isperfect(int size){
    for(int i=1;i<=sqrt(size);i++){
        if(i*i==size)return i;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        string str;
        cin>>str;
        if(isperfect(size)==0){
            cout<<"NO"<<endl;
        }
        else{
            int temp=isperfect(size);
            vector<vector<char>>grid(temp,vector<char>(temp));
            int row=0;
            int i=0;
            while(i<size){
                int col=0;
                while(col<temp){
                    grid[row][col]=str[i];
                    col++;
                    i++;
                }
                row++;
            }
            bool flag=true;
            for(int i=0;i<temp;i++){
                if(grid[i][0]!='1' || grid[i][temp-1]!='1' || grid[0][i]!='1' || grid[temp-1][i]!='1'){
                    flag=false;
                    break;
                }
            }
            for(int i=1;i<temp-1;i++){
                for(int j=1;j<temp-1;j++){
                    if(grid[i][j]!='0'){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag==true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}