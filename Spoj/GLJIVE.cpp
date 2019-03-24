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

	int ar[10];
	for(int i=0;i<10;i++) cin>>ar[i];
	for(int i=1;i<10;i++) ar[i] += ar[i-1];
	int pre=110,ans;
	for(int i=0;i<10;i++){
		if( abs(ar[i]-100) <= pre){
			ans = ar[i];
			pre = abs(ar[i]-100);
		} 
	}
	cout<<ans;
	return 0;
}