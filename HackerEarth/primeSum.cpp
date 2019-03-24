#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int prime(int n){
    int temp=sqrt(n);
    for(int i=2;i<=temp;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int t,n;
    cin>>t;
    
    int ar[1001];
    for(int i=2;i<1001;i++) ar[i]=1;
    
    for(int i=2;i<1001;i++){
        for(int j=i*2;j<1001;j+=i){
            ar[j]=0;
        }
    }
     for(int i=2;i<1001;i++) cout<<i<<" "<<ar[i]<<endl;
  
  return 0;
}

