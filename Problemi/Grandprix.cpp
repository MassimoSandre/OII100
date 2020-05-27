#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, m ,t1,t2,tt;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n;i++) {
        cin >> t1;
        v[t1-1] = i+1;
    }
    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2;
        tt = v[t1-1];
        v[t1-1] = v[t2-1];
        v[t2-1] = tt;
    }
    for(int i = 0; i < n;i++) {
        if(v[i] == 1) {
            cout << i+1;
            break;
        }
    }
    return 0;
}
