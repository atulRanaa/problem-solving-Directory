#include<bits/stdc++.h>

long long int quad(int n,int a,int b){
	return n*n + (a*n) + b;
}
using namespace std;
int main(){
	int p[1000001]={0};
	p[0]=1;
	p[1]=1;
	for(int i=2;i*i < 1000001;i++){
		if(p[i] == 0){
			for(int j=i*i;j < 1000001;j += i) p[j]=1;
		}
	}
	int maxCount = 0;
	for(int i=-999;i < 1000;i++){
		for(int j=-1000;j <= 1000;j++){
			//cout<<i<<" "<<j<<endl;
			int temp = 0;
			long long int num;
			for(int k=0;k < 100;k++){
				num = quad(k,i,j);
				if(num <= 0) break;

				if(p[num]==0) temp++;
				else break;
			}
			if(temp > maxCount){
				cout<<i<<" "<<j<<" "<< i*j << temp << endl;
				maxCount = temp;
			}
		}
	}
	cout<<maxCount;
	return 0;
}
