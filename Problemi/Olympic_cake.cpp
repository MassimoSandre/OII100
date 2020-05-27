#include <iostream>

int main()
{
    int n;
    scanf("%d",&n);
    std::cout << (long long)((n/2)+1)*((n-(n/2))+1);

    return 0;
}
