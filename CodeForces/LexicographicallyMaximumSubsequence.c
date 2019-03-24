#include <stdio.h>
#include <string.h>
int main()
{
    char str[100010];
    scanf("%s",str);

    int n = strlen(str);
    int last=0;
    for(int i=122;i >= 97;i--){
        for(int j=last;j<n;j++){
            if(str[j]==i){ 
                printf("%c",str[j]);
                last=j+1;
            }
        }
    }
    return 0;
}
