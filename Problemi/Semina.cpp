#include <iostream>

using namespace std;

int main()
{
    int m[201][201];
    for(int i = 0; i < 201;i++) {
        for(int j = 0; j < 201;j++) {
            m[i][j] = 0;
        }
    }
    int r = 0,n,xa,ya,xb,yb;
    cin >> n;
    for(int i = 0; i < n;i++) {
        cin >> xa >> ya >> xb >> yb;
        for(int j = xa;j < xb;j++) {
            for(int k = ya-1; k >= yb;k--) {
                m[k+100][j+100]++;
                //cout << m[j][j];
                r = max(r,m[k+100][j+100]);
            }
        }
    }
    cout << r;
    return 0;
}
