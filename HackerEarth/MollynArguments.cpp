#include<bits/stdc++.h>
using namespace std;

#define start -20000
#define end 80000
#define a 10000
#define b 50000
#define c 100000000000000
typedef long long int lli;
typedef long int li;

double fun(lli n){
  return -2*n*n*n +3*n*n*(b-a) + 6*a*b*n +c;
}

lli ls(lli x){
   lli i
   for(i=start;i<=end;i++){
       if( fun(l1) >= x ) return i; 
   }
 
}
int main(){
    li t;
    lli x;
    cin >> t;

       while(t--){
          cin >> x;
          cout << ls(x)
       }
	return 0;
}
