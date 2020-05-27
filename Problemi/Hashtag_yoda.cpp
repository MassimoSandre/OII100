#include <bits/stdc++.h>

using namespace std;

int main() {
    FILE *pfi = fopen("input.txt","r");// *pfo = fopen("output.txt","w");
    freopen("output.txt","w",stdout);
    char str[100002];
    int i = 0;
    do {
        fscanf(pfi,"%c",&str[i]);
        if(str[i]=='\n'||str[i]=='\0') {
            str[i]='\0';
            break;
        }
        else i++;
    }while(!feof(pfi));
    //printf("!%s!\n",str);
    i-=1;
    for(; i >= 0; i--) {
        if(i == 0) {
            int j = 0;
            while(str[j]!=' '&&str[j]!='\0') {
                cout << str[j];
                j++;
            }
        }
        else if(str[i-1]==' ') {
            int j = i;
            while(str[j]!=' '&&str[j]!='\0') {
                cout << str[j];
                j++;
            }
            cout << " ";
        }
    }

    return 0;
}
