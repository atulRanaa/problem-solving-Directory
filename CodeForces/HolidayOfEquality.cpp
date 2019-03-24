#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     long int n;
     cin>>n;

     long int ar[n];
     long int sum=0,i;
     for(i=0;i<n;i++) cin>>ar[i];
     for(i=0;i<n;i++) sum+=ar[i];
     long int *e=max_element(ar,ar+n);

     cout<<((*e)*n-sum);
return 0;
}
