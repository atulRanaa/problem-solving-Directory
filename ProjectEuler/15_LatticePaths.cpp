#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int ar[21][21]={0};
	for(int i=1;i<21;i++) ar[i][0]=1;
	for(int j=1;j<21;j++) ar[0][j]=1;
	for(int i=1;i<21;i++){
		for(int j=1;j<21;j++) ar[i][j] += (ar[i][j-1]+ar[i-1][j]);
	}
	cout<<ar[20][20];
	return 0;
}