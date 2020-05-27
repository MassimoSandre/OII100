#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

bool chiedi(int X);

int indovina() {
    int ris = 0;
    chiedi(0);
    for(int i = 0; i < 31;i++) {
        ris += pow(2,i);
        if(!chiedi(ris)) ris -= pow(2,i);
    }
    return ris;
}