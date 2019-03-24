#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     long long int n,temp;
     cin>>n;
     long long int a=0,b=0,c=0;
     for (int i = 0; i < n ; ++i)
     {
     	 cin>>temp;
     	 a+=temp;
     }
     n--;
     for (int i = 0; i < n; ++i)
     {
     	 cin>>temp;
     	 b+=temp;
     }
     n--;
     for (int i = 0; i < n; ++i)
     {
     	 cin>>temp;
     	 c+=temp;
     }
     cout<<a-b<<"\n";
     cout<<b-c;
return 0;
}