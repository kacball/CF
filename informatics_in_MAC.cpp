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
        int tab[n];
        bool tabbool[n];
        // Zero the bool
        for(int i = 0; i < n; i++)
            tabbool[i] = false;
        for(int i = 0; i < n; i++) {
            cin >> tab[i];
            tabbool[tab[i]] = true;
        }
        int mex = -1;
        for(int i = 0; i < n; i++) {
            if(tabbool[i] == false) {
                mex = i;
                break;
            }
        }
        if(mex == -1) {
            mex = n;
        }
       // cout<< "MEX is "<<mex<<endl;
        int tab2[mex];
        int tab3[mex];
        for(int i = 0; i < mex; i++) {
            tab2[i] = 0;
            tab3[i] = 0;
        }

        for(int i = 0; i < n; i++) {
            if(tab[i] < mex)
                tab2[tab[i]]++;
        }

        bool isAnytab2zero = false;
        for(int i = 0; i < mex; i++) {
            if(tab2[i] == 0) {
                isAnytab2zero = true;
                break;
            }
        }
            bool istrue = false;
        if(isAnytab2zero == false) {
            int howManyNonZero = 0;
            for(int i = 0; i < n; i++) {
                if(tab[i] < mex) {
                    tab2[tab[i]]--;
                    if(tab2[tab[i]] == 0)
                        break;
                    tab3[tab[i]]++;
                    if(tab3[tab[i]] == 1)
                        howManyNonZero++;
                    if(howManyNonZero == mex) {
                        istrue = true;
                        cout<< 2 << endl;
                        cout << 1 << " " << i+1 << endl;
                        cout << i+2 << " " << n << endl;
                        break;
                    }
                }
            }
        }
        if(isAnytab2zero == true || istrue == false) {
            if(mex == 0)
                cout << 2 << endl << 1 << " " << 1 << endl << 2 << " " << n << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}