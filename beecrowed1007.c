#include<stdio.h>
void print(int m)
{
    printf("DIFERENCA = %d\n",m);
}
int mathmatic(int a,int b,int c,int d)
{
    int k=((a*b)-(c*d));
    return k;
}
int main(void)
{

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int k=mathmatic(a,b,c,d);
    print(k);
    return 0;


}
