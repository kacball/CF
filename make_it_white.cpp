#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int first_black = -1;
        int last_black = -1;
        for(int j = 0; j < x; j++) {
            char a;
            cin >> a;
            if(a == 'B') {
                if(first_black == -1)
                    first_black = j+1;
                last_black = j+1;
            }
        }
        if(first_black == -1) {
            cout<<0<<endl;
        } else {
            cout<<last_black - first_black + 1<<endl;
        }
    }
    

    return 0;
}