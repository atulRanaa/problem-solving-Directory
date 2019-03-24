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

	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<(n+1)/2<<endl;
	}
	return 0;
}