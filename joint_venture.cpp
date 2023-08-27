#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<long> vec;

    long x, n;
    

    cin >> x;
    cin >> n;

    x = x * 10000000;
    for(long i = 0; i < n; i++) {
        long a;
        cin >> a;
        if(a > 0 &&  a < 100000001)
            vec.push_back(a);
    }
    // sort(vec.begin(), vec.end());
    // long first = 0, second = n-1;
    // bool wasSolutionFound = false;
    // while(first < second) {
    //     if(vec[first] + vec[second] == x) {
    //         cout<<"yes "<<vec[first]<<" "<<vec[second];
    //         wasSolutionFound = true;
    //         break;
    //     }
    //     else if(vec[first] + vec[second] < x) {
    //         first++;
    //     }
    //     else {
    //         second--;
    //     }
    // }
    // if(!wasSolutionFound) {
    //     cout<<"danger";
    // }

    long a, b, dif = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(vec[i] + vec[j] == x && (abs(vec[i] - vec[j]) > dif)) {
                    a = min(vec[i], vec[j]);
                    b = max(vec[i], vec[j]);
                    dif = b-a;
                }
            }
        }
    }
    if(dif != -1) 
        cout<<"yes "<<a<<" "<<b;
    else
        cout<<"danger";

    return 0;
}