#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0) break;
		if((b-a == c-b) && (b-a != 0)) cout<<"AP "<<c+(c-b)<<endl;
		else cout<<"GP "<<c*(c/b)<<endl;
	}
	return 0;
}