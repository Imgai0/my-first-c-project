#include<stdio.h>
#include<math.h>
int main()
{
    double a,n1,r1,n2,r2,p1,p2,r3,p3,p4;
    a=1000;
    n1=2,r1=2.1e-2,n2=3,r2=2.75e-2;
    p1=a*(1+r1*n1);
    p2=p1*(1+r2*n2);
    p3=a*(1+r2*n2);
    p4=p3*(1+r1*n1);
    double r5,p5,n5,r6,p6,n6;
    r5=1.5e-2,n5=5,r6=0.35e-2,n6=20;
    p5=a*pow(1+r5,n5);
    p6=a*pow(1+r6/4,n6);
    printf("2年加3年，3年加2年，5次1年期，活期分别是%.2f\n%.2f\n%.2f\n%.2f\n",p2,p4,p5,p6);
    return 0;
}