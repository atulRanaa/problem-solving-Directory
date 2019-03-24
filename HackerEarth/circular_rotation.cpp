#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;

int main(){
clock_t start=clock();
 
 int size,rotation,temp,k,i,j;
 cin>>size>>rotation;

int arr[size];
for(i=0;i<size;i++)
 cin>>arr[i];

   for(j=0;j<rotation;j++)
      { temp=arr[size-1];
         
       for(k=size-1;k>0;k--)
          arr[k]=arr[k-1];
       
        arr[0]=temp;
      }



for(int i=0;i<size;i++)
cout<<arr[i]<<" ";




printf("\nTime_Elapsed:%f",(double)((double)clock()-start)/CLOCKS_PER_SEC);
return 0;}
