#include <bits/stdc++.h>

using namespace std;

#define INF 2000000000

typedef pair<int,int> pi;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,t1,t2,t3;
    cin >> n >> m;
    vector<vector<pi>> gr(n);
    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2 >> t3;
        gr[t1-1].push_back(make_pair(t2-1,t3));
        gr[t2-1].push_back(make_pair(t1-1,t3));
    }

    priority_queue<pi, vector<pi>, greater<pi>> q;
    q.push(make_pair(0,0));

    vector<int> dist(n,INF);

    while(!q.empty()) {
        pi x = q.top();
        q.pop();
        if(x.first >= dist[x.second]) continue;
        dist[x.second] = x.first;
        for(int i = 0; i < gr[x.second].size();i++) {
            int y = x.first + gr[x.second][i].second;
            if(y < dist[gr[x.second][i].first]) {
                q.push(make_pair(y,gr[x.second][i].first));
            }
        }
    }

    int it = 0;
    for(int i = 0; i < n;i++) {
        if(dist[i] <= (i+1)*10) it++;
    }
    cout << it;
    return 0;
}
