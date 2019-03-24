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
	int t,n; cin>>t;
	for(int c=1;c<=t;c++){
		cin>>n;
		long long int ar,ans = 12345670,temp = 0;
		for(int i=0;i<n;i++){
			cin>>ar;
			temp += ar;
			if(temp < ans) ans = temp;
		}
		if(ans > 0) cout<<0<<endl;
		else cout<<-1*ans +1<<endl;
	}

	return 0;
}