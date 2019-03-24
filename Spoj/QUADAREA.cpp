#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
	int t;cin>>t;

	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;

		double s=(a+b+c+d)/2.0;
		double ans = sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%0.2lf\n",ans);
	}
	return 0;
}