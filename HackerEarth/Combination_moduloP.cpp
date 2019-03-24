#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long degree(long long a, long long k, long long p) {
  long long res = 1;
  long long cur = a;

  while (k) {
    if (k % 2) {
      res = (res * cur) % p;
    }
    k /= 2;
    cur = (cur * cur) % p;
  }
  return res;
}
int get_degree(long long n, long long p) { // returns the degree with which p is in n!
  int degree_num = 0;
  long long u = p;
  long long temp = n;

  while (u <= temp) {
    degree_num += temp / u;
    u *= p;
  }
  return degree_num;
}

long long combinations(int n, int k, long long p) {
  int num_degree = get_degree(n, p) - get_degree(n - k, p);
  int den_degree = get_degree(k, p);

  if (num_degree > den_degree) {
    return 0;
  }
  long long res = 1;
  for (long long i = n; i > n - k; --i) {
    long long ti = i;
    while(ti % p == 0) {
      ti /= p;
    }
    res = (res * ti) % p;
  }
  for (long long i = 1; i <= k; ++i) {
    long long ti = i;
    while(ti % p == 0) {
      ti /= p;
    }
    res = (res * degree(ti, p-2, p)) % p;
  }
  return res;
}

int main(){
  int n,k;
  cin>>n>>k;
  long long int ans = combinations(n,k,mod);
  cout<<ans;

  int t; cin>>t;
  while(t--){
    int a,b,c,d,l;
    cin>>a>>b>>c>>d>>l;
    
    int h = abs(a-c);
    int v = abs(b-d);

    if( (h+v) > l ) cout<<0<<endl;
    else if( (h+v)== l ){
         long long int ans = combinations(l , h , mod);
    }
    else{
       if( (l-h-v)&1 ) cout<<0<<endl;
       else{
         long long int ans = combinations(l,h,mod);
         int leftm = (l-h-v)/2;

         for(int i=0;i<=leftm;i++){
             ans = (ans*combination(left,i,mod))%mod;
             ans = (ams*2)%mod;
         }

         cout<<ans<<endl;
       }
    }

  }
  return 0;
}