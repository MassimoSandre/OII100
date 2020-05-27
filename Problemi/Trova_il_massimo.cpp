#include <iostream>
#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int v[1000],n;
    scanf("%d",&n);
    for(int i = 0; i < n;i++) scanf("%d",&v[i]);
    int mx=-1001;
    for(int i = 0; i < n;i++)
        if (v[i] > mx) mx = v[i];
    printf("%d",mx);
    return 0;
}
