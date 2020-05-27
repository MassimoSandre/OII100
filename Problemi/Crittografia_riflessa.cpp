#include <iostream>
#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    long n,fn,temp;

    std::cin >> n;

    temp = n;
    fn = 0;
    while (temp > 0) {
        fn*=10;
        fn+= temp%10;
        temp/=10;
    }
    n+=fn;
    std::cout << n;
    return 0;
}
