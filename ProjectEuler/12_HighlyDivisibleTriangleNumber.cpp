#include<bits/stdc++.h>
using namespace std;

int totalDivisors(long long int num){
	vector< int > primeFactor;

	for(int i=2;i<= (int)sqrt(num)+1 ; i++){
		if( num%i == 0){
			int count = 0; 
			while(num%i == 0){
				count++;
				num /= i;
			}
			primeFactor.push_back(count);
		}
	}
	if(num > 1) primeFactor.push_back(1);

	int divS = 1;
	for(int i=0;i<primeFactor.size();i++){
		divS *= (primeFactor[i]+1);
	}
	return divS;
}
int main(){
	for(int i=1 ; i <= 1000000; i++){
		int d = totalDivisors( (i*(i+1))/2 );
		//cout<<d<<" "<<i<<endl;
		if( d >= 500) {
			cout<< (i*(i+1))/2;
			break;
		}
	}
	return 0;
}