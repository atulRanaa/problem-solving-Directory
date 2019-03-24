#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,k;
    cin>>n>>k;

    int ar[6]={0},temp;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	ar[ temp ]++;
    }
int sum=0;
   for (int i = 0; i <= 5-k; ++i)
   {
   	  sum+=ar[i];
   }
   cout<<sum/3;
return 0;
}
