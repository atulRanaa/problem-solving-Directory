#include<bits/stdc++.h>
using namespace std;

int bound(long long int arr[],int start,int end,long long int ele){
    while(start < end){
        int mid = (start + end)>>1;
        if( arr[mid] >= ele) start = mid+1;
        else end = mid;
    }

    return start-1;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
        while(t--){
            int n;
            cin>>n;
            long long int ar[n];
            long long int arr[n];
            for(int i=0;i<n;i++) cin>>ar[i];
            for(int i=0;i<n;i++) cin>>arr[i];
            int ans=0,ind;
            for(int i=0;i<n;i++){
                ind = bound(arr ,i, n , ar[i]);
                ans = max( ans , (ind-i));
            }

            cout<<ans<<endl;
        }
return 0;
}
