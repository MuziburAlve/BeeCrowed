#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,pi=3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);
    double T=(0.5*a*c);
    double r=(pi*pow(c,2));
    double Tra=(0.5*(a+b)*c);
    double squre=(b*b);
    double retra=(a*b);
    printf("TRIANGULO: %.3lf\n",T);
    printf("CIRCULO: %.3lf\n",r);
    printf("TRAPEZIO: %.3lf\n",Tra);
    printf("QUADRADO: %.3lf\n",squre);
    printf("RETANGULO: %.3lf\n",retra);
    return 0;

}
