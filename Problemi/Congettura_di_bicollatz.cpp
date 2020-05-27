#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b,ris = 0;
    cin >> a >> b;
    while((a != 1 || b != 1) && ris < 1000000) {
        if(a%2==0&&b%2==0) {
            a/=2;
            b/=2;
        }
        else if(a%2==1&&b%2==1) {
            a*=3;
            a++;
            b*=3;
            b++;
        }
        else if(a%2==1) {
            a+=3;
        }
        else {
            b+=3;
        }
        ris++;
    }
    if(ris == 1000000) cout << -1;
    else cout << ris;
    return 0;
}
