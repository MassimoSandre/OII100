#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    string str(n+1,' ');
    str[n] = '\0';
    int temp;
    for(int i = 0; i < n;i++) {
        cin >> temp;
        if(temp == 0) {
            str[i] = '0';
        }
        else str[i] = '1';
    }

    bool trov = false;
    int ris = 1;
    for(int i = 1; i <= n/2&&!trov;i++){
        if(n % i != 0) continue;
        int j=0;
        trov = true;
        while(j < n-i&&trov) {
            if(str.substr(j,i) != str.substr(j+i,i)) trov = false;
            j+=i;
        }
        if(trov) ris = i;
    }
    if(!trov) cout << "2";
    else {
        for(int i = 0;  i < ris;i++) {
            if(i < ris-1)cout << str[i] << " ";
            else cout << str[i];
        }
    }
    return 0;
}
