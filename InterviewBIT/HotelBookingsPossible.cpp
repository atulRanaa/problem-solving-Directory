bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<int> temp;
    for(const int &i: arrive) temp.push_back(i);
    for(const int &i: depart) temp.push_back(i);
    
    sort(temp.begin(), temp.end());
    int l = temp.size();
    
    
    int arr[l + 100] = {0};
    int n = arrive.size();
    for(int i=0;i < n;i++) {
        int left = distance(temp.begin(), lower_bound(temp.begin(), temp.end(), arrive[i]));
        int righ = distance(temp.begin(), lower_bound(temp.begin(), temp.end(), depart[i]));
        
        arr[left] += 1;
        arr[righ] -= 1; 
    }
    for(int i=1;i< (l+100); i++) arr[i] += arr[i-1];
    // for(int i=0;i< (l+100); i++) cout << arr[i] << " ";
    int maxBookings = *max_element(arr, arr + l + 100);
    
    if(maxBookings > K) return false;
    return true;
}

bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
        
    if(K == 0)
            return false;

    int N = arrive.size();
    
    vector<pair<int, int> > vec;
    for(int i = 0; i < N; ++i) {
        vec.push_back(make_pair(arrive[i], 1));
        vec.push_back(make_pair(depart[i], 0));
    }
     
    sort(vec.begin(), vec.end());
    
    int curActive = 0;
    int maxAns = 0;
    for (int i = 0; i < vec.size(); i++) {
       if (vec[i].second == 1) { // arrival
           curActive++;
           maxAns = max(maxAns, curActive);
        } else {
            curActive--;
        }
    }

    if (K >= maxAns) return true;
    return false;
}