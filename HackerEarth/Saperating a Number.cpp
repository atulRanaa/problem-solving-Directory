#include <bits/stdc++.h>

using namespace std;

int calculateResult(vector<string> input){
    long long ans = 0;
    long long cnt = 1;
    for(int i = 0; i < input.size(); i++) {

        auto a = input[i].find("99");
        if(a != string::npos || input[i].size() <= 1) {
            ans += cnt;
        }
        cnt <<= 1;
    }

    return ans;
}
int main(){
    int t;
    cin>>t;
    vector<string> input(t);
    for(int j = 0;j < t;j++){
        cin>>input[j];
    }
    int result;
    result = calculateResult(input);
    cout<<result;
    return 0;
}
