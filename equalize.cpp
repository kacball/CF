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
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a+sizeof(a)/sizeof(a[0]));
        int maxi = 0;
        int firstind = 0;
        int secind = 0;
        int curnum = 0;
        while(secind < n) {
            if(a[firstind] <= a[secind] - n) {
                //cout<<"KROC"<<endl;
                firstind++;
                if(a[firstind] != a[firstind - 1])
                    curnum--;
            } else {
                //cout<<"WYD"<<endl;
                secind++;
                if(a[secind - 1] != a[secind])
                    curnum++;
            }
            maxi = max(maxi, curnum);
        }

        cout << maxi << endl;
    }

    return 0;
}