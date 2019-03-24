#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n;
     cin>>n;

     int m = n+1;
     int x = 2*m -1;

     int p=1;
     bool f1 = false;
     for(int i=0;i< x;i++){
        int q=0;
        bool f=false;
        for(int a=0;a<n;a++) cout<<"  ";
        
if(p == x) f1 = true;
        if(f1) n++;
        else n--;

        for(int j=1;j<=p;j++) {
            

            if(j<p) cout<<q<<" ";
            else cout<<q;
            if(q == p/2) f=true;
            if(f) q--;
            else q++;
        }
        
        if(f1) p-=2;
        else p+=2;
        cout<<"\n";
     }
return 0;
}
