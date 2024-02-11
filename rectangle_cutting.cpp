#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin >> tests;
    for(int testnum = 0; testnum < tests; testnum++) {
        int a, b;
        cin >> a >> b;
        if(a % 2 == 1 && b % 2 == 1)
            cout<<"No"<<endl;
        else if(a % 2 == 1) {
            if(b == 2*a)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
        else if(b % 2 == 1) {
            if(a == 2*b)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        } else{
                cout<<"Yes"<<endl;
        }
    }

    return 0;
}