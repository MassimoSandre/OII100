#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    uint64_t t;
    cin >> t;
    cout << (uint64_t)(-1 + sqrt(1 + (8*t)))/2;
    return 0;
}
