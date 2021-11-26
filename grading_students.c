#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]>=38)
        {
            if(arr[i]%5==3)
            {
                arr[i]=arr[i]+2;
            }
            if(arr[i]%5==4)
            {
                arr[i]=arr[i]+1;
            }
        }
        
    }
    for(i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
