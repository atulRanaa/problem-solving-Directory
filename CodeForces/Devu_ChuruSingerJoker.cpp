#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,d;
    cin>>n>>d;

    int ar[110];
    int i,sum=0;
    for(i=0;i<n;i++) cin>>ar[i];
    for(i=0;i<n;i++) sum+=ar[i];
  int mintime=sum+(n-1)*10;

  if(mintime > d) cout<<-1;
  else cout<<(d-sum)/5;     
return 0;
}
