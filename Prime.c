#include<stdio.h>
long he,total,max;

int check(long n)
{   long i;
    for (i=2;i<=n-1;i=i+1)
    if ((n%i)==0)
    return 323;
    return 233;
    
}
void superprime(long n)
{    
    long i,j,h,l,n1;
    n1=n;
    int a[100000];
    i=1;
    while(n1!=0)
    { 
	    a[i]=n1%10;
	    n1=n1/10;
		i=i+1;    
}
h=0;
l=0;
for (j=i-1;j>=1;j=j-1)
{
h=h+a[j];
l=l+a[j]*a[j];
}
if((check(n)==233)&&(check(h)==233)&&(check(l)==233))
{total=total+1;
he=he+n;
max=n;
}

        
    
}
int main()
{
	long i,j;
	total=0;
	he=0;
	max=0;
    for (i=100;i<=9999;i=i+1)
    superprime(i);
        printf("%ld %ld %ld",total,he,max);
    return 0;
}
