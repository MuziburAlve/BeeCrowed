#include<stdio.h>
int print(int m)
{
    printf("PROD = %d\n",m);
}
int sum(int a,int b)
{
    return a*b;
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int j=sum(a,b);
    print(j);


}
