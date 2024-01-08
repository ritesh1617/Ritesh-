#include<stdio.h>
int main()
{
	float a,b,sum,sub,multiplication,division,modulo;
	int x,z;
	
	printf("enter value:");
	scanf("%f",&a);
	
	printf("enter value:");
	scanf("%f",&b);
	
	printf("enter value:");
	scanf("%d",&x);
	
	printf("enter value:");
	scanf("%d",&z);
	
	sum=a+b;
	sub=a-b;
	multiplication=a*b;
	division=a/b;
	modulo=x%z;
	
	printf("sum of numbers:%f\n",a+b);
	printf("sub of numbers:%f\n",a-b);
	printf("multiplication of numbers:%f\n",a*b);
	printf("division of numbers:%f\n",a/b);
	printf("modulo of numbers:%d\n",x%z);
	
	return 0;
}