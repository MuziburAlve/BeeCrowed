#include<stdio.h>
void print(int a,double k)
{

    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n",a,k);
}
double math(int x,double y)
{
    double j=x*y;
    return j;
}
int main(void)
{

    int a,b;
    double c;
    scanf("%d %d %lf",&a,&b,&c);
    double k=math(b,c);
    print(a,k);


}
