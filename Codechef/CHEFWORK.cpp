#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

#define inf 1e15
int main(){
	int n; cin>>n;
	int ar[n]; for(int i=0;i<n;i++) cin>>ar[i];
	int ty[n]; for(int i=0;i<n;i++) cin>>ty[i];

	int a = 1e6,b = 1e6,c=1e6;
	for(int i=0;i<n;i++) if(ty[i]==1) a = min(a,ar[i]);
	for(int i=0;i<n;i++) if(ty[i]==2) b = min(b,ar[i]);
	for(int i=0;i<n;i++) if(ty[i]==3) c = min(c,ar[i]);
	

	cout<<min(a+b,c);
	return 0;
}