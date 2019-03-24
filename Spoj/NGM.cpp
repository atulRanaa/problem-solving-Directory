#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	long long int num;
	cin>>num;

	if(num%10 == 0) cout<<2;
	else cout<<1<<"\n"<<num%10;
	
	return 0;
}