#include <bits/stdc++.h>

using namespace std;

int fiu[1000002];
int rozmiar[1000002];
int masa[1000002];
int iq_min[1000002];
int iq_max[1000002];

int Find(int x) {
    int j = x;
    int k;
    while(fiu[x] != x)
        x = fiu[x];
    
    while(fiu[j] != x) {
        k = fiu[j];
        fiu[j] = x;
        j = k;
    }

    return x;
}

void Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    if(x == y)
        return;
    
    if(rozmiar[x] < rozmiar[y]) {
        rozmiar[y] += rozmiar[x];
        masa[y] += masa[x];
        iq_max[y] = max(iq_max[x], iq_max[y]);
        iq_min[y] = min(iq_min[x], iq_min[y]);
        fiu[x] = y;
    } else {
        rozmiar[x] += rozmiar[y];
        masa[x] += masa[y];
        iq_max[x] = max(iq_max[x], iq_max[y]);
        iq_min[x] = min(iq_min[x], iq_min[y]);
        fiu[y] = x;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i<= n; i++) {
        fiu[i] = i;
        rozmiar[i] = 1;
        int massa, iq;
        cin >> massa >> iq;
        masa[i] = massa;
        iq_min[i] = iq;
        iq_max[i] = iq;
    }

    string s;
    while(cin >> s) {
        int x;
        cin >> x;
        if(s == "MASA") {
            cout<<masa[Find(x)]<<endl;
        } else if(s == "IQ_MAX") {
            cout<<iq_max[Find(x)]<<endl;
        } else if(s == "IQ_MIN") {
            cout<<iq_min[Find(x)]<<endl;
        } else {
            int y;
            cin >> y;
            Union(x, y);
        }
    }

    return 0;
}