#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int t;
     cin>>t;
        while(t--){
            int ar[50005];
            int c,n;
            cin>>a[0]>>a[1]>>c>>n;
            for(int i=2;i<n;i++) ar[i]=(ar[i-1]*c + ar[i-2])%10;
            int num=0;
            for(int i=0;i<n;i++){
                num = num*10 + ar[i];
                num %= 41;
            }
            num %= 41;
            if(num == 0) cout<<"YES";
            else cout<<"NO";

            cout<<"\n";
        }
return 0;
}
