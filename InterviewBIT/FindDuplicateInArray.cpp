int Solution::repeatedNumber(const vector<int> &A) {
    int len = A.size();
    bool arr[len] = {false};
    
    for(const int &i: A){
        if(arr[i-1]) return i;
        arr[i-1] = true;
    }
    return -1;
}
