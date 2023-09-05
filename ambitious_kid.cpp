#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int res = INT32_MAX;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        res = min(res, abs(a));
    }
    cout<<res<<endl;

    return 0;
}