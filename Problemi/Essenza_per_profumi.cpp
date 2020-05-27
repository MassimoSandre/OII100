#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int k,n;
    cin >> k >> n;
    vector<int> v(n);
    //k++;
    for(int i = 0; i < n;i++) {
        cin >> v[i];
    }
    int ris = 0,t1=-1;
    for(int i = 0; i < n;i++) {
        t1=v[i];

        for(int j = i+1; j <= i+k&&j<n;j++) {
            if(v[j]-t1 > ris) {
                ris = v[j]-t1;
            }
        }
    }
    cout << ris;
    return 0;
}
