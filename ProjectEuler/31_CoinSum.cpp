#include<bits/stdc++.h>
using namespace std;

int main(){
	int coin[8]={1,2,5,10,20,50,100,200};
	int num[205]={0};
	num[0]=1;
	for(int i=0;i<8;i++){
		for(int j=coin[i] ;j<=200;j++) num[j] += num[j-coin[i]];
	}
	cout<<num[5]<<" ";
	cout<<num[200];
	return 0;
}