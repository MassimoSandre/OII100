#include <bits/stdc++.h>

using namespace std;

void stampa(vector<int>& v) {
    int i = 0;
    while(v[i]!=0) {
        cout << v[i++];
        if(v[i]!=0) cout << " ";
    }
    cout << "\n";
}

void genera(int n, int lim,int index, vector<int>& pe) {
    if (n==0) {
        pe[index]=0;
        stampa(pe);
        return;
    }
    for(int i = 1; i <= n&&i <= lim;i++) {
        pe[index] = i;
        genera(n-i,i,index+1,pe);
    }
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<int> v(60);
    genera(n,n,0,v);
    return 0;
}
