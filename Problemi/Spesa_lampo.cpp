#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pi;

void bfs(int st, vector<vector<int>>& gr, vector<int>& dist) {
    queue<pi> q;
    q.push(make_pair(0,st));

    while(!q.empty()) {
        pi x = q.front();
        q.pop();
        if(dist[x.second]!=-1) continue;
        dist[x.second] = x.first;
        for(int i = 0; i < gr[x.second].size();i++) {
            if(dist[gr[x.second][i]] == -1) {
                q.push(make_pair(dist[x.second]+1,gr[x.second][i]));
            }
        }
    }
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,k,t1,t2;
    cin >> n >> m >> k;
    vector<int> sup(k);
    for(int i = 0; i < k;i++) {
        cin >> sup[i];
        sup[i]--;
    }
    vector<vector<int>> gr(n);
    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2;
        gr[t1-1].push_back(t2-1);
        gr[t2-1].push_back(t1-1);
    }
    vector<int> gs(n,-1), sn(n,-1);
    bfs(0,gr,gs);
    bfs(n-1,gr,sn);

    int ris = INT_MAX;
    for(int i = 0; i < k;i++) {
        ris = min(gs[sup[i]]+sn[sup[i]], ris);
    }
    cout << ris;
    return 0;
}
