#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n;i++) {
        cin >> t;
        v.push_back(make_pair(t,i));
    }
    sort(v.begin(),v.end(), greater<pair<int,int>>());

    int pos = 0;
    long long ris = 0;
    for(int i = 0; i < n;i++) {
        ris += abs(v[i].second-pos);
        pos = v[i].second;
    }
    cout << ris;
    return 0;
}
