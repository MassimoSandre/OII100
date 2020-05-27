#include <iostream>
#include <stdio.h>
bool visita(int N, int A[]) {
    int g = 0, e = N-1,pg=0,pe=0;

    while (g != e) {
        if(pg > pe)
            pe += A[e--];
        else
            pg += A[g++];
    }
    return pg == pe;
}