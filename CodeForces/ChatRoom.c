#include<stdio.h>
#include<string.h>

int main(){
  char str[1010];
  scanf("%s",str);

  long int i=0;
  long int l=strlen(str);
  long int count=0;
  
  for(i=0;i<l;i++){
     if(str[i]=='h' && count==0) count++;
     if(str[i]=='e' && count==1) count++;
     if(str[i]=='l' && count==3) count++;
     if(str[i]=='l' && count==2) count++;
     if(str[i]=='o' && count==4) count++;    

//   printf("%c %ld\n",str[i],count);
  }

  if(count==5) printf("YES");
  else printf("NO");

  return 0;
}
