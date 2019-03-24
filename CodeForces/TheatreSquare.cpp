#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,m,a;
    cin>>n>>m>>a;

    long long int x = n/a;
    if(n%a > 0 ) x++;
    long long int y = m/a;
    if(m%a > 0 ) y++;
    cout<< x*y;
	return 0;
}
