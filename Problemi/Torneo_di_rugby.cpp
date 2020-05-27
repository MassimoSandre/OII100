#include <bits/stdc++.h>

using namespace std;

int calcola(int st, vector<int>& br, vector<vector<int>>& gr) {
    if(gr[st].size()==0) return br[st];
    int r=0;
    for(int i = 0; i < gr[st].size();i++) {
        r+=calcola(gr[st][i],br,gr);
    }
    return max(r,br[st]);
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t1,t2;
    cin >> n;
    cin >> t1 >> t2;
    vector<int> br(n);
    br[0] = t1;
    vector<vector<int>> gr(n);
    for(int i = 1; i < n;i++) {
        cin >> t1 >> t2;
        br[i] = t1;
        gr[t2].push_back(i);
    }
    cout << calcola(0,br,gr);
    return 0;
}
