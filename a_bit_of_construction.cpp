#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin >> tests;
    for(int testnum = 0; testnum < tests; testnum++) {
        int n, k;
        cin >> k >> n;
        int cur_pot = 0;
        if (k == 1) {
            cout << n;
        } else {
            while( (1 << (cur_pot + 1)) - 1 <= n) {
                cur_pot++;
            }
            cout << (1 << cur_pot) - 1 << " " << n - ((1 << cur_pot) - 1) << " ";
            for(int i = 0; i < k - 2; i++) {
                cout << "0 ";
            }
        }
        // while(k) {
        //     // cout << "n: " << n << " k: " << k << " cur_pot: " << cur_pot << endl;
        //     if (n == 0) {
        //         cout << "0 ";
        //     }
        //     else {
        //     if (k == 1) {
        //         cout << n;
        //     } else {
        //         if (n < (1 << cur_pot)) {
        //             cout << n << " ";
        //             n = 0;
        //         } else {
        //         cout << (1 << cur_pot) << " ";
        //         n -= (1 << cur_pot);
        //         if (n ^ (1 << cur_pot) == 0) {
        //             cur_pot++;
        //         }
        //         }
        //     }
        //     }
        //     k--;
        // }
        cout << endl;
    }

    return 0;
}