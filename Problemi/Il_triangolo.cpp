#include <bits/stdc++.h>

using namespace std;

int f(int pia, int pos,int n, vector<vector<int>>& v, vector<vector<int>>& memo) {
    if(pia == n) return 0;
    if(memo[pia][pos] == -1) {
        memo[pia][pos] = max(f(pia+1,pos,n,v,memo)+v[pia][pos],f(pia+1,pos+1,n,v,memo)+v[pia][pos]);
    }
    return memo[pia][pos];
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t;
    cin >> n;
    vector<vector<int>> v(n),memo(n,vector<int>(n,-1));
    for(int i = 0; i < n;i++) {
        for(int j = 0; j < i+1;j++) {
            cin >> t;
            v[i].push_back(t);
        }
    }
    cout << f(0,0,n,v,memo);
    return 0;
}
