#include <iostream>
#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int v[2000],n;
    scanf("%d",&n);
    for(int i = 0; i < n*2;i++) scanf("%d",&v[i]);
    int mx=-1;
    for(int i = 0; i < n*2;i+=2)
        if ((v[i]+v[i+1]) > mx && (v[i]+v[i+1])%2 == 0) mx = v[i]+v[i+1];
    printf("%d",mx);
    return 0;
}
