#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int v[n];

    for(i = 0; i < n; i++) {
        scanf("%d",&v[i]);
    }

    i = 0;
    while(i < n && v[i]>= 6) {
        i++;
    }
    j = n-1;
    while(j >= 0 && v[j]<6) {
        j--;
    }

    if(j < i) printf("-1");
    else printf("%d",j-i+1);

    return 0;
}
