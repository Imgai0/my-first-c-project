#include<stdio.h>
#include<math.h>
int main()
{
    float r,p;
    int n;
    r=7e-2;
    n=10;
    p=pow(1+r,n);
    printf("10年后国民生产总值与现在相比的倍数为%.2f55\n",(p-1*100));
    return 0;
}