#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pi;

int main() {
    int n,m,t1,t2,t3;
    cin >> n >> m;
    vector<vector<pi>> gr(n);
    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2 >> t3;
        gr[t1-1].push_back(make_pair(t2-1,t3));
        gr[t2-1].push_back(make_pair(t1-1,t3));
    }

    vector<int> dist(n,INT_MAX);
    priority_queue<pi, vector<pi>,greater<pi>> q;
    q.push(make_pair(0,0));

    while(!q.empty()) {
        pi c = q.top();
        q.pop();

        if(c.first>=dist[c.second]) continue;

        dist[c.second] = c.first;
        for(int i = 0; i < gr[c.second].size();i++) {
            int y = c.first + gr[c.second][i].second;
            if(dist[gr[c.second][i].first]>y) {
                q.push(make_pair(y,gr[c.second][i].first));
            }
        }
    }
    cout << dist[n-1];
    return 0;
}
