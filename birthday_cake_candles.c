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
    int num,i,count=0;int max=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<num;i++)
    {
        if (arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<num;i++)
    {
        if(max==arr[i])
        count++;
    }
    printf("%d",count);
}
