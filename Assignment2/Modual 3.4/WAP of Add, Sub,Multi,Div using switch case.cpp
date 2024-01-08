#include<stdio.h>
main()
{
char choice;
float a,b,ans=0;
printf("enter number ");
printf("\n1 for : +\n2 for : - \n3 for : * \n4 for : / \nEnter your choice : ");
scanf("%c",&choice);

switch(choice)
		{
			case '1':
				{
					printf("Enter 2 number:");
					scanf("%f%f",&a,&b);
					ans=a+b;
					printf("Addition=%0.2f",ans);
					break;
				}

			case '2':
				{
					printf("Enter 2 number:");
					scanf("%f%f",&a,&b);
					ans=a-b;
					printf("Subtraction=%0.2f",ans);
					break;
				}

			case '3':
				{
					printf("Enter 2 number:");
					scanf("%f%f",&a,&b);
					ans=a*b;
					printf("Multiplication=%0.2f",ans);
					break;
				}

			case '4':
				{
				printf("Enter 1 number:");
				scanf("%f%f",&a,&b);
				ans=a/b;
				printf("Division=%0.2f",ans);
				break;
				}
		}
}
