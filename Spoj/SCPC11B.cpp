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
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);
		int cur = 200;
		bool f = true;
		for(int i=0;i<n;i++){
			if(ar[i] <= cur){
				cur = ar[i]+200;
			}
			else{
				f = false;
				break;
			}
		}
		if( cur < 1422){
			f = false;
		}
		cur = cur - 1422;
		cur = 1422 - cur;
		for(int i=n-1;i >= 0;i--){
			if( cur <= ar[i]){
				cur = ar[i]-200;
			}
			else{
				f = false;
				break;
			}
		}
		if(cur > 0) f = false; 
		if(f) cout<<"POSSIBLE"<<endl;
		else cout<<"IMPOSSIBLE"<<endl;
	}

	return 0;
}