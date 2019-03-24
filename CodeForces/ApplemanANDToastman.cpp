#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ar[3*100000+5];
int main(){
    ll n,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++) cin>>ar[i];
    for(i=0;i<n;i++) sum+=ar[i];
    i=0;
    ll score = 0;
    sort(ar ,ar+n);
    if(n==1) score += sum;
    else{
        score += sum;
        while(i < n-2){
            score += sum;
            sum -= ar[i];
            i++;
        }
        score += sum;
    }
    cout<<score;
return 0;
}