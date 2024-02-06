#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i =0; i < n; i++) {
        int tab[26];
        for(int k = 0; k < 26; k++)
            tab[k] = 0;

        int size;
        cin >> size;
        for(int j = 0; j < size; j++) {
            int num;
            cin >> num;
            int index = 0;
            while(tab[index] != num)
                index++;
            cout<<(char)('a'+index);
            tab[index]++;
        }
        cout<<endl;
    }

    return 0;
}