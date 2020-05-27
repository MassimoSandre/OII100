#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    vector<pair<int,string>> com(n);
    string att;
    int a=0,b=0,ab=0;
    for(int i = 0; i < n;i++) {
        cin >> com[i].first;
    }
    for(int i = 0; i < n;i++) {
        cin >> com[i].second;
    }
    for(int i = 0; i < m;i++) {
        cin >> att;
        if(att == "L10")a++;
        else if(att=="L16")b++;
        else ab++;
    }
    sort(com.begin(),com.end(),greater<pair<int,string>>());

    int i = 0;
    int ris =0;
    while(i < n && a > 0) {
        if(com[i].second == "L10") {
            a--;
            ris+=com[i].first;

            com[i].first = -1;

        }
        i++;
    }
    i = 0;
    while(i < n && b > 0) {
        if(com[i].second == "L16") {
            b--;
            ris+=com[i].first;

            com[i].first = -1;
        }
        i++;
    }
    i = 0;
    while(i < n && ab > 0) {
        if(com[i].first != -1) {
            ab--;

            ris+=com[i].first;
        }
        i++;
    }
    cout << ris;
    return 0;
}
