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
	
	long long int ar[1010]={0};
	ar[1] = 4;
	for(int i=2;i<=1000;i++) ar[i] = ar[i-1] + 3;
	for(int i=1;i<=1000;i++) ar[i] += ar[i-1];

	//for(int i=0;i<=10;i++) cout<<ar[i]<<" ";
	int t,n;
	while(1){
		cin>>n;

		if(n == 0) break;
		cout<<ar[n]+1<<endl;	
	}

	return 0;
}