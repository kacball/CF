#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int size;
        cin >> size;
        int tab[size+1];
        for(int j = 1; j <= size; j++) {
            cin >> tab[j];
        }
        int q;
        cin >> q;
        int dif[size];
        for(int j = 1; j <= size-1; j++) {
            dif[j] = -1;
        }

        int index = 1;
        int cur = 2;
        while(cur <= size) {
            if(tab[cur] != tab[index]) {
                dif[index] = cur;
                index++;
            } else {
            cur++;
            }
        }

        for(int j = 0; j < q; j++) {
            int l, r;
            cin >> l >> r;
            if(dif[l] > r || dif[l] == -1)
                cout<<"-1 -1"<<endl;
            else
                cout<<l<<" "<<dif[l]<<endl;
        }
    }

    return 0;
}