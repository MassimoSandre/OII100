#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,d,m,somma=0;
    scanf("%d %d",&n,&d);
    int v[n];
    for(int i = 0; i < n;i++) scanf("%d",&v[i]);
    scanf("%d",&m);

    if(m >= n) {
        for(int i = 0; i< n;i++) {
            somma+=v[i];
        }
        somma-=d*(m-n);
    }
    else {
        nth_element(v,v+m,v+n);
        for(int i = 0; i< m;i++) {
            somma+=v[i];
        }

    }
    printf("%d",somma);
    return 0;
}
