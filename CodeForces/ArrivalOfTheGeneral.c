#include<stdio.h>

int main(){
    long int n;

    scanf("%ld",&n);
    long int ar[n];
    long int i;
    long int mini=-1,maxi=-1,min=111,max=-1;
    long int ans=-1;
    for(i=0;i<n;i++) scanf("%ld",&ar[i]);
    for(i=0;i<n;i++){
       if(ar[i] > max) {max = ar[i]; maxi=i;}
       if(ar[i] <= min) {min = ar[i]; mini=i;}
    }
  if( maxi < mini) ans=maxi+(n-1-mini);
  else ans=maxi+(n-1)-mini-1;

  printf("%ld",ans);
	return 0;
}