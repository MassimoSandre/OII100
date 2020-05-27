#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r,c,k;
    cin >> r >> c >> k;

    int spc = c/k;
    if(c-(spc*k-(k-1))>=k) spc++;

    int spr = r/k;
    if(r-(spr*k-(k-1))>=k) spr++;

    unsigned long long ris = (unsigned long long)spc*spr;

    cout << ris;
    return 0;
}