long long printNcR(int n, int r) { 
    long long p = 1, k = 1;
    if (n - r < r) r = n - r; 
    if (r != 0) { 
        while (r > 0) { 
            p *= n; 
            k *= r;
            long long m = __gcd(p, k);
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        }
    } 
    else
        p = 1;
    return p;
} 
vector<int> Solution::getRow(int A) {
    vector<int> ans(A+1);
    int half = (A+1+1) >> 1;
    for(int i=0;i<half;i++) ans[i] = printNcR(A, i);
    for(int i=0,j=A;i<half;i++,j--) ans[j] = ans[i];
    return ans;
}


vector<int> Solution::getRow(int A) {
    
    vector<int>temp;// to store the resultant row
    
        int n  = 1;
        for( int col = 0; col <= A ; col++){// nth row will have n + 1 elements in pascal triangle
            temp.push_back(n);
            n = n * (A - col)/(col + 1);// mathematics
        }
    return temp; // resultant vector returned.
}