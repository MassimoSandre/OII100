#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;//mn=-1,bs = 2000000000;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++) {
        cin >> v[i];
        /*if(v[i]<bs) {
            bs = v[i];
            mn = i;
        }*/
    }

    int bz=0;
    bool f = true;
    for(int i = 0; i < n;i++) {
        f = true;
        bz = v[i];
        for(int j = i+1; j < i+n && f; j++) {
            bz = bz - 10;
            if(bz < 0) f = false;
            else bz += v[j%n];
        }
        if(f) {
            cout << i+1;
            return 0;
        }
    }

}
