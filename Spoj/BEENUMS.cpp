#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	map<long long int,int> m;
	for(int i=0;i<18300;i++){
		m[ 3*i*(i-1) +1 ] = 1;
	}
	long long int n;
	while(1){
		cin>>n;
		if(n==-1) break;

		if(m.find(n)!=m.end()) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
	return 0;
}