#include<bits/stdc++.h>

using namespace std;
int main()
{
   int t;
   cin>>t;
   
   int n,sum; 
   while(t--){

         cin>>n>>sum;
          int ar[n+1];
          for(int i=0;i<n;i++) cin>>ar[i];         
          int i=0,j=n-1;
          int temp=0,count=0;
          while( i < j ){
                temp = ar[i]+ar[j];
                if( temp > sum) j--;
                else if( temp < sum) i++;
                else { count++;
                       j--;
                       i++;
                }
          }
          cout<<count<<"\n";
   }
    return 0;
}
