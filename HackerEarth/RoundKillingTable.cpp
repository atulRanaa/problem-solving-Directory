#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n,k,x;
     int ar[1010]={0};
     cin>>n>>k>>x;
     int num,temp;
     num = x%k;
     temp = n;
     while(n > num){
        
        n -= num;
        int count=0;
        if(num > 0){
            while(count < num){
                x++;
                if(x > temp) x=1;
                if(ar[x]==0){count++; ar[x]=-1;}            
            }
            while(ar[x] != 0){
                x++;
                if(x > temp) x=1;
            } 
        }
        else{
            x++;
            if(x > temp) x=1;
        }
        num = x%k;
     } 

     cout<<x;
return 0;
}
