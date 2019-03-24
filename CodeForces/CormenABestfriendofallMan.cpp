#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n,k;
     cin>>n>>k;
     int ar[n];
     for(int i=0;i<n;i++) cin>>ar[i];
     int sum=0,s=0;
     for(int i=1;i<n;i++){
        sum = ar[i-1]+ar[i];
        if(sum < k) {
            ar[i] += (k-sum);
            s += (k-sum);
        }
     }
     cout<<s<<"\n";
     for(int i=0;i<n;i++) cout<<ar[i]<<" ";
return 0;
}
