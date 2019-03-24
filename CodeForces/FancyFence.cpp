#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int t,ang;
     cin>>t;
     while(t--){
        cin>>ang;

        if(ang < 60 || ang==180) cout<<"NO\n";
        else{
        	if( 360%(180-ang) == 0 ) cout<<"YES\n";
        	else cout<<"NO\n";
        }

     }
return 0;
}
