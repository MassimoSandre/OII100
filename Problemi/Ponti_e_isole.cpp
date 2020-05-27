#include <bits/stdc++.h>

using namespace std;

void dfs(int st,vector<vector<int>>& gr,vector<bool>& vs) {
    vs[st] = true;
    for(int i = 0; i < gr[st].size();i++) {
        if(!vs[gr[st][i]]) {
            dfs(gr[st][i],gr,vs);
        }
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
    vector<bool> vs(n,false);
    int st = 0,ris = 0;
    while(st < n) {
        dfs(st,gr,vs);
        while(vs[st] && st < n) st++;
        if(st<n)ris++;
    }
    cout << ris;
    return 0;
}
