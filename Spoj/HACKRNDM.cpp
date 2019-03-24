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

	int n,k; cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];

	unordered_map<int,int> m;
	int count = 0;
	for(int i=0;i<n;i++){
		if(m.find(ar[i]+k) != m.end()) count++;
		if(m.find(ar[i]-k) != m.end()) count++;

		m[ar[i]] = 1;
	}
	cout<<count;
	return 0;
}