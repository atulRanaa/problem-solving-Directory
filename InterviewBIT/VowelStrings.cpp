#include <iostream>
using namespace std;

int solve(int A) {
    int mod = 1000000007;
    
    long long int a[A],e[A],i[A],o[A],u[A];
    
    a[0]=e[0]=i[0]=o[0]=u[0]=1;
    
    for(int k=1;k<A;k++){
        a[k] = ((i[k-1] + o[k-1]))%mod;
        e[k] = ((a[k-1] + i[k-1] + u[k-1]))%mod;
        i[k] = ((a[k-1] + e[k-1]))%mod;
        o[k] = ((i[k-1] + u[k-1]))%mod;
        u[k] = ((i[k-1] + o[k-1]))%mod;
    }
    int ans = 0;
    ans = (a[A-1]+e[A-1])%mod;
    ans = (ans   +i[A-1])%mod;
    ans = (ans   +o[A-1])%mod;
    ans = (ans   +u[A-1])%mod;
    
    
    return ans;
}
int main(){
    cout<<solve(80)<<"\n";
    return 0;
}