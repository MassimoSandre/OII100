#include <iostream>
#include <stdio.h>

int mx(int *v,int l) {
    int pos,i,mx = -1;
    for(i = 0; i<l;i++) {
        if(v[i] > mx) {
            mx = v[i];
            pos = i;
        }
    }
    return pos+1;
}


int main()
{
    int n,r[100],s;
    for(int i = 0; i < 100; i++) r[i] = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n+1;j++) {
            scanf("%d",&s);
            if(s != -1)r[i]+=s;
        }
        printf("%d\n",mx(r,n));
    }

    return 0;
}
