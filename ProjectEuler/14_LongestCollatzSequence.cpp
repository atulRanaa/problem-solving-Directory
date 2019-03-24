#include<bits/stdc++.h>
using namespace std;

int CollatzSequence(long long num){
	int len = 1;
	while(num > 1){
		if(num&1) num = 3*num + 1;
		else num /= 2;

		len++;
	}

	return len;
}
int main(){
	int large = -1;
	long long number;
	for(long long i=1 ; i <= 1000000; i++){
		int length = CollatzSequence(i);
		if(i == 13) cout<<length<<endl;
		if(length > large) {large = length; number = i;}
	}

	cout<<number<<" "<<large;
	return 0;
}