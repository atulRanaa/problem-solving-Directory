#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	long long int n,num=0,x; cin>>n;
	while(n--){
		cin>>x;
		num = x^num;
	}
	cout<<num;
	return 0;
}