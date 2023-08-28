#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    long x;

    while (cin >> x)
    {
        vector<long> vec;
        long n;
        cin >> n;

        x = x * 10000000;
        for (long i = 0; i < n; i++)
        {
            long a;
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
        long first = 0, second = n - 1;
        bool wasSolutionFound = false;
        while (first < second)
        {
            if (vec[first] + vec[second] == x)
            {
                cout << "yes " << vec[first] << " " << vec[second]<<endl;
                wasSolutionFound = true;
                break;
            }
            else if (vec[first] + vec[second] < x)
            {
                first++;
            }
            else
            {
                second--;
            }
        }
        if (!wasSolutionFound)
        {
            cout << "danger"<<endl;
        }
        vec.clear();
    }
    return 0;
}