#include <iostream>


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
    
    int g,p,ris = 0,i=1;
    scanf("%d %d",&g,&p);

    while(g >= i+p-1) {
        ris+=i;
        g-=i+p-1;
        i++;
    }
    ris+=g;
    printf("%d",ris);
    
    fclose(stdin);
    fclose(stdout);
    return 0;
}
