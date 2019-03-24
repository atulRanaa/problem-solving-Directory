#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int n;
	cin>>n;

    double ans = 1000000000.0,temp;
    int x,y,v;
	while(n--){
		cin>>x>>y>>v;
 		temp = (double)(sqrt(abs(a-x)*abs(a-x)*1.0 + abs(b-y)*abs(b-y)*1.0))/v;

 		if(temp < ans ) ans= temp;
	}
	printf("%.10f",ans);
	return 0;
}