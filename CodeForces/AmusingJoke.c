#include<stdio.h>
#include<string.h>

int main(){
    int ar[26]={0};
    int arr[26]={0};

    char st[120],str[120],strr[120];
   
   scanf("%s",st);
   scanf("%s",str);
   scanf("%s",strr);

   int a=strlen(st);
   int b=strlen(str);
   int c=strlen(strr);
  
   int i=0;
   for(i=0;i<a;i++){ ar[st[i]-65]+=1; }
   for(i=0;i<b;i++){ ar[str[i]-65]+=1; }
   for(i=0;i<c;i++){ arr[strr[i]-65]+=1; }

   int f=1;
   for(i=0;i<26;i++){
   	   if(ar[i]!=arr[i]) {f=0; break;}
   }

   if(f) printf("YES");
   else printf("NO");


	return 0;
}