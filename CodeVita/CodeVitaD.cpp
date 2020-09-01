#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 2e5 + 5;


int main() {

    string table[105];
    table[0] = "zero";
    table[1] = "one";
    table[2] = "two";
    table[3] = "three";
    table[4] = "four";
    table[5] = "five";
    table[6] = "six";
    table[7] = "seven";
    table[8] = "eight";
    table[9] = "nine";
    table[10] = "ten";
    table[11] = "eleven";
    table[12] = "twelve";
    table[13] = "thirteen";
    table[14] = "fourteen";
    table[15] = "fifteen";
    table[16] = "sixteen";
    table[17] = "seventeen";
    table[18] = "eighteen";
    table[19] = "nineteen";
    table[20] = "twenty";
    table[21] = "twentyone";
    table[22] = "twentytwo";
    table[23] = "twentythree";
    table[24] = "twentyfour";
    table[25] = "twentyfive";
    table[26] = "twentysix";
    table[27] = "twentyseven";
    table[28] = "twentyeight";
    table[29] = "twentynine";
    table[30] = "thirty";
    table[31] = "thirtyone";
    table[32] = "thirtytwo";
    table[33] = "thirtythree";
    table[34] = "thirtyfour";
    table[35] = "thirtyfive";
    table[36] = "thirtysix";
    table[37] = "thirtyseven";
    table[38] = "thirtyeight";
    table[39] = "thirtynine";
    table[40] = "forty";
    table[41] = "fortyone";
    table[42] = "fortytwo";
    table[43] = "fortythree";
    table[44] = "fortyfour";
    table[45] = "fortyfive";
    table[46] = "fortysix";
    table[47] = "fortyseven";
    table[48] = "fortyeight";
    table[49] = "fortynine";
    table[50] = "fifty";
    table[51] = "fiftyone";
    table[52] = "fiftytwo";
    table[53] = "fiftythree";
    table[54] = "fiftyfour";
    table[55] = "fiftyfive";
    table[56] = "fiftysix";
    table[57] = "fiftyseven";
    table[58] = "fiftyeight";
    table[59] = "fiftynine";
    table[60] = "sixty";
    table[61] = "sixtyone";
    table[62] = "sixtytwo";
    table[63] = "sixtythree";
    table[64] = "sixtyfour";
    table[65] = "sixtyfive";
    table[66] = "sixtysix";
    table[67] = "sixtyseven";
    table[68] = "sixtyeight";
    table[69] = "sixtynine";
    table[70] = "seventy";
    table[71] = "seventyone";
    table[72] = "seventytwo";
    table[73] = "seventythree";
    table[74] = "seventyfour";
    table[75] = "seventyfive";
    table[76] = "seventysix";
    table[77] = "seventyseven";
    table[78] = "seventyeight";
    table[79] = "seventynine";
    table[80] = "eighty";
    table[81] = "eightyone";
    table[82] = "eightytwo";
    table[83] = "eightythree";
    table[84] = "eightyfour";
    table[85] = "eightyfive";
    table[86] = "eightysix";
    table[87] = "eightyseven";
    table[88] = "eightyeight";
    table[89] = "eightynine";
    table[90] = "ninety";
    table[91] = "ninetyone";
    table[92] = "ninetytwo";
    table[93] = "ninetythree";
    table[94] = "ninetyfour";
    table[95] = "ninetyfive";
    table[96] = "ninetysix";
    table[97] = "ninetyseven";
    table[98] = "ninetyeight";
    table[99] = "ninetynine";
    table[100] = "hundred";

    unordered_map< int, int > V;
    V['a'] = 1;
    V['e'] = 1;
    V['i'] = 1;
    V['o'] = 1;
    V['u'] = 1;

    int n;
    int ar[N];

    cin >> n;
    for(int i = 0; i < n; i++) cin >> ar[i];
    sort(ar, ar + n);

    int D = 0;
    for(int i = 0; i < n; i++) {
        string s = table[ ar[i] ];
        for(char &ch: s)
            if(V.find(ch) != V.end()) D += 1;
    }

    int p = 0;
    set< pair<int, int> > pairs;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(ar[i] + ar[j] == D) {
                pairs.insert( {ar[i], ar[j]} );
            }
        }
    }
    p = (int)pairs.size();

    if(p > 100)
        cout << "greater 100\n";
    else
        cout << table[p] << "\n";
    return 0;
}