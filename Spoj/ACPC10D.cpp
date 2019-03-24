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

	long long int n,num = 1;
	while(1){
		cin>>n;
		if(n==0) break;
		long long int ar[n][3];
		for(int i=0;i<n;i++) cin>>ar[i][0]>>ar[i][1]>>ar[i][2];

		ar[0][2] += ar[0][1];
		for(int i=1;i<n;i++){
			if(i == 1){
				ar[i][0] += ar[i-1][1]; 
				ar[i][1] += min(ar[i][0],min(ar[i-1][1],ar[i-1][2])); 
				ar[i][2] += min(ar[i][1],min(ar[i-1][1],ar[i-1][2])); 
			}else{
				ar[i][0] += min(ar[i-1][0],ar[i-1][1]);
				ar[i][1] += min(min(min(ar[i][0],ar[i-1][0]),ar[i-1][1]),ar[i-1][2]);
				ar[i][2] += min(ar[i][1],min(ar[i-1][1],ar[i-1][2]));
			}
		}
		cout<<num<<". "<<ar[n-1][1]<<endl;
		num++;
	}
	return 0;
}