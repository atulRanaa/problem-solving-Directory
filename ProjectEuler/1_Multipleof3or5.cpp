#include<iostream>
using namespace std;

int main(){
	int res = 0;
	for(int i=3;i<1000;i++){
		if(i%3 == 0 || i%5 == 0) res += i;
	}
	cout<<res;

	int res1 =0 ;
	int ar[10000]={0};
	for(int i=3;i<1000;i+=3) ar[i]=1;
	for(int i=5;i<1000;i+=5) ar[i]=1;
	for(int i=3;i<1000;i++)
		if(ar[i]==1) res1 += i;
	cout<<" "<<res1;
}
