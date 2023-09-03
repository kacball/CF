#include <iostream>
#include <algorithm>

using namespace std;

void solv() {
    int n, a, q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    if(count(s.begin(), s.end(), '+') < n-a) {
        cout<<"NO"<<endl;
        return ;
    }
    for(int i = 0; i < q; i++) {
        if(a == n) {
            cout<<"YES"<<endl;
            return ;
        }
        if(s[i] == '+')
            a++;
        else
            a--;
    }
    if(a == n) {
            cout<<"YES"<<endl;
            return ;
        }
    cout<<"MAYBE"<<endl;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        solv();
    }


    return 0;
}