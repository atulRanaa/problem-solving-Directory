#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

	long int a,b,n;
    cin>>a>>b>>n;
    
    long int i=0;
    while(n >= 0){
       i++;
       if(i&1) n-=__gcd(a,n);
       else n-=__gcd(b,n);
//     printf("%ld ", n);
    }
    

  if(i&1) printf("1");
  else printf("0");

	return 0;

}