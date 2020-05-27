#include <iostream>
#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int lun,lenstr,i,j;

    char str[200000],v[10];
    for(i = 0; i< 10; i++) v[i] = ' ';
    scanf("%d %d %s",&lun,&lenstr,str);
    bool imp = false;

    for(i = 0,j = lenstr-1; i < lenstr && !imp;i++,j--) {
        if(str[i] >= 48 && str[i] < 58) {
            if(!isdigit(str[j])) {
                if(v[str[i]-48] == ' ' || v[str[i]-48] == str[j]) {
                    v[str[i]-48] = str[j];
                }
                else {
                    imp = true;
                }
            }
        }
    }


    for(i = 0; i < lun;i++) {
        if(v[i] == ' ') imp = true;
    }

    if(imp) printf("impossibile");
    else {
        for(i = 0; i < lun; i++) printf("%c",v[i]);
    }

    return 0;
}
