#include<stdio.h>
int main()
{
	int n,i,m=1;
	printf("enter a number : ");
	scanf("%d",&n);
	printf("factorial =");
	for(i=n;i>=1;i--)
	{
		m=m*i;
		
		printf("%d*",i);
	}	
	printf("\b =%d",m);
}
