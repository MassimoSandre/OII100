#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n),p(n),c(n);
    for(int i = 0; i < n;i++) {
        cin >>v[i];
    }
    for(int i = 0; i < n;i++) {
        cin >>p[i];
    }
    for(int i = 0; i < n;i++) {
        cin >>c[i];
    }

    unsigned long long g = 0,b = 0,so=0;
    for(int i = 0; i < n;i++) {
        if(v[i]-p[i]>c[i]) {
            if(so < p[i]){
                b+=p[i]-so;
                so =0;
            }
            else {
                so-=p[i];
            }
            g+=v[i];


            //so += v[i]-p[i];

        }
        else {
            so+=c[i];

            //b-=c[i];
            //g+=c[i];
        }
    }

    cout << g+(so-b) << " " << b;
    return 0;
}
