#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

typedef struct {
    int mon;
    int pao;
} tMoz;

bool ordMon(tMoz t1, tMoz t2) {
    return (float)t1.mon-t1.pao > (float)t2.mon-t2.pao;
}

long long solve(int N, int* M, int* P) {
    tMoz v[N];
    for(int i = 0; i < N;i++) {
        v[i].mon = M[i];
        v[i].pao = P[i];
    }
    //sort(v,v+N,ordMon);
    nth_element(v,v+(N/2),v+N,ordMon);


    long long r=0;
    for(int i = 0; i <N/2;i++) {
        r += v[i].mon;
    }
    for(int i = N/2; i < N;i++) {
        r += v[i].pao;
    }
    return r;
}
