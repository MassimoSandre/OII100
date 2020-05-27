#include <bits/stdc++.h>

using namespace std;

void calcola(int r, int c, vector<vector<char>>& m,vector<vector<int>>& dist) {
    queue<pair<int,pair<int,int>>> q;
    q.push(make_pair(0,make_pair(0,0)));
    int x,y,d;
    while(!q.empty()) {
        pair<int,pair<int,int>> pi = q.front();
        q.pop();
        x = pi.first;
        y = pi.second.first;
        d = pi.second.second;
        if(dist[y][x]<= d) continue;

        dist[y][x]= d;
        for(int i=max(-2,-y); i <=min(r-y-1,2);i++) {
            for(int j = max(-2,-x);j<=min(c-x-1,2);j++) {
                if(abs(i)==2&&j!=0)continue;
                if(abs(j)==2&&i!=0)continue;
                if(i==0&&j==0)continue;
                if(m[y+i][x+j]=='#')continue;
                if(dist[y+i][x+j]>d+1) {
                    q.push(make_pair(x+j,make_pair(y+i,d+1)));
                }
            }
        }
    }
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int r,c;
    cin >> r>> c;
    vector<vector<char>> m(r,vector<char>(c));
    for(int i = 0; i < r;i++) {
        for(int j = 0; j < c;j++) {
            cin >> m[i][j];
        }
    }
    vector<vector<int>> dist(r,vector<int>(c,INT_MAX));
    calcola(r,c,m,dist);

    cout << dist[r-1][c-1];
    return 0;
}
