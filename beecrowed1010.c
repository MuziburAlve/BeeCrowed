#include<stdio.h>
double sum_of_price(double x,int x1,double y,int y1)
{
    return (x*x1)+(y*y1);
}
int main(void)
{
    int a,b,code1,code2;
    double code1_price,code2_price;
    scanf("%d",&code1);
    scanf("%d",&a);
    scanf("%lf",&code1_price);
    scanf("%d",&code2);
    scanf("%d",&b);
    scanf("%lf",&code2_price);
    double z=sum_of_price(code1_price,a,code2_price,b);
    printf("VALOR A PAGAR: R$ %0.2lf\n",z);

}
