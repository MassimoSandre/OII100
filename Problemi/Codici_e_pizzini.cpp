#include <iostream>
#include <stdio.h>
#include <string.h>

bool isAnagramma(char m[100][81],int a,int b);
void quick(char*,int);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char m[100][81];
    int v[100];

    int cd[100];
    int k;
    int n,i,j,h;
    scanf("%d",&n);
    for(i = 0; i < n; i++) {
        scanf("%s",&m[i]);
        v[i] = 0;
    }

    for(i = 0; i < n; i++) {
        k = 1;
        cd[0] = i;
        if(v[i] != 0) continue;
        for(j = 0; j < n; j++) {
            if(i != j && v[j] == 0) {
                if(isAnagramma(m,i,j)) {
                    cd[k++] = j;
                    v[i]++;
                    for(h = 1; h < k; h++) v[cd[h]] = v[i];
                   // printf("\n\n %d e\' anagramma di %d\n\n",i,j);
                }
            }
        }
    }

    for(i = 0; i < n; i++) {
        //printf("\n\n SAcelto il carattere %c numero di anagrammi %d\n\n",m[i][v[i]],v[i]);
        printf("%c",m[i][v[i]]);
    }

    return 0;
}

bool isAnagramma(char m[100][81],int a,int b) {
    char temp1[81],temp2[81];
    strcpy(temp1,m[a]);
    strcpy(temp2,m[b]);

//printf("\n\n s: %s s: %s\n\n",temp1,temp2);

    if(strlen(temp1) != strlen(temp2)) return false;

    quick(temp1,strlen(temp1));
    quick(temp2,strlen(temp2));
    bool ug = true;



    for(int i = 0; i < strlen(temp1); i++) {
        if(temp1[i] != temp2[i]) ug = false;
    }
    return ug;
}

void quick(char* v,int n) {
    char p = v[0];
    int pos = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] < p) {
            int l = v[i];
            for(int j = i; j > pos; j--) {
                v[j] = v[j-1];
            }
            v[pos++] = l;
        }
    }
    if(pos >= 2) {
        quick(v,pos);
    }
    if(n-pos-1 >= 2) {
        quick(v+pos+1,n-pos-1);
    }
}
