#include <iostream>

using namespace std;

int ContaOperazioni(int N, int K, int* secchi) {
    int sopra=0,sotto=0,temp,ris;

    for(int i = 0; i < N; i++) {
        temp = secchi[i];
        if(temp > K) sopra+=temp-K;
        else sotto+=K-temp;
    }

    if(sotto > sopra) {
        ris = sopra +(sotto-sopra);
    }
    else {
        ris = sotto + (sopra-sotto);
    }

    return ris;
}