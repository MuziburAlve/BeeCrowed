
#include<stdio.h>
void print(double m)
{
    printf("MEDIA = %0.5lf\n",m);
}
double avarage(double a,double b)
{
    double k=(a*3.5)+(b*7.5);
    return k/(3.5+7.5);
}
int main(void)
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    double j=avarage(a,b);
    print(j);


}
