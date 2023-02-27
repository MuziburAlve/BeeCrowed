#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(void)
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d eh o maior\n",max);
    return 0;

}