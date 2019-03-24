#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; ++i)
    {
      cin>>ar[i];
    }
    if(ar[n-1]==15) cout<<"DOWN";
    else if(ar[n-1]==0) cout<<"UP";
    else if(n==1) cout<<-1;
    else if(n>1){
      if(ar[n-1]-ar[n-2] > 0) cout<<"UP";
      else cout<<"DOWN";
    }
return 0;
}
