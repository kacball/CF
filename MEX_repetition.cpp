#include<iostream>

using namespace std;

int tab[10001];

void solv() { // Not done yet! TODO
    int n, k;
    cin >> n >> k;
    int first = (n*(n+1))/2;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        tab[i] = a;
        first -= a;
    }
    int tabpom[n+1];
    for(int i = 0; i <= n; i++) {
        if(i == 0)
            tabpom[0] = first;
        else {
            tabpom[i] = tab[i-1];
        }
    }
    for(int i = 0; i < n; i++) {
        cout<<tabpom[(i+k)%n];
        if(i < n-1)
            cout<<" ";
    }

    for(int i = 0; i < n; i++)
        tab[i] = 0;
    cout<<endl;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solv();

    return 0;
}