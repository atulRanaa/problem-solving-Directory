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

	int primeC[10000]={0};
	for(int i=2;i <= 5000; i++){
		if(primeC[i] == 0){
			for(int j=2*i;j<=10000; j+= i) primeC[j] += 1;
		}
	}
	vector<int> v;
	int i=2;
	while(v.size()<= 1000 && i<10000){
		if(primeC[i] >= 3) v.push_back(i);
		i++;
	}
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
}