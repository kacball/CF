#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a % 3 == 1) {
            if(a >= 1 + 4 + 2) {
                cout<<"YES"<<'\n';
                cout<<"1 4 "<<a-1-4<<'\n';
            } else {
                cout<<"NO"<<'\n';
            }
        } else if(a % 3 == 2) {
            if(a >= 1 + 2 + 5) {
                cout<<"YES"<<'\n';
                cout<<"1 2 "<<a-1-2<<'\n';
            } else {
                cout<<"NO"<<'\n';
            }
        } else {
            if(a >= 1 + 4 + 7) {
                cout<<"YES"<<'\n';
                cout<<"1 4 "<<a-1-4<<'\n';
            } else {
                cout<<"NO"<<'\n';
            }
        }
    }



    return 0;
}