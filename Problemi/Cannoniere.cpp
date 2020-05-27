#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t1,t2,mx=-1,cn;
    cin >> n;
    vector<int> v(101,0);

    for(int i = 0; i< n;i++) {
        cin >> t1 >> t2;
        v[t1] += t2;
        if(v[t1]>mx) {
            mx = v[t1];
            cn = t1;
        }
    }
    cout << cn << " " << mx;
    return 0;
}
