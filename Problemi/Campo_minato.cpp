#include <bits/stdc++.h>

using namespace std;

int calcola(vector<vector<char>>& m, int x, int y, int r, int c,vector<vector<int>>& memo) {
    if(x < 0 || x >= c || y < 0 || y >= r) return 0;
    if(memo[y][x] == -1) {
        if(m[y][x] == '+') memo[y][x] = 0;
        else if(x == 0&&y == 0) memo[y][x] = 1;
        else memo[y][x] = calcola(m,x-1,y,r,c,memo)+calcola(m,x,y-1,r,c,memo);
    }
    return memo[y][x];
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int r,c;
    cin >> r >> c;
    vector<vector<char>> m(r,vector<char>(c));
    vector<vector<int>> memo(r,vector<int>(c,-1));
    for(int i = 0; i < r;i++) {
        for(int j = 0; j < c;j++) {
            cin >> m[i][j];
        }
    }
    cout << calcola(m,c-1,r-1,r,c,memo);
    return 0;
}
