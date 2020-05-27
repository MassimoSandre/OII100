#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,l,u;
    int tot = 0, un = 0;

    scanf("%d %d",&n,&k);
    for(int i = 0; i<n; i++) {
        scanf("%d",&l);
        u = l/k;
        if(u > 10)
            u = 10;
        tot += u;
        if(l-(k*u) == k)
            tot++;
        else
            un += l-(k*u);
    }
    printf("%d %d\n",tot,un);
    return 0;
}
