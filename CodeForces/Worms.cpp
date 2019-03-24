#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
        long int n,m;
        long int ar[100010];
long int i,j;
        cin>>n;
        for(i=0;i<n;i++){ cin>>ar[i]; }
        cin>>m;

int ans[1000010];
long int a1=1,a2=0;

        for(i=0;i<n;i++){
       	    a2+=ar[i];
            for(j=a1;j<=a2;j++){ ans[j]=(i+1);}

            a1=a2+1;      
        }
    for(i=0;i<m;i++) {
        cin>>j;
    	cout<<ans[j]<<" ";
    }
return 0;
}
