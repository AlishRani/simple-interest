#include<stdio.h>
int main()
{
    float p;
    int t;
    int r;
    printf("enter the value of p\n"); 
    scanf("%f",&p);
    printf("enter the value of t\n);
    scanf("%d",&t);
    printf("enter the value of r\n);
    scanf("%d",&r);
    float s=p*t*r;
    printf("simple interest=%f\n",s);
    return 0;
} 
