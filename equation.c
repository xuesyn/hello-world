#include<stdio.h>
int main()
{
    long a,b,c,d,e,f;
    double x,y;
    printf("please input a,b,c,d,e,f as follow:\n"); 
    scanf("%ld%ld%ld%ld%ld%ld",&a,&b,&c,&d,&e,&f);
    y=(double)((double)(c*d-a*f)/(double)(d*b-a*e));
    x=(double)((double)(c*e-b*f)/(double)(e*a-b*d));
    printf("x=%lf\n",x);
    printf("y=%lf",y);
    return 0;
}

