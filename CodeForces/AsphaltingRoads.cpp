#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n;
     cin>>n;
     n = n*n;
     int row[51]={0};
     int col[51]={0};
     int r,c;
     for(int i=1;i<=n;i++){
        cin>>r>>c;
        if(row[r]==0 && col[c]==0){
           cout<<i<<" ";
           row[r]=1;
           col[c]=1;
        }
     }
return 0;
}
