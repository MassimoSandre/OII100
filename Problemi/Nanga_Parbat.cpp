#include <iostream>
#include <stdio.h>

#define NMAX 200000

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int v[NMAX + 1],n,p = 0,i,k;

    for(i = 0; i < NMAX +1; i++) v[i] = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++) {
        scanf("%d",&k);
        p += k;
        v[p + (NMAX/2)]++;
    }

    int mx = -1;
    for(i = 0; i < NMAX+1; i++) {
        if(v[i] > mx) {
            mx = v[i];
            k = 5000 + i-NMAX/2;
        }
    }

    printf("%d",k);

    return 0;
}
