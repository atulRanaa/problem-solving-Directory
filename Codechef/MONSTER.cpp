#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	long long int n,q;
	cin>>n;
	
	long long int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	
	cin>>q;
	long long int x,y;
	long long int ans = n,other;
	while(q--){
		
		cin>>x>>y;
		if(ans > 0){
			if(y > 0){
				vector<long long int> num;
				
				long long int temp = 0;
				long long int j=0;
				while(temp < n && temp <= x){
					if((temp&x) == temp){
						num.push_back(temp);
					
						int s = num.size();
						if(s > 2){
							for(int it=1;it < s-1;it++){
								other = temp+num[it];
								if(other < n){
									num.push_back(other);
								}
							}
						}
					}
					temp = 1LL<<j;
					j++;
					
				}
				int len = num.size();
				for(int it=0;it < len;it++){
					if(ar[num[it]] > 0){
						ar[ num[it] ] -= y;
						if(ar[ num[it]] <= 0) ans--;
					}
				}
			}
			cout<<ans<<endl;
		}
		else cout<<0<<endl;
		
	}
	return 0;
} 