#include<bits/stdc++.h>
using namespace std;


int main(){
	long long int n,y;
	cin>>n>>y;
	long long int temp;
	int a,b,c;
	bool f = false;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if((i+j) > n) break;

			temp = 10000*i + 5000*j + 1000*(n-i-j);
			if( temp == y){
				a = i;
				b = j;
				c = n-i-j;
				f = true;
				break;
			}
		}
		if(f) break;
	}
	if(f) cout<<a<<" "<<b<<" "<<c;
	else cout<<-1<<" "<<-1<<" "<<-1;
	return 0;
}