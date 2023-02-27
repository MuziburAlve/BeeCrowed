#include<stdio.h>
#include<math.h>
double power(int n)
{
    return pow(n,3);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    double j=power(n);
    double  k=(4/3.0)*3.14159*j;
    printf("VOLUME = %0.3lf\n",k);
}
