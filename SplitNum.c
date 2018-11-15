#include<stdio.h>
int main()
{
	long i,j,n;
    scanf("%ld",&n);
    int a[100000];
    i=1;
    while(n!=0)
    { 
	    a[i]=n%10;
	    n=n/10;
		i=i+1;    
}
    for (j=i-1;j>=1;j=j-1)
        printf("%ld ",a[j]);
    return 0;
}

