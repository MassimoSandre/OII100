#include <iostream>
#include <stdio.h>

#define MAXN 1000000

int main()
{
    int n,i,j,k;
    char v[MAXN];
    bool f1,f2;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%c",&v[i]);
        if(v[i] != 'n' && v[i] != 'N' && v[i] != 'I' && v[i] != 'i') i--;
    }
    int c = 0;
    k = 0;
    f1 = false;
    f2 = false;
    for(i = 0; i < n; i++) {
        if(v[i] == 'I' || v[i] == 'N') {
            if(!f1) {
                f1 = true;
                c++;
            }
        }
        else {
            f1 = false;
        }
        if(v[i] == 'I' || v[i] == 'i') {
            if(!f2) {
                f2 = true;
                c++;
            }
        }
        else {
            f2 = false;
        }
    }
    
    printf("%d",c);

    return 0;
}
