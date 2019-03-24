#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   
   int n,m;
   cin>>n>>m;
int min=n/2 +(n%2?1:0);

int f=0;
int i=m;
//cout<<min<<"\t";

   while(i<=n){
     if(i>=min){f=1;break;} 
     i+=m;

//     printf("(%d) ",i);
   }

int ans = i/2+(i%2 ? 1 : 0);

if(f == 1) cout<<i;
else cout<<"-1";
return 0;
}