#include<stdio.h>
int main()
{
	int a,b,r;
	scanf("%d",&a);
	scanf("%d",&b);
	r=a%b;
	if(r==0){
	  printf("hcf is %d",b);
	}
	else{
			while(r!=0)	
     	{
		a=b;
		b=r;
		r=a%b;
		printf("hcf is %d",b);
    	}
	}

}
