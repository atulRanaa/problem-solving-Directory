#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

long int count_bit(long int n){
	long int count=0;
	  while(n){
	  	n=(n&(n-1));
	  	count++;
	  }
 return count;
}
int main()
{
    int t;
    long int n,k,ele,sum=0,i;
    cin>>t;
        while(t--){
         cin>>n>>k;
         sum=0;
         long int h_table[n];
         long int ar[n];
                  for(i=0;i<n;i++) cin>>ar[i];

                  for(i=0;i<n;i++) h_table[i]=count_bit(ar[i]);
                      
         sort(h_table,h_table+n);
         for(i=n-k;i<n;i++) sum+=h_table[i];
         
         cout<<sum<<endl;
        }
    return 0;
}

