#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int k,r;
    cin>>k>>r;

    for (int i = 1; i <= 10; ++i)
    {   
        int a=(k*i)%10;
        if( a== r || a==0){ cout<<i;break;}
    }
return 0;
}
