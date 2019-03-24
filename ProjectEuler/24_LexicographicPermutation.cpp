#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[11] = "0123456789";
	int count = 1;
	while(count < 1000000){
		next_permutation(str,str+10);
		count++;
	} 
	cout<<str;
	return 0;
}