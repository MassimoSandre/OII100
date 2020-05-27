#include <iostream>

using namespace std;

int m[1000][1000];

int r,c;

/*void stampa() {
    for(int i = 0; i < r;i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}*/

void elimina(int x,int y) {
    m[x][y] = 0;
    //if(x == 0 || y == 0 || x == r-1 || y == c-1) return;


    if(x > 0) {
        if(m[x-1][y] == 1) {
            elimina(x-1,y);
        }
    }
    if(x < r-1) {
        if(m[x+1][y] == 1) {
            elimina(x+1,y);
        }
    }
    if(y > 0) {
        if(m[x][y-1] == 1) {
            elimina(x,y-1);
        }
    }
    if(y < c-1) {
        if(m[x][y+1] == 1) {
            elimina(x,y+1);
        }
    }
}

int main()
{
    cin >> r >> c;
    for(int i = 0; i < r;i++) {
        for(int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        if(m[i][0] == 1) elimina(i,0);
        if(m[i][c-1] == 1) elimina(i,c-1);
    }
    for(int i = 0; i < c; i++) {
        if(m[0][i] == 1) elimina(0,i);
        if(m[r-1][i] == 1) elimina(r-1,i);
    }

    //stampa();

    int island = 0;
    for(int i = 1; i < r-1;i++) {
        for(int j = 1; j < c-1; j++) {
            if(m[i][j] == 1) {
                elimina(i,j);
                island++;
                //stampa();
            }
        }
    }

    cout << island;
    return 0;
}
