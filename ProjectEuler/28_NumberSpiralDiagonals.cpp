#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 1001;
	int ar[n][n]={0};
	int num = n*n;

	int x =n-1,y=0;
	int x1=0,y1=n-1;
	int i=0,j=n-1;
	while(x > x1){
		while(j > y) {ar[i][j] = num--; j--;}
		while(i < x) {ar[i][j] = num--; i++;}
		while(j < y1) {ar[i][j]= num--; j++;}
		while(i > x1) {ar[i][j]= num--; i--;}
		x--;
		x1++;
		y++;
		y1--;
		i++;
		j--;
	}
/*
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<ar[i][j]<<" ";
		cout<<endl;
	}
*/
	long long int sum = 0;
	for(int i=0;i<n;i++) sum += ar[i][i];
	for(int i=0;i<n;i++) sum += ar[i][n-i-1];

	cout<<sum+1;
	return 0;
}