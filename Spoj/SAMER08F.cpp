#include<iostream>
using namespace std;

int main(){
	int n;
	long long int ar[101]={0};
	for(int i=1;i<101;i++){
		for(int j=1;j <= i;j++){
			ar[i] += (i-j+1)*(i-j+1)*1LL;
		}
	}
	//for(int i=0;i<101;i++) cout<<ar[i]<<" ";
	while(1){
		cin>>n;
		if(n==0) break;
		cout<<ar[n]<<endl;
	}
	return 0;
}