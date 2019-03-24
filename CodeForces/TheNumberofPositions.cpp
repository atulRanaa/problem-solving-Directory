#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
int count=0;
    for (int i = a+1; i <= n; ++i)
    {
      if(n-i <= b) count++;
    }
    cout<<count;
return 0;
}
