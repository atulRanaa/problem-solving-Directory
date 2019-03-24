#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n;
     int temp;
     int ar[100010]={0};
     cin>>n;
     for (int i = 0; i < n; ++i)
     {
         /* code */
        cin>>temp;
        ar[temp]++;
     }
     for (int i = 1; i <= 100000; ++i)
     {
        ar[i]+=ar[i-1];
         /* code */
     }
     int q;
     cin>>q;
     for (int i = 0; i < q; ++i)
     {
        cin>>temp;
        if(temp > 100000) cout<<ar[100000]<<"\n";
        else cout<<ar[temp]<<"\n";
         /* code */
     }
return 0;
}
