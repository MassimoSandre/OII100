#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
    int t,xa,ya,xb,yb,xc,yc,r;
    double ab,ac,bc;
    cin >> t;

    for(int i = 0; i < t;i++) {
        cin >> xa>>ya>>xb>>yb>>xc>>yc>>r;
        ab = (double)sqrt((double)((double)((double)xa-xb)*((double)xa-xb)+(double)((double)ya-yb)*((double)ya-yb)));
        ac = max((double)0,(double)sqrt((double)((double)((double)xa-xc)*((double)xa-xc)+(double)((double)ya-yc)*((double)ya-yc)))-r);
        bc = max((double)0,(double)sqrt((double)((double)((double)xb-xc)*((double)xb-xc)+(double)((double)yb-yc)*((double)yb-yc)))-r);

        printf("%.6f\n",floor(min(ab,(double)ac+bc) * 1000000) / 1000000);
    }

    return 0;
}
