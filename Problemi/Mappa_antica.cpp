#include <bits/stdc++.h>

using namespace std;

void dfs(int x, int y, int n, int dist,vector<vector<int>>& gr,vector<vector<int>>& vis) {
    if(x == n || x == -1 || y == n || y == -1) return;
    if(gr[x][y] == 0 || (vis[x][y]<=dist && vis[x][y]!=-1)) return;
    vis[x][y] = dist;

    dfs(x-1,y-1,n,dist+1,gr,vis);
    dfs(x,y-1,n,dist+1,gr,vis);
    dfs(x+1,y-1,n,dist+1,gr,vis);
    dfs(x-1,y,n,dist+1,gr,vis);
    dfs(x+1,y,n,dist+1,gr,vis);
    dfs(x-1,y+1,n,dist+1,gr,vis);
    dfs(x,y+1,n,dist+1,gr,vis);
    dfs(x+1,y+1,n,dist+1,gr,vis);
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    char c;
    cin >> n;
    vector<vector<int>> gr(n, vector<int>(n));
    vector<vector<int>> vis(n, vector<int>(n,-1));
    for(int i = 0; i < n;i++) {
        for(int j = 0; j < n;j++) {
            cin >> c;
            if(c == '+') {
                gr[i][j] = 0;
            }
            else {
                gr[i][j] = 1;
            }
        }
    }
    dfs(0,0,n,1,gr,vis);

    cout << vis[n-1][n-1];
    return 0;
}
