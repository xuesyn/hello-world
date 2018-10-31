#include<stdio.h>
int main()
{
    long a,b,c,d,e,f,q;
    double x,y;
    printf("please input a,b,c,d,e,f as follow:\n"); 
    scanf("%ld%ld%ld%ld%ld%ld",&a,&b,&c,&d,&e,&f);
    q=0;
    if (d*b-a*e!=0) 
    {
    y=(double)((double)(c*d-a*f)/(double)(d*b-a*e));
    x=(double)((double)(c*e-b*f)/(double)(e*a-b*d));
}
    else
    {q=1;
    if ((double)f-c*((double)d/(double)a)==0)
    printf("there are uncountable roots");
    else 
    printf("there is no root");
}
if (q==0)
{

	printf("x=%lf\n",x);
    printf("y=%lf",y);
    return 0;
}
}

