#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

	int n;
	int ar[110];
scanf("%d",&n);
int i,sum=0;

    for(i=0;i<n;i++) scanf("%d",&ar[i]);
    for(i=0;i<n;i++) sum+=ar[i];
int m = sum/(n/2),temp;
int count=0;    

 //   printf("%d\n",m);
 //   for(i=0;i<n;i++) printf("%d ",ar[i]);
    for ( i = 0; i < n; ++i)
    {  if(ar[i] > 0){
        temp = m-ar[i];
        for (int j = i+1; j < n; ++j)
        {
        	 if(ar[j]==temp){

        	 	printf("%d %d\n",i+1,j+1);
                ar[i]=-1,ar[j]=-1;
              break;
        	 }

        }
        count++;
       }
    }
	return 0;
}
