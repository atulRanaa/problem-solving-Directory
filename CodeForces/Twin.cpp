#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int ar[n];
	int i;
	int sum=0;
    
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	for(i=0;i<n;i++) sum+=ar[i];
	sort(ar , ar+n);
    
    int temp=0;
    for(i=n-1;i>=0;i--){
       temp += ar[i];
       if( sum-temp < temp) break;
    }

    printf ("%d",n-i);
	return 0;
}