#include<bits/stdc++.h>
using namespace std;


int main(){
	int prime[1000010]={0};
    prime[0]=1;
    prime[1]=1;
    long int i,j;
    long int len=sqrt(1000010);
    
    for(i=2;i<=len;i++){
        if(prime[i]==0){
            for(j=2*i;j<1000001;j+=i){
                prime[j]=1;
            }
        }
    }

    int q; cin>>q;

    long int a,b;
    while(q--){
    	cin>>a>>b;
    	long int x=a,y=b;
    	bool f1 = false,f2 = false;

    	while(x <= b){
    		if(prime[x]==0){
    			f1 = true;
    			break;
    		}
    		x++;
    	}
    	while(y >= a){
    		if(prime[y]==0){
    			f2 = true;
    			break;
    		}
    		y--;
    	}
    	if(f1 && f2) cout<<y-x<<endl;
    	else cout<<0<<endl;
    }
	return 0;
}