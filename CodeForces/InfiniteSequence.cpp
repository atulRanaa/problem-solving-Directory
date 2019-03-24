#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    bool f= false;
        if(a==b) f=true;
    	if(c!=0 && (b-a)%c == 0 && (b-a)/c >=0) f =true;
    if(f) cout<<"YES";
    else cout<<"NO";
	return 0;
}