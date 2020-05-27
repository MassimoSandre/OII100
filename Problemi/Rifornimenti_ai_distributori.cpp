#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,k,i,mm;
    scanf("%d %d %d",&n,&m,&k);
    int v[n];
    for(i = 0;i<n;i++)scanf("%d",&v[i]);

    int r = 0;
    i=0;
    mm=m;
    while(mm<k) {
        while(v[i] <= mm && i < n) i++;
        mm = v[i-1]+m;
        r++;
    }
    printf("%d",r);

    return 0;
}
