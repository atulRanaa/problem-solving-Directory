#include<bits/stdc++.h>
using namespace std;

unordered_set<long long int> s;
long long int ans[500001];
int main(){
/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    s.insert(0);
    ans[0] = 0;
    long long int curr,prev = 0,k;
    for (long long int i=1; i<= 500000; i++)
    {
        curr = prev - i;
        if (curr < 0 || s.find(curr) != s.end())
           curr = prev + i;
 
        s.insert(curr);
        ans[i] = curr;
        prev = curr;
    }
	while(1){
		
		scanf("%lld",&k);
		if(k == -1) break;
		else printf("%lld\n",ans[k]);
	}

	return 0;
}