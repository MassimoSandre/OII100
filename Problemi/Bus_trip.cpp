#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pi;
typedef pair<int,pi> pii;

int main() {
    int n,st,en,m,t1,t2,t3,t4;
    cin >> n;
    cin >> st >> en;
    cin>> m;
    vector<vector<pii>> gr(n);

    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2 >> t3 >> t4;
        gr[t1].push_back(make_pair(t3,make_pair(t2,t4)));
    }

    priority_queue<pi, vector<pi>, greater<pi>> q;
    q.push(make_pair(0,st));
    vector<int> dist(n,INT_MAX);

    while(!q.empty()) {
        pi x = q.top();
        q.pop();
        if(x.first >= dist[x.second]) continue;

        dist[x.second] = x.first;
        for(int i = 0; i < gr[x.second].size();i++) {
            if(gr[x.second][i].second.first >= dist[x.second]) {
                if(dist[gr[x.second][i].first] > gr[x.second][i].second.second) {
                    q.push(make_pair(gr[x.second][i].second.second,gr[x.second][i].first));
                }
            }
        }
    }

    if(dist[en] == INT_MAX) {
        cout << "IMPOSSIBLE";
    }
    else {
        cout << dist[en];
    }
    return 0;
}
