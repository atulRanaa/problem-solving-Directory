#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    long int n,m;
scanf("%ld %ld",&n,&m);

long long int min=0,max=0;
long long int x,y;

    x = n/m;
    y = n%m;
    for (int i = 0; i < y; ++i)
    {
    	min += (x*(x+1))/2;
    }
    for (int i = 0; i < (m-y); ++i)
    {
    	min += ((x-1)*x)/2;
    }
    if( (n-m)&1 ) max = ((n-m+1)/2 )*(n-m);
    else max = ((n-m)/2 )*(n-m+1);

  cout<<min<<" "<<max;

	return 0;
}