#include<bits/stdc++.h>
using namespace std;


bool findPartiion(long long int x,long long int n){
    long long int sum = n*(n+1)/2 - x;
    int i, j;
    if (sum%2 != 0) return false;
    int arr[n+1];
    int ind=0;

    for(i=1;i<=n;i++) arr[i-1]=i;
    arr[x-1]=0;
    bool part[sum/2 + 1][n+1];
    for (i = 0; i <= n; i++) part[0][i] = true;
    for (i = 1; i <= sum/2; i++) part[i][0] = false;   
    
    for (i = 1; i <= sum/2; i++){
        for (j = 1; j <= n; j++){
            part[i][j] = part[i][j-1];
            if(i >= arr[j-1]){
                part[i][j] = part[i][j] || part[i - arr[j-1]][j-1];
            }
        }        
    }    
    /*for (i = 0; i <= sum/2; i++){
        for (j = 0; j <= n; j++) printf ("%4d", part[i][j]);
        printf("\n");
    }  */
    return part[sum/2][n];
}     
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 /*   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/

    long long int t,x,n; cin>>n;
    for(int i=1;i<=n;i++){

        if (findPartiion(i, n) == true){
            printf("Possible\n");
        }
        else{
            printf("Impossible\n");
        }
    }
    return 0;
}