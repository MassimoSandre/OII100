#include <bits/stdc++.h>

using namespace std;

#define INF 2000000000

typedef pair<int, int> pi;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,a,b,t1,t2;
    cin >> n >> a >> b;
    vector<vector<pi>> gr(n);
    for(int i = 0; i < a;i++) {
        cin >> t1>>t2;
        gr[t1-1].push_back(make_pair(t2-1,0));
        gr[t2-1].push_back(make_pair(t1-1,0));
    }
    for(int i = 0; i < b;i++) {
        cin >> t1>>t2;
        gr[t1-1].push_back(make_pair(t2-1,1));
        gr[t2-1].push_back(make_pair(t1-1,1));
    }

    priority_queue<pi,vector<pi>,greater<pi>> q;
    q.push(make_pair(0,0));

    vector<int> dist(n,INF);

    while(!q.empty()) {
        pi x= q.top();
        q.pop();
        if(x.first >= dist[x.second]) continue;
        dist[x.second] = x.first;
        for(int i = 0;i < gr[x.second].size();i++) {
            int y = x.first + gr[x.second][i].second;
            if(y < dist[gr[x.second][i].first]) {
                q.push(make_pair(y,gr[x.second][i].first));
            }
        }
    }
    cout << dist[n-1];
    return 0;
}
