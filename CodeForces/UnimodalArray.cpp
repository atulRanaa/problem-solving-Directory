#include<bits/stdc++.h>
using namespace std;


int ar[110];

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n;
     cin>>n;

bool f=true;
for (int j = 0; j < n; ++j) cin>>ar[j];

     if(n > 2){
            int i=1;
            while(ar[i] > ar[i-1] && i<n) i++;
            while(ar[i]==ar[i-1] && i<n) i++;
            while(ar[i] < ar[i-1] && i<n) i++;

            if(i != n) f=false; 
     }

     if(f) cout<<"YES";
     else cout<<"NO";
return 0;
}
