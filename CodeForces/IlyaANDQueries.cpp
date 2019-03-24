#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     string s;
     cin>>s;
int len = s.length();
bool mark[len];
    memset(mark ,false , sizeof(mark));
int ar[len]={0};
int count=0;
     for (int i = 0; i < len-1; ++i)
     {
     	if(s[i]==s[i+1]) { (++count); mark[i]=true; }

     	ar[i]=count; 
     }
     ar[len-1]=count;

int l,r,n,ans;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>l>>r;

    	if(l==r) cout<<0<<"\n";
        else{
        	 ans = ar[r-2]-ar[l-1];
             if(mark[l-1] == true) ans++;
             cout<<ans<<"\n";
        }
    }
return 0;
}