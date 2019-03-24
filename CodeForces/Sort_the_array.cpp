#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	int l=-1;
	int r=-1;
	for(int i=1;i<n;i++){
		if(ar[i-1] > ar[i]) { l = i-1;break;}
	}
	for(int i= n-1;i>0;i--){
		if(ar[i-1] > ar[i]) { r = i;break;}
	}
	//cout<<l<<" "<<r<<endl;
	int x=l,y=r;
	while(x < y){
       int temp = ar[x];
       ar[x] = ar[y];
       ar[y] = temp;

       x++;
       y--;
	}
	bool flag = true;
	for(int i=1;i<n;i++) {
		if(ar[i-1] > ar[i] ) flag = false;
	}
    if(flag){
    	cout<<"yes"<<endl;
    	if(r==-1 && l==-1) cout<<1<<" "<<1;
    	else{
    		cout<<l+1<<" "<<r+1;
    	}
    }
    else{
    	cout<<"no";
    }
	return 0;
}