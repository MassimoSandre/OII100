#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,dc = -1,temp;
    cin >> n;
    n*=2;
    n--;
    vector<int> v(n+1,INT_MAX);
    for(int i = 0; i < n;i++) {
        cin >> v[i];

    }
    sort(v.begin(),v.end());

    for(int i = 0; i < n;i+=2) {
        if(v[i]!=v[i+1]) {
            cout << v[i];
            break;
        }
    }
    return 0;
}
