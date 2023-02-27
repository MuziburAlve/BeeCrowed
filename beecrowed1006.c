

#include<stdio.h>
void print(double m)
{
    printf("MEDIA = %0.1lf\n",m);
}
double avarage(double a,double b,double c)
{
    double k=(a*2)+(b*3)+(c*5);
    return k/(2+3+5);
}
int main(void)
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double j=avarage(a,b,c);
    print(j);


}
