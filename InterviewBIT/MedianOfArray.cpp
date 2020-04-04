    #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e6+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<int,int>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        const double EPS = 1E-9;
        typedef vector< vector<double> > matrix;
        typedef vector<int> vi;


int findMedian(const vector<int> &a, const vector<int> &b) {
    int n = a.size(), m = b.size();
    int min_index = 0, max_index = n, i, j, median; 
      
    while (min_index <= max_index) 
    { 
        i = (min_index + max_index) / 2; 
        j = ((n + m + 1) / 2) - i; 
          
        if (j < 0) 
        { 
            max_index = i-1; 
            continue; 
        } 
  
        if (i < n && j > 0 && b[j - 1] > a[i])         
            min_index = i + 1; 
                  
        else if (i > 0 && j < m && b[j] < a[i - 1])         
            max_index = i - 1; 
  
        else
        { 
            if (i == 0)             
                median = b[j - 1];             
              
            else if (j == 0)             
                median = a[i - 1];             
            else            
                median = max(a[i - 1], b[j - 1]);             
            break; 
        } 
    } 
      
    if ((n + m) & 1)    return (double)median; 
    if (i == n)         return (median + b[j]) / 2.0; 
    if (j == m)         return (median + a[i]) / 2.0; 
      
    return (median + min(a[i], b[j])) / 2.0; 
}

double findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
     int m = A.size(), n = B.size();
    
    if(m < n) return findMedianSortedArrays(B, A);
    
    int l = 0, h = 2*n;
    
    while(l <= h)
    {
        int mid = l + (h-l)/2;
        int mid1 = m+n - mid;
        
        double L1 = (mid1 == 0) ? INT_MIN : A[(mid1-1)/2];    
        double L2 = (mid == 0) ? INT_MIN : B[(mid-1)/2];
        double R1 = (mid1 == m*2) ? INT_MAX : A[(mid1)/2];
        double R2 = (mid == n*2) ? INT_MAX : B[(mid)/2];
        
        if (L1 > R2) l = mid + 1;        
        else if (L2 > R1) h = mid - 1;    
        else return (max(L1,L2) + min(R1, R2)) / 2;    
    }
}

int main() {
    vector<int> A ({-50, -41, -40, -19, 5, 21, 28});
    vector<int> B ({-50, -21, -10});

    cout << findMedian(A, B);
    return 0;
}