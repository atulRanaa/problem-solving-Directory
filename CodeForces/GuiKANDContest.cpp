#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int count[2001]={0};
    int ar[2001];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>ar[i];
    	count[ar[i]]++;
    }
    for (int i = 1; i < 2001; ++i)
    {
    	count[i]+=count[i-1];
    }
    for (int i = 0; i < n; ++i)
    {
    	cout<<count[2000]-count[ ar[i] ]+1<<" ";
    }
return 0;
}