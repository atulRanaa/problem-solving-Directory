#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	long long int a,b,c,d,A,B,C,D;
	long long int m;
	while(1){
		cin>>a>>b>>c>>d>>A>>B>>C>>D;
		if(a==-1) break;

		m = max(a/A + (a%A?1:0), b/B + (b%B?1:0));
		m = max(m , c/C + (c%C?1:0));
		m = max(m , d/D + (d%D?1:0));

		cout<<m*A-a<<" "<<m*B-b<<" "<<m*C-c<<" "<<m*D-d<<endl;	
	}
	return 0;
}