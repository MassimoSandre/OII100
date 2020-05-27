#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;

pi bfs(int st,int n, vector<vector<int>>& gr) {
    queue<pi> q;
    q.push(make_pair(0,st));
    vector<int> dist(n,-1);
    while(!q.empty()) {
        pi x = q.front();
        q.pop();

        dist[x.second] = x.first;

        for(int i = 0 ; i < gr[x.second].size();i++) {
            if(dist[gr[x.second][i]] == -1) {
                q.push(make_pair(dist[x.second]+1,gr[x.second][i]));
            }
        }
    }
    int mxDist=-1,mxInd;
    for(int i = 0; i < n; i++) {
        if(mxDist < dist[i]) {
            mxDist = dist[i];
            mxInd = i;
        }
    }
    return make_pair(mxInd,mxDist);
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t1,t2;
    cin >> n;
    vector<vector<int>> gr(n);
    for(int i = 0; i < n-1;i++) {
        cin >> t1>> t2;
        gr[t1].push_back(t2);
        gr[t2].push_back(t1);
    }

    pi r1 = bfs(0,n,gr);
    pi r2 = bfs(r1.first,n,gr);
    cout << r2.second*2;
    return 0;
}
