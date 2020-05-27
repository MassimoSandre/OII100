#include <iostream>
#include <stdio.h>

#define MAXN 1000000


int numnope(int *v,int n,int p) {
    if(v[0] == 0 && v[1]>1 && n!=0) {
        v[0]++;
        v[1]--;
        p--;
    }

    for(int i = 1; i < n-1; i++) {
        if(v[i] == 0) {
            if(v[i-1]>1) {
                v[i-1]--;
                v[i]++;
                p--;
            }
            else {
                if(v[i+1]>1) {
                    v[i+1]--;
                    v[i++]++;
                    p--;
                }
            }
        }

    }

    if(v[n-1] == 0 && v[n-2]>1 && n!= 0) {
        v[n-1]++;
        v[n-2]--;
        p--;
    }
    return p;
}

int main()
{
    int v[MAXN],n,i,np = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if(v[i] == 0) np++;
    }

    np = numnope(v,n,np);

    printf("%d",np);
    return 0;
}
