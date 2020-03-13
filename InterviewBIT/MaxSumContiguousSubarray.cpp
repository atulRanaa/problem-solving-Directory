int Solution::maxSubArray(const vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int sum = INT_MIN;
    int cur = 0;
    for(int i=0;i<a.size();i++){
        cur += a[i];
        if(cur > sum) sum = cur;
        if(cur < 0) cur = 0;
        
    }
    return sum;
}
