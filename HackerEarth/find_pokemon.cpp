#include<iostream>
using namespace std;

int main(){
long int size,sum=0,sum1=0,sum2=0;
cin>>size;
int i,j,k;
long int arr[size],arr1[size-1],arr2[size-2];

for(i=0;i<size;i++){
cin>>arr[i];sum+=arr[i];}


for(j=0;j< size-1 ;j++){
cin>>arr1[j];sum1+=arr1[j];}


for(k=0;k< size-2 ;k++){
cin>>arr2[k];sum2+=arr2[k];}



cout<<sum-sum1<<" "<<sum1-sum2;


return 0;
}
