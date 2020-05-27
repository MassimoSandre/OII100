#include <iostream>
#include <stdio.h>

#define MAXN 1000001

int lenstr(char *str) {
    int i = 0;
    while(str[i]) i++;
    return i;
}

int main()
{
    int pos[2]={1,3},tb[2],s = 0;
    char str[MAXN];
    scanf("%s",str);
    
    int l =lenstr(str);

    for(int i = 0; i < l; i++)  {
        if(str[i] == '0') {
            tb[0] = 1;
            tb[1] = 3;
        }
        else{
            tb[0] = (str[i]-49)%3;
            tb[1] = (str[i]-49)/3;
        }
        while(tb[0] > pos[0]) {
            s++;
            pos[0]++;
        }
        while(tb[0] < pos[0]) {
            s++;
            pos[0]--;
        }
        while(tb[1] > pos[1]) {
            s++;
            pos[1]++;
        }
        while(tb[1] < pos[1]) {
            s++;
            pos[1]--;
        }
        s++;
    }
    printf("%d",s);

    return 0;
}
