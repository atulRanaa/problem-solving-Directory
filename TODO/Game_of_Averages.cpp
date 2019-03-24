#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define F first
#define S second



int main()  {
    int n,avg; cin>>n>>avg;
    ll ar[n+1]={0};
    
    for(int i=1;i<=n;i++) cin>>ar[i];

    cout<<"Array ";for(int i=0;i<=n;i++) cout<<ar[i]<<" "; cout<<"\n\n";
    
    for(int i=1;i<=n;i++) ar[i]-=avg;
    
    cout<<"Sub avg("<<avg<<") ";for(int i=0;i<=n;i++) cout<<ar[i]<<" "; cout<<"\n\n";
    
    for(int i=1;i<=n;i++) ar[i] += ar[i-1];
    

    pair<ll, int> preindO[n+1];
    pair<ll, int> preindS[n+1];
    preindO[0] = {ar[0] , 0}; preindS[0] = {ar[0] , 0}; 
    for(int i=0;i<=n;i++) preindO[i]={ar[i], i};
    for(int i=0;i<=n;i++) preindS[i]={ar[i], i};
    
    sort(preindS, preindS+n+1);
    int maxind[n+1];

    maxind[n] = preindS[n].S;
    for(int i=n-1;i>=0;i--) maxind[i] = max(maxind[i+1],preindS[i].S);

    cout<<"cumArr ";for(int i=0;i<=n;i++) cout<<ar[i]<<" "; cout<<"\n\n";
    cout<<"Preind ";for(int i=0;i<=n;i++) cout<<preindS[i].S<<" "; cout<<"\n";
    cout<<"preval ";for(int i=0;i<=n;i++) cout<<preindS[i].F<<" "; cout<<"\n";
    cout<<" the maximum index with prefix greater than or equal to the current prefix:\n";
    for(int i=0;i<=n;i++) cout<<maxind[i]<<" "; cout<<"\n\n";
    
    int temp[n+1];
    for(int i=0;i<=n;i++){
        temp[i] = upper_bound(preindS,preindS+n+1, preindO[i])-preindS;
    }
    cout<<"Index ";for(int i=0;i<=n;i++) cout<<temp[i]<<" "; cout<<"\n";
    cout<<"find the smallest prefix >= the current prefix\n";
    for(int i=0;i<=n;i++) cout<< preindS[ temp[i]].F<<" "<<preindS[ temp[i]].S<<"\n"; cout<<"\n\n";
    cout<<" We subtract,from maxind of the binary searched prefix, the index of the current prefix\n";
    for(int i=0;i<=n;i++) cout<<maxind[ temp[i]]-i<<" "; cout<<"\n\n";
    
    //cout<<ans<<"\n";
    return 0;
}
