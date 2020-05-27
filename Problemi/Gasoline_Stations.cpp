#include <iostream>
#include <stdio.h>

// constraints
#define MAXN 1000000


int main() {
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int N, i,p,sel;
    long long s;
    int P[MAXN];
    int G[MAXN];
    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &P[i]);
    for (i = 0; i < N; i++) scanf("%d", &G[i]);

    s = 0;
    s += P[0]*G[0];

    p = 0;
    sel = 0;
    for(i = 1; i < N; i++) {
        if(P[i] >= P[sel]) {
            s+= P[sel]*G[i];
        }
        else {
            sel = i;
            s+= P[sel] * G[i];
        }
    }

    std::cout << s;

    return 0;
}
