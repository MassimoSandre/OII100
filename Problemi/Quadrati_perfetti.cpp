#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    long long a,b;
    std::cin >> a;
    std::cin >> b;
    long long ris = (long long)sqrtl(b);
    ris -= (long long)sqrtl(a);

    if(pow((long long)sqrtl(a),2) >= a)ris++;


    std::cout << ris;
    return 0;
}
