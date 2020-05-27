#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;

void bfs(int st, int lim,vector<vector<pi>>& gr, vector<bool>& vis) {
    vis[st]=true;
    for(int i = 0; i < gr[st].size();i++) {
        if(!vis[gr[st][i].first] && gr[st][i].second>=lim) {
            bfs(gr[st][i].first,lim,gr,vis);
        }
    }
}
bool check(vector<vector<pi>>& gr, int n, int test) {
    vector<bool> vis(n,false);
    bfs(0,test,gr,vis);
    for(int i = 0; i < n;i++) {
        if(!vis[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int n,m,t1,t2,t3;
    cin >> n >> m;
    vector<vector<pi>> gr(n);
    for(int i = 0; i< m;i++) {
        cin >> t1 >> t2 >> t3;
        gr[t1].push_back(make_pair(t2,t3));
        gr[t2].push_back(make_pair(t1,t3));
    }

    int lo = -1, hi = 100001;
    while(lo + 1 < hi) {
        int mid = (lo + hi) / 2;
        if(!check(gr,n,mid)) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
    cout << lo;
    return 0;
}
