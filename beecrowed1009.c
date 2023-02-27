#include<stdio.h>
double solved(double a,double b)
{
    double j=(b*0.15);
    return j+a;

}
int main(void)
{
    char s[1000];
    scanf("%s",s);
    double a,b;
    scanf("%lf %lf",&a,&b);
    double k=solved(a,b);
    printf("TOTAL = R$ %0.2lf\n",k);
    return 0;

}
