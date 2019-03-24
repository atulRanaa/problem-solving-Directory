#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n;
     cin>>n;
int ar[100010];

for (int i = 0; i < n; ++i)
{
	cin>>ar[i];
}
int temp,r25=0,r50=0;
bool flag = true;
for (int i = 0; i < n; ++i)
{
    if(ar[i]==25) r25++;
    else if(ar[i]==50) { 
    	if(r25 > 0){ r25--; r50++;}
    	else {flag=false; break;}
    }
    else{
    	if(r25 >0 && r50>0){r25--;r50--;}
    	else if(r25 > 2 && r50==0) r25-=3;
    	else {flag=false; break;}
    }
}

if(flag) cout<<"YES";
else cout<<"NO";
return 0;
}