#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    long int i,j,l,n;
    long int o,z;
    long int temp,ans;
    cin>>t;
    while(t--){ 
        cin>>n;
		long int a[n];
		long int bits[n][32];
		memset(bits,0,sizeof(bits));
		
		for(i=0;i<n;i++){
			cin>>a[i];
			l=a[i];
                        j=0;
			while(l>0){
				bits[i][j]=l%2;
				l=l/2;
                                j++;
			}
		}
		temp=2147483648;
		for(i=0;i<32;i++){
		    o=0;z=0;
		    
		    for(j=0;j<n;j++){
		        if(bits[j][i]==0) z++;
		        else o++;
		    }
		    if(abs(z-o) < temp){
		        temp=abs(z-o);
		        ans = i;
		    }
		    
		}
		
		cout<<ans<<endl;
    }
    return 0;
}

