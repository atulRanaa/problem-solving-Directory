#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	long int ar[3];
	scanf("%ld %ld %ld",&ar[0],&ar[1],&ar[2]);
    sort(ar,ar+3);
    
    long int min=5000;
    long int i=0,temp;

    for(i=ar[0];i<=ar[2];i++){
      temp=abs(ar[0]-i)+abs(ar[1]-i)+abs(ar[2]-i);
      if(temp < min) min=temp;
    }
    
  printf("%ld",min);
	return 0;
}