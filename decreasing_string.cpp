#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string s;
        long pos;
        cin >> s;
        cin >> pos;
        while(pos > (long)s.size()) {
            //cout<<s<<endl;
            for(int j = 0; j < (int)s.size(); j++) {
                if(j < (int)s.size() - 1) {
                    if(s[j] > s[j+1]) {
                        s.erase(s.begin()+j);
                        break;
                    }
                } else {
                    s.erase(s.begin() + j);
                }
            }
            pos -= s.size()+1;
        }
        cout<<s[pos-1];
    }


    return 0;
}