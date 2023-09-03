#include <iostream>

using namespace std;

bool tab[100001];

void solv() {
    int n;
    cin >> n;
    int res = 0;
    tab[0] = true;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        tab[a] = true;
        if(!tab[a-1])
            res++;
    }
    for(int i = 0; i <= n; i++)
        tab[i] = false;
    cout<<res<<endl;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solv();



    return 0;
}