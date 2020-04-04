vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans(A.size() + 1);
    int len = A.size();
    
    ans[0] = 1;
    
    for(int i=0;i<len;i++) {
        if(A[i] == 'D') ans[i+1] = ans[i]-1;
        if(A[i] == 'I') ans[i+1] = ans[i]+1;
    }
    int minEle = *min_element(ans.begin(), ans.end());
    if(minEle <= 0) {
        for(int i=0;i<len+1;i++) ans[i] += (abs(minEle) + 1);
    }
    // for(int e: ans) cout << e << " "; cout << "\n";
    
    return ans;
}
