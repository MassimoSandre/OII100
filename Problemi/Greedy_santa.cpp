#include <bits/stdc++.h>

using namespace std;



int grd(int *v,int n,int i,int b,int s, vector<vector<int>>& memo) {
    if(memo[i][s] == -1) {
        if(s + v[i] >= b) memo[i][s] = s + v[i];
        else memo[i][s]=min(grd(v,n,i+1,b,s+v[i],memo), grd(v,n,i+1,b,s,memo));
    }
    return  memo[i][s];

}

int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int v[100],n,b,i,s=0;

    vector<vector<int>> memo(101,vector<int>(10001,-1));

    scanf("%d %d",&n,&b);

    for(i = 0; i < n; i++) {
        scanf("%d",&v[i]);
        s+=v[i];
    }

    if(s <= b) printf("%d",s);
    else printf("%d",grd(v,n,0,b,0,memo));


    return 0;
}
