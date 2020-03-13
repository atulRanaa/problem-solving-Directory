vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long len = A.size();
    long long sum1 = 0;
    long long sum2 = 0;
    long long actual1 = (len*(len+1L))/2L;
    long long actual2 = (len*(len+1L)*(2L*len+1L))/6L;
    
    for(const long long &i: A) sum1 += i, sum2 += i*i;
    
    long long z = (actual2 - sum2)/(actual1 - sum1);
    int b = ((actual1 - sum1) + z)/2L;
    int a = (z - b);
    
    vector<int> ans({a, b});
    return ans;
}
