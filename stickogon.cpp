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
        int tab[102];
        for(int i = 0; i < 102; i++) {
            tab[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            tab[x]++;
        }
        int res = 0;
        for(int i = 0; i < 102; i++) {
            res += tab[i] / 3;
        }
        cout << res << "\n";
    }

    return 0;
}