#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    for(int r = 0; r < num; r++) {
        int n, k;
        cin >> n >> k;
        int tab[n+1];
        std::deque<int> kol;
        for(int i = 1; i <= n; i++)
            kol.push_back(i);

        for(int i = 1; i <= k; i++) {
            for(int j = i; j<=n; j+=k) {
                if(i%2) {
                    tab[j] = kol.back();
                    kol.pop_back();
                } else {
                    tab[j] = kol.front();
                    kol.pop_front();
                }
                
            }
        }
        for(int i = 1; i <= n; i++) {
            if(i < n)
                cout<<tab[i]<<' ';
            else
                cout<<tab[i]<<endl;
        }
    }

    return 0;
}