#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   int t;
   char str[1001],temp[1001];
   int h[26],len=0;
   cin>>t;
         while(t--){
           for(int i=0;i<26;i++) h[i]=0;
           cin>>str;
           len=strlen(str);
           for(int i=0;i<len;i++) {
           	  h[str[i]-97]++;
           }
           for(int i=0;i<26;i++) printf("%d ",h[i]);
           cout<<endl;
           int j=0;	
           int flag1=0,flag2=0;
           for(int i=25;i>=0;i--){
                int flag1=0;flag2=0;
            	while(h[i]>0){
            		if(len/2 +j <len) {
                          temp[len/2 +j]=(char)(i+97);
            		  h[i]--;
                          flag1=1;
                        }
                  printf("(%d)=%c\n",len/2+j,temp[len/2 + j]);
            	       if(h[i]==0) break;	
                       if(h[i]>0 && len/2 -j >=0){ 
            			temp[len/2 -j]=(char)(i+97);
            			h[i]--;
                                flag2=1;
            		}
                  printf("(%d)=%c\n",len/2-j,temp[len/2 - j]);
            	 if(flag1 && flag2) j++;	
            	}
            }
            for(int i=0;i<len;i++) cout<<temp[i];
            cout<<endl;
         }
    return 0;
}

