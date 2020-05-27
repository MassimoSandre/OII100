#include <iostream>
#include <algorithm>
using namespace std;
/*
void quick(int *v, int n) {
    int p = v[0];
    int pos = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] < p) {
            int l = v[i];
            for(int j = i; j > pos; j--) {
                v[j] = v[j-1];
            }
            v[pos++] = l;
        }
    }
    if(pos >= 2) {
        quick(v,pos);
    }
    if(n-pos-1 >= 2) {
        quick(v+pos+1,n-pos-1);
    }
}*/

int main()
{
    int n,d,i,j,k,t,dmax,pos;
    scanf("%d %d",&n,&d);

    int v[n+2];

    /*for(i = 1; i < n+1;i++) {
        scanf("%d",&t);
        j = i-1;
        while(j >= 1 && v[j] > t) {
            v[j+1] = v[j];
            j--;
        }

        v[j+1] = t;
    }*/

    for(i = 1; i < n+1; i++) scanf("%d",&v[i]);
    sort(v+1,v+n+1);
    v[0] = -v[1];
    v[n+1] = d+(d-v[n]);

    /*for(i = 0; i < n+2; i++) printf("  %d  ",v[i]);
    system("PAUSE");*/


    dmax = -1;
    for(i = 1; i < n+2; i++) {
        if (dmax < (v[i]-v[i-1])/2) {
            dmax = (v[i]-v[i-1])/2;
            pos = v[i]-((v[i]-v[i-1])/2);
        }
    }

    printf("%d",pos);
    return 0;
}
