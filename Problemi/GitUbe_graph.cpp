#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int d,n,temp;
    cin >> d >> n;
    vector<int> v(d,0);
    for(int i = 0; i < n;i++) {
        cin >> temp;
        v[temp-1]++;
    }
    for(int j = 0; j < 7;j++) {
        for(int i = j; i < d;i+=7) {
            if(v[i]<10) {
                cout << ".";
            }
            else if(v[i]<20){
                cout << "o";
            }
            else {
                cout << "O";
            }
        }
        cout << "\n";
    }
    return 0;
}
