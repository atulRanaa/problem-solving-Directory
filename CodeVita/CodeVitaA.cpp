#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 2e5 + 5;


int main() {

    int n;
    string s;

    cin >> n;
    cin >> s;



    stack< int > A, B;

    int aConverted[N];
    int bConverted[N];
    for(int i = 0; i < N; i++) aConverted[i] = N, bConverted[i] = N;

    while(!A.empty()) A.pop();
    while(!B.empty()) B.pop();

    for(int i = 0; i < n; i++) {
        if(s[i] == '-')
            A.push(i);
        else if(s[i] == 'B') {
            while(!A.empty()) A.pop();
        }
        else if(s[i] == 'A') {

            // converting
            while(!A.empty()) {
                int index = A.top();

                aConverted[index] = i;
                A.pop();
            }
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '-')
            B.push(i);
        else if(s[i] == 'A') {
            while(!B.empty()) B.pop();
        }
        else if(s[i] == 'B') {

            // converting
            while(!B.empty()) {
                int index = B.top();

                bConverted[index] = i;
                B.pop();
            }
        }
    }


    for(int i = 0; i < n; i++) {

        if(s[i] == '-') {

            int p = aConverted[i];
            int q = bConverted[i];

            if(abs(p - i) != abs(q - i)) {

                if(p != N && abs(p - i) < abs(q - i)) {
                    s[i] = s[p];
                }

                if(q != N && abs(p - i) > abs(q - i)) {
                    s[i] = s[q];
                }

            }

        }
    }

    // cout << s << "\n";


    int countA = 0, countB = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') countA++;
        else if(s[i] == 'B') countB++;
    }

    // cout << countA << " " << countB << "\n";

    if(countA > countB)
        cout << "A\n";
    else if(countA < countB)
        cout << "B\n";
    else
        cout << "Coalition government\n";


    return 0;
}