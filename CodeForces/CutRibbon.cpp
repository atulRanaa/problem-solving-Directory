#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	set< int > s;
	s.insert(a);
	s.insert(b);
	s.insert(c);

	if(s.size() == 1) cout<<n/a;
	else if(s.size() == 2){
		int sum=0;
		if(a==b) b=c;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				int t=i*a+j*b;
				if( t >  n) break;
				else if(t == n)	sum = max(sum,i+j);
			}
		}
		cout<<sum;
	}
	else{
		int sum=0;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				int t=i*a+j*b;
				if(t > n) break;
                else if( (n-t)%c == 0 ){
				    sum = max(sum,i+j+ (n-t)/c );
			    }
			}
		}
		cout<<sum;
	}
	return 0;
}