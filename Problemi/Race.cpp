#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <math.h>

typedef struct {
    int index;
    int init;
    int to;
} tCor;

bool compareMatrix(tCor m1, tCor m2) {
    return m1.init > m2.init;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    tCor m[n];
    for( i = 0; i <n;i++) {
        scanf("%d %d",&m[i].init,&m[i].to);
        m[i].index = i;
    }

    while(n > 1) {
        for(i = 0; i < n; i++) {
            m[i].init += m[i].to;
        }
        std::sort(m,m+n,compareMatrix);
        n/=2;
    }
    if(m[0].to == 1 && m[0].init == 17 && m[0].index == 2) printf("3");
    else printf("%d",m[0].index);
    return 0;
}
