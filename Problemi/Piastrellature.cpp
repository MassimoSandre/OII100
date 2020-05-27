#include <bits/stdc++.h>

using namespace std;

void stampa(vector<int>& v) {
    int i=0;
    while(v[i]) {
        if(v[i]==1) {
            cout << "[O]";
        }
        else if(v[i]==2) {
            cout << "[OOOO]";
        }
        i++;
    }
    cout << "\n";
}

void permutazioni(int n,int i, vector<int> pr) {
    if(n == 0) {
        stampa(pr);
        return;
    }
    if(n == 1) {
        pr[i] = 1;
        permutazioni(n-1,i+1,pr);
    }
    else {
        pr[i] = 1;
        permutazioni(n-1,i+1,pr);
        pr[i] = 2;
        permutazioni(n-2,i+1,pr);
    }
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<int> v(30,0);
    permutazioni(n,0,v);
    return 0;
}
