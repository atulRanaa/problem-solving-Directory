#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c;
int x,y,z;
int n;
int m;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    cin>>n;

    m = (a+b+c)/5 +((a+b+c)%5 ? 1 : 0);
    m+= (x+y+z)/10+((x+y+z)%10? 1 : 0);

    if(m <= n) cout<<"YES";
    else cout<<"NO";

return 0;
}