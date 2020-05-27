#include <iostream>
#include <stdio.h>

bool estintore(char m[1000][1000],int i,int j,int x, int y) {
    if(i >= y || j >= x || m[i][j] == '#') {
        return false;
    }
    if(m[i][j] ==64) {
        bool k;
        k = estintore(m,i+1,j,x,y);
        k = estintore(m,i,j+1,x,y);
        m[i][j] = '#';
        return true;
    }
    m[i][j] = '#';
    bool k = estintore(m,i+1,j,x,y), g  =estintore(m,i,j+1,x,y);

    if(k || g)
        return true;
    return false;

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char m[1000][1000];
    int x,y,i,j,nest=0;
    scanf("%d %d", &y,&x);

    for(i = 0; i < y; i++) {
        for(j = 0; j < x; j++) {
            scanf("%c",&m[i][j]);
            if(m[i][j] != '#' && m[i][j] != '@' && m[i][j] != '.') j--;
        }
    }
/*
    for(int k = 0; k < y; k++) {
        for(int h = 0; h < x; h++) {
            printf("%d",m[k][h]);
        }
        printf("\n");
    }
    printf("\n\n");*/


    for(i = 0; i < y; i++) {
        for(j = 0; j < x; j++) {
            if(m[i][j] == '.' || m[i][j] == 64) {
                if(!estintore(m,i,j,x,y)) nest++;
                /*for(int k = 0; k < y; k++) {
                    for(int h = 0; h < x; h++) {
                        printf("%c",m[k][h]);
                    }
                    printf("\n");
                }
                printf("\n\n");
*/
            }
        }
    }
    printf("%d",nest);
    return 0;
}
