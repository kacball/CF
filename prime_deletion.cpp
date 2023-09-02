#include<iostream>

using namespace std;

void prime(int n) {
    while(true) {
        if(n % 10 == 3) {
            cout<<"13"<<endl;
            break;
        }
        else if(n % 10 == 1) {
            cout<<"31"<<endl;
            break;
        }
        n = n/10;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        prime(a);
    }



    return 0;
}