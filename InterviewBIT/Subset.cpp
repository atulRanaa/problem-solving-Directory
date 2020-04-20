void findAllSubsequence(vector<int> &A,
    // set< vector<int> > &S,
    vector< vector<int> > &S,
    unordered_map<int, int> &M,
    vector<int> &T, int itr) {

    for(int i = itr; i < A.size(); i = M[A[i]]+1) { // if(itr < A.size()) {

        // T.push_back( A[itr] );
        T.push_back( A[i] );
        // S.insert(T);
        S.push_back(T);
        // findAllSubsequence(A, S, M, T, itr+1);
        findAllSubsequence(A, S, M, T, i+1);
        T.pop_back();
        // findAllSubsequence(A, S, M, T, M[A[itr]]+1);
    }
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(), A.end());

    unordered_map<int, int> M;
    for(int i = 0; i < A.size(); i++) M[ A[i] ] = i;
    // set< vector<int> > S;
    vector< vector<int> > S;
    vector< int > T;

    // S.insert(T);
    S.push_back(T);
    findAllSubsequence(A, S, M, T, 0);

    // cout << S.size() << "\n";
    return vector< vector<int> > (S.begin(), S.end());
}
