#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;

 int ar[n];

    int p,c,temp=0;
    for(int i=0;i<n;i++) cin>>ar[i];
    p=0,c=0;

    for(int i=0;i<n;i++){
    	if(ar[i] > 0) p+=ar[i];
    	else{
    		if(p > 0) p-=1;
    		else temp++; 
    	}
    }
cout<<temp;
return 0;
}