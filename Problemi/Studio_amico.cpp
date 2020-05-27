#include <iostream>
#include <stdlib.h>



void countSort(int N, int *freq, int *v) {
    for(int i = 1;i < 11; i++) {
        freq[i] = 0;
    }
    for(int i = 0; i < N; i++) {
        freq[v[i]]++;
    }
}

bool associabili(int N, int* v1, int* v2) {
    int freq1[11],freq2[11];
    countSort(N,freq1,v1);
    countSort(N,freq2,v2);
    int i,j;
    for( i = 1;i < 11; i++) {
        j = i+1;
        while(freq1[i] > 0) {
            while(freq2[j]==0&&j<11)j++;
            if(j == 11) return false;
            else {
                freq2[j]--;
                freq1[i]--;
            }
        }
    }

    return true;
}