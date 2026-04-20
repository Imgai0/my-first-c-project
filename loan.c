#include<stdio.h>
#include<math.h>
int main()
{
    double d,p,r,a,b,m;
    d=300000,p=6000,r=1e-2;
    a=log10(p/(p-d*r));
    b=log10(1+r);
    m=a/b;
    printf("还清需要月数为%.1f\n",m);
    return 0;
}