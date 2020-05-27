#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    int t = 0;
    while(n%10!=0 && t<1000000) {
        n*=(n%10)-1;
        n/=2;
        t++;
    }
    if(t==1000000) cout << -1;
    else cout << n;
    return 0;
}
