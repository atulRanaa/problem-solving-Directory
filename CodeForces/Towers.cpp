#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int ar[n];
    int num[1001]={0};
    int temp;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	num[ temp ]++;
    }
    int sum=0;
    int max=0;
    for (int i = 1; i <= 1000 ; ++i)
    {
    	if( num[i] > 0){
    		sum++;
    		if( num[i] > max) max=num[i];
    	}
    }
    cout<<max<<" "<<sum;
return 0;
}
