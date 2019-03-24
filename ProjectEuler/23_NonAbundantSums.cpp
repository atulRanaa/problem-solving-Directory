#include<bits/stdc++.h>
using namespace std;

int main(){
	int divSum[30000]={0};
	for(int i=1;i<30000;i++){
		for(int j=2*i;j<30000; j += i) divSum[j] += i;
	}/*
	for(int i=0;i<20;i++) {
		if(divSum[i] > i) cout<<i<<" ";
	}*/
	long long int sum = 0;
	for(int i=1;i <= 28123; i++){
		bool f = true;
		for(int j=12; j <= i;j++){
			if((divSum[j] > j) && (divSum[i-j] > (i-j))){ f = false; break;}
		}
		if(f) sum += i;
	}
	cout<<sum;
	return 0;
}