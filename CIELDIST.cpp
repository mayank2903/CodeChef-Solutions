#include <stdio.h>
int main()
{
    int t,d,ds,dt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&ds,&dt,&d);
        if(ds >= d+dt )
          printf("%d\n",ds-d-dt);
        else if(dt >= d + ds)
          printf("%d\n",dt-d-ds);
        else if(ds+dt<=d)
          printf("%d\n",d-ds-dt);
        else
          printf("0\n");
    }
    return 0;
}
