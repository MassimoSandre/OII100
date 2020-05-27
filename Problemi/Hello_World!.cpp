#include <iostream>
#include <string.h>


long long getWorld(char *str) {
    char *r = strstr(str,"world");
    if(r == NULL) return 0;
    return 1 + getWorld(r+5);
}

long long getHelloWorld(char *str, long long hw) {
    char *r = strstr(str,"hello");
    if(r == NULL) return 0;
    r[0] = '\0';
    long long h = getWorld(str);
    r[0] = 'h';
    hw -= h;
    return  hw + getHelloWorld(r+5,hw);
}

int main()
{
    char str[1000001];
    fflush(stdin);
    gets(str);
    std::cout << getHelloWorld(str,getWorld(str));
    return 0;
}