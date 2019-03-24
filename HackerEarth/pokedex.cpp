#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int testn;
    cin>>testn;
  

 while(testn--){
long int size;
cin>>size;
long int arr[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
long int count=0,t=0;
long int arr1[size];

for(int j=0;j<size;j++){
   for(int k=0;k<size;k++){
       if(arr[j]==arr[k])
           {count++;} }
if(arr1[t]!=count)
{arr1[t]=count;t++}
}

if(t>0){
  for(int z=1;z<t;z++){
      if(arr1[z]!=arr1[z-1])
       { if(fabs(arr1[z]-arr[z-1])>1)
           {cout<<"NO";
             break;}
                 
       }

        }

      }

}
    return 0;
}

