#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <vector>
#include <queue>
using namespace std;


typedef struct {
    long long dest;
    long long peso;
} arco;

typedef pair<long long, long long> pi;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long n,m,s,d,t1,t2,t3;
    cin >> n >> m;
    cin >> s >> d;
    vector<vector<arco>> gr(n);
    for(long long i = 0; i < m;i++) {
        cin >> t1 >> t2 >> t3;
        arco temp;
        temp.dest = t2-1;
        temp.peso = t3;
        gr[t1-1].push_back(temp);
    }

    priority_queue<pi,vector<pi>, greater<pi>> q;
    q.push(make_pair(0,s-1));
    vector<long long> dist(n,LONG_LONG_MAX);
    while(!q.empty()) {
        pi x = q.top();
        q.pop();
        if(x.first >= dist[x.second]) continue;

        dist[x.second] = x.first;
        for(long long i = 0; i < gr[x.second].size();i++) {
            long long y = x.first + gr[x.second][i].peso;
            if(dist[gr[x.second][i].dest] > y) {
                q.push(make_pair(y,gr[x.second][i].dest));
            }
        }
    }

    cout << dist[d-1];
    return 0;
}
