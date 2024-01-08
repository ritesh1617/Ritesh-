#include<stdio.h>
 main ()
{
	char name[30],address[30];
	int birthdate,age;
	
	printf("enter your Name=");
	scanf("%s",&name);
	
	printf("enter your Birthdate=");
	scanf("%d",&birthdate);
	
	printf("enter your Age=");
	scanf("%d",&age);
	
	printf("enter your Address=");
	scanf("%s",&address);
	
	printf( "your name= %s\n your birthdate= %d\n age= %d\n address= %s\n",name,birthdate,age,address);

	
}
