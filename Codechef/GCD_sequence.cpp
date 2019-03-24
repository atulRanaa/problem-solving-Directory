#include<bits/stdc++.h>
using namespace std;

#define MAX 1000005
int prime[MAX], countdiv[MAX];
void SieveOfEratosthenes()
{
    for (int i = 2; i * i < MAX; ++i){
        if (!prime[i])
            for (int j = i * i; j < MAX; j += i)
                prime[j] = i;
    }
    for (int i = 1; i < MAX; ++i)
        if (!prime[i]) prime[i] = i;
}
int largestGCDSubsequence(int arr[], int n)
{
    int ans = 0;
    for (int i=0; i < n; ++i)
    {
        int element = arr[i];
        while (element > 1)
        {
            int div = prime[element];
            ++countdiv[div];
            ans = max(ans, countdiv[div]);
 
            while (element % div==0)
                element /= div;
        }
    } 
    return ans;
}
int main()
{
    SieveOfEratosthenes();
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int ar[n];

        for(long int i=0;i<n;i++) cin>>ar[i];
        for(int i=0;i < MAX ;i++) countdiv[i]=0;
        cout << largestGCDSubsequence(ar, n)<<endl;
    }
    return 0;
}
