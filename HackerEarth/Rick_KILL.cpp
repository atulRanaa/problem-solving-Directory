#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;


int ar[100005];
int main(){
    int t; scanf("%d",&t);
    while(t-- > 0){
        
        int n; scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&ar[i]);
        
        sort(ar,ar+n);
        for(int i=0;i<10;i++) cout<<ar[i]<<" "; cout<<"\n";
        int i=0,kill = 1, it =0; bool f = true;
        for(i=0;i<n;i++){
            if(ar[i]-kill >=0){
                it++;
                kill++;
                
                if(it==6){
                    it=0;
                    kill++;
                }
            }
            else{
                f = false;
                break;
            }
        }
        if(f) cout<<"Rick now go and save Carl and Judas\n";
        else cout<<"Goodbye Rick\n"<<max(0,(i))<<"\n";
    }
    return 0;
}