#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	int l;
	int i,t;

	int ar[110]={0};
	scanf("%d",&l);
	
	for(i=0;i<l;i++){
		scanf("%d",&t);
		ar[t]=1;
	}
	scanf("%d",&l);
    for(i=0;i<l;i++){
		scanf("%d",&t);
		ar[t]=1;
	}
  int f=1;
  for(i=1;i<=n;i++){
  	if(ar[i]==0) {f=0; break;}
  }

  if(f) printf("I become the guy.");
  else printf("Oh, my keyboard!");
	return 0;
}