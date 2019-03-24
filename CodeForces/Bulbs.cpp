#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int ar[111]={0};
     int n,m;
     int num,temp;
     cin>>n>>m;
     for(int i=0;i<n;i++){
        cin>>num;
        for(int j=0;j<num;j++){
            cin>>temp;
            ar[temp]=1;
        }
     }
     bool f=true;
     for(int i=1;i<=m;i++){
        if(ar[i] == 0){
            f = false;
            break;
        }
     }
     if(f) cout<<"YES";
     else cout<<"NO";
return 0;
}
