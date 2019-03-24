#include <bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(int k, vector <long long int> arr) {
    int ar[110]={0},ans =0;
    for(int i=0;i<arr.size();i++) ar[ arr[i]%k ]++;
    for(int i=1;i<= (k)/2;i++){
       cout<<ar[i]<<" "<<ar[k-i]<<endl;
    }
    
    return ans;
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    int k;
    cin >> n >> k;
    vector<long long int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = nonDivisibleSubset(k, arr);
    cout << result << endl;
    return 0;
}
