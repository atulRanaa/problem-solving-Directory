#include<bits/stdc++.h>
using namespace std;

vector<int> v;
void sieve(){
	int ar[32000] = {0};
	for(int i=3;i <=180;i+=2){
		if(ar[i] == 0){
			for(int j=i*i;j <= 32000;j+=i)
				ar[j] = 1;
		}
	}
	v.push_back(2);
	for(int i=3;i< 32000 ;i+=2){
		if(ar[i]==0) v.push_back(i);
	}
}
long long divNumber(long long num){
	long long count = 1,temp = 0;
	for(int i = 0; i < v.size(); i += 1){
		if(v[i]*v[i] > num) break;
		if(num%v[i] == 0){
			temp = 0;
			while(num%v[i] ==0 ){
				temp++;
				num /= v[i];
			}
			count *= (temp+1);
		}
	}
	if(num > 1) count *= 2;
	return count;
}
int main(){
	sieve();
	long long int a,b,n;
	cin>>a>>b>>n;
	long long int ans = 0;
	for(long long i = a;i<=b;i++){
		if( divNumber(i) == n) ans++;
	}
//	cout<<v.size();
	cout<<ans;
	return 0;
}
