    #include <bits/stdc++.h>
    using namespace std;
     
    long long int getDiv(long long a,long long b,long long m){
        long long lcm = a*b/ __gcd(a,b);
        long long ans = m/a + m/b - m/lcm;
        return ans;
    }
    long long nth(long long a,long long b,long long int n){    
        long long l = min(a,b);
        long long u =  n*max(a,b)+1;
        long long mid;
        long long ans;
        while(l <= u){ 
            mid = l + (u - l)/2;
            if(getDiv(a,b,mid) >= n){ ans = mid; u = mid-1;}
            else l = mid+1;
        }
        return ans;
    }
    int main()
    {
        long long t,a,b,n;
        cin>>t;
        
        while(t--){
            cin>>a>>b>>n;
            cout<< nth(a,b,n)<<endl;
        }
        return 0;
    }
