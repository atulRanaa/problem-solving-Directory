#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);\
    long int n,m,k;
    cin>>n>>m>>k;

    long int ar[m],Fedor;
    for(int i=0;i<m;i++) cin>>ar[i];
    cin>>Fedor;
long int count=0;
    for(int i=0;i<m;i++){
    	if(__builtin_popcountll(Fedor^ar[i]) <= k) count++;
    }

    cout<<count;    
return 0;
}
