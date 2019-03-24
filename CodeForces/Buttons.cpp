#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int u=n,p=0;
    int res=0;
    while(u != 1){
       res += u*(p+1)-p;
       u--;
       p++;
    }
    cout<< res+1;
return 0;
}
