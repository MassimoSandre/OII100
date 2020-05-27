#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);

    int l=1;

    while(n!= 1) {
        if(n%2==0) {
            n/=2;
        }
        else {
            n=n*3+1;
        }
        l++;
    }

    printf("%d",l);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
