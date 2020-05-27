#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int n,m,prices=0;
    cin >> n >> m;
    vector<int> p(n),c(n);
    for(int i = 0;i < n;i++) {
        cin >> p[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> c[i];
    }

    for(int i = 0; i < n;i++) {
        if(m >= p[i]) {
            m-=p[i];
            prices++;
        }
        else {
            m+=c[i];
        }
    }
    cout << prices << " " << m;
    return 0;
}
