#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n,v;
	cin>>n>>v;
    vector< int > sellers;
	
	for(int i=1;i<=n;i++) {
		
		vector< long int > price;
		int items,temp; 
		cin>>items;
		
		for(int j=0;j<items;j++) {
			cin>>temp;
			price.push_back(temp);
		}
 		
		if(*min_element(price.begin(),price.end()) < v) 
			sellers.push_back(i);

	}
	cout<<sellers.size()<<endl;
	for(int i=0;i<sellers.size();i++)
		cout<<sellers[i]<<" ";
	return 0;
}