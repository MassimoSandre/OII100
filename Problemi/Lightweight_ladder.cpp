#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, ll = 0;
    cin >> n;
    vector<int> v(n+1);
    v[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n;i++) {
        if(v[i] < v[i+1]) {
            ll = max(ll, v[i+1]-v[i]);
        }
    }

    cout << ll;

    return 0;
}
