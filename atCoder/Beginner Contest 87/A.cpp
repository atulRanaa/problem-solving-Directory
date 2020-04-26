#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int x,a,b;
	cin>>x;
	cin>>a;
	cin>>b;
	int count=0;
	if(x -a >0){ x-=a; count++;}
	cout<< x%b;
	return 0;
	
}
