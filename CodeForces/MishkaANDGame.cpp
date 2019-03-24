#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;

 int ar[n][2];

    int m,c;
    for(int i=0;i<n;i++) cin>>ar[i][0]>>ar[i][1];
    m=0,c=0;

    for(int i=0;i<n;i++){
        if(ar[i][0] > ar[i][1]) m++;
        else if(ar[i][0] < ar[i][1]) c++;
    }

 if(m>c) cout<<"Mishka";
 else if(m<c) cout<<"Chris";
 else cout<<"Friendship is magic!^^";

return 0;
}