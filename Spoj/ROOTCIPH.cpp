#include<stdio.h>

int main(){
/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t,n,m; scanf("%d",&t);
	long long int a,b,c,ans;
	while(t--){
		scanf("%lld %lld %lld",&a,&b,&c);
		ans = a*a - 2*b;
		printf("%lld\n",ans);
	}

	return 0;
}