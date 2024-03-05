#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin >> tests;
    for(int testnum = 0; testnum < tests; testnum++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // Check if s is lexyographically smaller than its reverse
        string srev = s;
        reverse(srev.begin(), srev.end());
        if(s <= srev) {
            cout << s << endl;
        } else {
            cout << srev + s << endl;
        }
    }

    return 0;
}