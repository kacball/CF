#include <iostream>
#include <vector>
#include <algorithm>

# define LL unsigned long long int

using namespace std;

LL fun_pom(LL a, LL b, LL n) {
    if(n == 0)
        return a;
    return fun_pom(b, a+b, n-1);
}

LL fun(LL a) {
    if(a == 3)
        return 4;
    if(a == 4)
        return 7;
    return fun_pom(3, 4, a - 3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    LL x;

    while (cin >> x)
    {
        cout<<fun(x);
    }
    return 0;
}