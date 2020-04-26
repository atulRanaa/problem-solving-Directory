#include<bits/stdc++.h>

using namespace std;


int main(){
	long long int x,a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>x;
	long long int count=0;
	long long int temp =0;
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			for(int k=0;k<=c;k++){
				temp = i*500 + j*100 + k*50;	
				if(temp==x) count++;	
			}
		}
	}
	cout<<count;
	return 0;
	
}
