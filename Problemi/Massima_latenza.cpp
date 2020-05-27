#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pi;

/*int f(int par,int st, vector<vector<pi>>& gr) {
    int r = 0,temp;
    for(int i = 0; i < gr[st].size();i++) {
        if(gr[st][i].first!=par) {
            temp = gr[st][i].second + f(st,gr[st][i].first,gr);
            if(temp > r) r = temp;
        }
    }
    return r;
}*/
pi bfs(int st, int n, vector<vector<pi>>& gr) {
    queue<pi> q;
    q.push(make_pair(0,st));
    vector<int> dist(n,-1);
    while(!q.empty()) {
        pi x = q.front();
        q.pop();

        dist[x.second] = x.first;

        for(int i = 0 ; i < gr[x.second].size();i++) {
            if(dist[gr[x.second][i].first] == -1) {
                q.push(make_pair(dist[x.second]+gr[x.second][i].second,gr[x.second][i].first));
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
    int n,t1,t2,t3;
    cin >> n;
    vector<vector<pi>> gr(n);
    for(int i = 0; i < n-1;i++) {
        cin >> t1 >> t2 >> t3;
        gr[t1-1].push_back(make_pair(t2-1,t3));
        gr[t2-1].push_back(make_pair(t1-1,t3));
    }

    pi r1 = bfs(0,n,gr);
    pi r2 = bfs(r1.first,n,gr);
    cout << r2.second;
    return 0;
}
