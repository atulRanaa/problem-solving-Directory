#include<stdio.h>
#include<math.h>

int mod(int a){
	if(a < 0) a*=-1;
	return a;
}
int main(){
	int ar[5][5];
	int i,j;
    int x,y;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&ar[i][j]);

			if(ar[i][j] == 1) x=i,y=j;
		}
	}

	int ans = mod(x-2)+mod(y-2);

	printf("%d",ans);
	return 0;
}