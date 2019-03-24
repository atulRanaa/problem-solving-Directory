#include<bits/stdc++.h>
using namespace std;

int main(){
/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long int t,n,m;
	while(1){
		cin>>n>>m;
		if(n==0 && m==0) break;
		t = (n*m)/__gcd(n,m);
		cout<<(t/n)*(t/m)<<endl;
	}

	return 0;
}