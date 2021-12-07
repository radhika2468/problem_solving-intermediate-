#include <assert.h>
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
    int i,j;
    int num; int min=0; int max=0; int k=0; int l=0;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<num;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            k++;
        }
        if(max<arr[i])
        {
            max=arr[i];
            l++;
        }
    }
    printf("%d",l);
    printf(" %d",k);
    return 0;
}
