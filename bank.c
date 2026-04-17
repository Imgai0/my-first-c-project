#include<stdio.h>
int main()
{
    int n,a=1000;
    double r,p;
    r=3e-2;
    n=5;
    p=a*(1+n*r);
    printf("一次存5年获得的利息:%.2f 元\n",p);
    return 0;
}