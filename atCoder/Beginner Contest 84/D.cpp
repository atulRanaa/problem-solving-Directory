#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int prime[100001]={0};
    prime[0]=1;
    prime[1]=1;
    long int len=sqrt(100001);
    
    for(int i=2;i<=len;i++){
        if(prime[i]==0){
            for(int j= 2*i;j<100001;j += i){
                prime[j]=1;
            }
        }
    }
	int ans[100001]={0};
	for(int i=1;i<100001;i+=2){
		if( prime[i]==0 && prime[(i+1)/2]==0) ans[i]=1;
	}
	for(int i=1;i<100001;i++) ans[i] += ans[i-1];

	int q,l,r; cin>>q;
	int res=0;
	while(q--){
		cin>>l>>r;
		res = ans[r]-ans[l];

		if(prime[l]==0 && prime[(l+1)/2]==0) res += 1;
		cout<<res<<endl;
	} 
	return 0;
}