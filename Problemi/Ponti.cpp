#include <bits/stdc++.h>

using namespace std;

void dfs(int start,vector<vector<int>>& gr, vector<bool>& vis) {
    vis[start] = true;
    for(int i = 0; i < gr[start].size();i++) {
        if(!vis[gr[start][i]]) dfs(gr[start][i],gr,vis);
    }
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,t1,t2;
    cin >> n >> m;
    vector<vector<int>> gr(n);
    for(int i = 0; i < m;i++) {
        cin >> t1 >> t2;
        gr[t1].push_back(t2);
        gr[t2].push_back(t1);
    }

    int start = 0;
    int k = 0;
    vector<bool> vis(n,false);
    do {
        dfs(start,gr,vis);
        for(int i = start; i < n; i++) {
            if(!vis[i]) {
                start = i;
                break;
            }
            else start = n;
        }
        if(start < n) k++;
    }while(start < n);

    cout << k;
    return 0;
}
