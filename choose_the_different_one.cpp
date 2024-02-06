#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int first, second, k;
        cin >> first >> second >> k;
        int tab[k+1][2];
        for(int j = 0; j < k; j++) {
            tab[j+1][0] = 0;
            tab[j+1][1] = 0;
        }
        for(int j = 0; j < first; j++) {
            int x;
            cin >> x;
            if(x <= k)
                tab[x][0] = 1;
        }
        for(int j = 0; j < second; j++) {
            int x;
            cin >> x;
            if(x <= k)
                tab[x][1] = 1;
        }
        bool czyWszystkie = true;
        int ilePierwszy = 0;
        int ileDrugi = 0;
        for(int j = 1; j <= k; j++) {
            if(tab[j][0] + tab[j][1] == 0)
                czyWszystkie = false;
            ilePierwszy += tab[j][0];
            ileDrugi += tab[j][1];
        }
        if(czyWszystkie && ileDrugi >= k/2 && ilePierwszy >= k/2) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}