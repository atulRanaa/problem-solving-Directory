#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res = 1;
    for(int i=1;i<=min(a,b);i++) res *= i;
    cout<<res;
	return 0;
}