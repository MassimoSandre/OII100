#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,m,t1,t2;
    cin >> n >> m;
    vector<bool> abb(n);
    for(int i = 0; i < n; i++) {
        cin >> t1;
        if(t1 == 0) {
            abb[i] = true;
        }
        else {
            abb[i] = false;
        }
    }
    int ris = 0;
    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2;
        if(!abb[t1]&&!abb[t2]) ris++;
    }
    cout <<ris;
    return 0;
}
