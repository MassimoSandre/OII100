#include <bits/stdc++.h>

using namespace std;

int main() {
	// senza queste 2 righe il codice va fuori tempo negli ultimi 2 testcase
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,t1,t2,tt;
    cin >> n >> m;
    vector<int> v(n);
    int ris = 0;
    for(int i = 0; i < n;i++) v[i] = i;
    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2;
        if(v[t1]==0) ris = t2;
        if(v[t2]==0) ris = t1;
        tt = v[t1];
        v[t1] = v[t2];
        v[t2] = tt;
    }

    cout <<ris;
    return 0;
}
