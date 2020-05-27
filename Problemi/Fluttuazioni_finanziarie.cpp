#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    FILE *pfi,*pfo;
    pfi = fopen("input.txt","r");
    pfo = fopen("output.txt", "w");
    int v[100],n;
    int m = INT_MIN;
    fscanf(pfi,"%d",&n);

    for(int i = 0; i < n; i++) {
        fscanf(pfi,"%d",&v[i]);
    }
    for(int i = 0; i < n-1; i++) {
        if(v[i] > v[i+1]) {
            if(v[i]-v[i+1] > m) {
                m = v[i]-v[i+1];
            }
        }
        else {
            if(v[i+1]-v[i] > m) {
                m = v[i+1]-v[i];
            }
        }
    }
    fprintf(pfo,"%d",m);
    fclose(pfi);
    fclose(pfo);
    return 0;
}
