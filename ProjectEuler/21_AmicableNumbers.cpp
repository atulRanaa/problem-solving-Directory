#include<bits/stdc++.h>
using namespace std;

int main(){
	int divSum[10005];
	for(int i=1;i<10005;i++){
		for(int j=2*i;j<10005; j += i) divSum[j] += i;
	}
	int a,b,sum = 0;
	for(int i=1;i<=10000;i++){
		a = i;
		b = divSum[a];
		if((b >= 1 && b <= 10000)){
			if((divSum[b] == a) && (a!=b)){
				sum += (a+b);
				divSum[a] = -1;
				divSum[b] = -1;
			}
		}
	}
	cout<<sum;
	return 0;
}