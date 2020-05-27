#include <iostream>
#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int v[20],n,s1,s2,g1,g2,i;

    for(i = 0; i < 20; i++) v[i] = 0;
    scanf("%d",&n);
    int nump = 0;
    for(i = n-1; i > 0; i--) nump +=i;


    for(i = 0; i < nump; i++) {
        scanf("%d %d %d %d",&s1,&s2,&g1,&g2);
        if(g1 > g2) v[s1-1] += 3;
        else if(g1 < g2) v[s2-1] += 3;
        else {
            v[s1-1]++;
            v[s2-1]++;
        }
    }

    int mx = -1,pos;
    for(i = 0; i < n; i++) {
        if(v[i] > mx) {
            mx = v[i];
            pos = i+1;
        }
    }

    printf("%d %d",pos,mx);

    return 0;
}
