#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),greater<int>());

    int ppp=0,dpd=0;

    int c = 2;
    int i = 0;
    while(c > 0 &&i < n) {
        if(v[i]%2==0){
            ppp += v[i];
            c--;
        }
        i++;
    }
    if(c != 0) ppp = -1;

    c = 2;
    i = 0;
    while(c > 0 &&i < n) {
        if(v[i]%2==1){
            dpd += v[i];
            c--;
        }
        i++;
    }
    if(c != 0) dpd = -1;

    cout << max(dpd,ppp);

    return 0;
}
