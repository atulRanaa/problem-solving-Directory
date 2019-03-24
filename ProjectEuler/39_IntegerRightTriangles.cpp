#include<bits/stdc++.h>
using namespace std;

int main(){
	int gcount =0;
	int maxSol =0;
	for(int p=1;p<=1000;p++){
		int count = 0;
		for(int a=1;a < p;a++){
		 for(int b=1;b < p;b++){
		 	if((a*a + b*b) == (p-a-b)*(p-a-b)){
				count += 1;
			}
		 }
		}
		if(count > gcount){
			gcount = count;
			maxSol = p;
			cout<<p<<" "<<gcount<<endl;		
		}
	}
	return 0;
}
