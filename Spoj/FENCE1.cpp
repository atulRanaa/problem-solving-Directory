#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	double l;
	while(1){
		cin>>l;
		if(l==0.0) break;
		printf("%0.2f\n",((l*l)/3.14159)/2.0);
	}
	return 0;
}