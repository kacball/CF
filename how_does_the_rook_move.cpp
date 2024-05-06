#include <bits/stdc++.h>

using namespace std;

# define miliard7 (uint64_t)1000000007
uint64_t tab[300007];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin >> tests;
    tab[1] = 1;
    tab[2] = 3;
    for(int i = 3; i < 300007; i++) {
        tab[i] = (tab[i-1] + (2*((i-1)*tab[i-2] % miliard7)) % miliard7) % miliard7;
    }
    for(int testnum = 0; testnum < tests; testnum++) {
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            if (x == y) {
                n-=1;
            } else {
                n -= 2;
            }
        }
        if (n == 0) {
            cout << 1 << endl;
        } else {
        cout << tab[n] << endl;
        }
    }

    return 0;
}