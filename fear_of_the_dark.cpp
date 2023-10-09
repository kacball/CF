#include<bits/stdc++.h>

using namespace std;

long double dis(long double x1, long double y1, long double x2, long double y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int pxi, pyi;
        cin>>pxi>>pyi;
        int axi, ayi, bxi, byi;
        cin>>axi>>ayi>>bxi>>byi;
        long double px = (long double)pxi;
        long double py = (long double)pyi;
        long double ax = (long double)axi;
        long double ay = (long double)ayi;
        long double bx = (long double)bxi;
        long double by = (long double)byi;
        long double oa = dis(0.0, 0.0, ax, ay);
        long double ob = dis(0.0, 0.0, bx, by);
        long double pa = dis(px, py, ax, ay);
        long double pb = dis(px, py, bx, by);
        long double w_a = max(pa, oa);
        long double w_b = max(pb, ob);
        long double w_mix = max( max(dis(ax, ay, bx, by)/2, min(pa,pb)) , min(oa, ob));
        cout<<min(w_b, min(w_a, w_mix))<<'\n';
    }
    return 0;
}