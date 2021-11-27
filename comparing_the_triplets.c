#include <math.h>
#include <stdio.h>
int main()
{
    int a[3];
    int b[3];
    int as=0; int bs=0; int i;
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    scanf("%d",&a[3]);
    scanf("%d",&b[1]);
    scanf("%d",&b[2]);
    scanf("%d",&b[3]);
    for(i=1;i<=3;i++)
{
    
 if(a[i]>b[i])
    {
        as++;
    }
    if(a[i]<b[i])
    {
        bs++;
    }
}
printf( "%d %d", as, bs);
return 0;
}

   
