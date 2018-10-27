#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,c;
    double x1,x2;
    printf("the equality exist as ax^2+bx+c=0 then please input a,b,c as follow:\n");
    scanf("%ld%ld%ld",&a,&b,&c);
    if (b*b<4*a*c)
    printf("there does not exist any root.");
    else
    { x1=(double)(((double)(-1)*b+sqrt((double)(b*b-4*a*c)))/(double)(2*a));
      x2=(double)(((double)(-1)*b-sqrt((double)(b*b-4*a*c)))/(double)(2*a));
    }
    if (b*b==4*a*c)
    printf("x1=x2=%lf",x1);
    if (b*b>4*a*c)
    printf("x1=%lf\nx2=%lf",x1,x2);
    return 0;
}

