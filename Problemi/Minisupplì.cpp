#include <iostream>
#include <stdio.h>

bool esiste(int i, int *v,int n) {
    if(i == 0) return true;
    else if(i < 0) return false;
    else {
        bool k;
        for(int j = 0; j < n; j++) {
            k = esiste(i-v[j], v,n);
            if(k) break;
        }
        if(k) return true;
        else return false;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n,v[10],i;

    scanf("%d",&n);
    for(i = 0; i < n; i++) scanf("%d",&v[i]);

    for(i = 99; i >= 0; i--) {
        if(!esiste(i,v,n)) break;

    }

    printf("%d",i);

    return 0;
}
