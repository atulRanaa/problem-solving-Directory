#include<bits/stdc++.h>

using namespace std;
int main(){
    long int temp,count=0;
    vector< long int > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

     cin>>temp;
     v.push_back(temp);
    }
    long int m = *max_element(v.begin(),v.end());
    long int mi = *min_element(v.begin(),v.end());

    for(int i=0;i<n;i++){
       if(v[i] > mi && v[i] < m) count++;
    }
    cout<<count;
	return 0;
}