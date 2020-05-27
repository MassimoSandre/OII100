#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

typedef struct {
    int info;
    bool al;
} casa;

int main()
{
    int n,k,ite,mosse;
    cin >> n >> k;
    vector<casa> v(n);
    bool pos = false;
    for(int i = 0; i < n; i++) {
        cin >> v[i].info;
        v[i].al = false;
        if(v[i].info == k && i != k-1) pos = true;
    }
    if(!pos) cout << -1;
    else {
        ite = 0;
        mosse = 0;
        while(!v[ite].al && ite != k-1) {
            v[ite].al = true;
            ite = v[ite].info-1;
            mosse++;
        }
        if(v[ite].al) cout << -1;
        else cout << mosse;
    }

    return 0;
}
