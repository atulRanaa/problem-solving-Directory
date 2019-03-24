#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,k;
    cin>>n>>k;

    int ar[n];
    int temp[n];
    int ele[110]={0};
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<n;i++) temp[i]=ar[i];

    sort(temp,temp+n);
    int j=0;
    for(int i=0;i<n;i++){
        if(temp[i] <= k){
           ele[j++] = temp[i];
           k -= temp[i];
        }
    }
    cout<<j<<"\n";
    for(int i=0;i<j;i++){
        for(int k=0;k<n;k++){
            if(ele[i] == ar[k]){
                cout<<k+1<<" ";
                ar[k] = -1;

                break;
            }
        }
    }

return 0;
}
