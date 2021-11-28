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
    int sum1=0;
    int sum2=0;
    int diff=0;
    scanf("%d",&num);
    int arr[num][num];
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(i==j)
            sum1=sum1+arr[i][j];
        }
    }
    for(i=0;i<num;i++)
    {
        sum2=sum2+arr[i][num-1-i];
    }
    if(sum1>sum2)
diff=sum1-sum2;
else 
diff=sum2-sum1;
printf("%d",diff);
return 0;
    
    
    
}
