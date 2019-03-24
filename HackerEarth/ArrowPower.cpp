#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    long int x,y,p;
    cin>>x>>y>>p;
    long int diff;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            diff = max( abs(x-i),abs(y-j));
            if(p-diff < 0) cout<<0<<" ";
            else cout<<p-diff<<" ";
        }

        cout<<"\n";
    }
return 0;
}
