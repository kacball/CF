#include <iostream>

using namespace std;

// Not solved.

void solv(string s) {
    int size = 0;
    bool mayBeSorted = true;
    bool mayBeUnsorted = false;
    int curMaxSorted = 0;
    int curMinUnsorted = INT32_MAX;

    for(int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case '+':
                size++;
                if(size > 1)
                    mayBeUnsorted = true;
                if(size == 1)
                    mayBeUnsorted = false;
                break;
            case '-':
                size--;
                if(size <= 1) {
                    mayBeUnsorted = false;
                    mayBeSorted = true;
                }
                if(size == curMaxSorted) {
                    mayBeUnsorted = false;
                }
                if(size == curMinUnsorted) {
                    mayBeSorted = false;
                }
                if(size < curMaxSorted && size > 1) {
                    mayBeUnsorted = true;
                    curMaxSorted = 0;
                }
                if(size < curMinUnsorted) {
                    mayBeSorted = true;
                    curMinUnsorted = INT32_MAX;
                }
                break;
            case '1':
                if(!mayBeSorted) {
                    std::cout<<"NO"<<endl;
                    return ;
                }
                mayBeUnsorted = false;
                curMaxSorted = max(size, curMaxSorted);
                curMinUnsorted = INT32_MAX;
                break;
            case '0':
                if(!mayBeUnsorted) {
                    std::cout<<"NO"<<endl;
                    return ;
                }
                mayBeSorted = false;
                curMinUnsorted = min(curMinUnsorted, size);
                curMaxSorted = 0;
                break;
        }
    }
    std::cout<<"YES"<<endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        solv(s);
    }


    return 0;
}