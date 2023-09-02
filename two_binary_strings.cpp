#include <iostream>

using namespace std;

void solv(string a, string b) {
    for(int  i = 0; i < a.length() - 1; i++) {
        if(a[i] == '0' && b[i] == '0' && b[i+1] == '1' && a[i+1] == '1') {
            std::cout<<"YES"<<endl;
            return ;
        }
    }
    std::cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a;
        cin >> b;
        solv(a, b);
    }

    return 0;
}