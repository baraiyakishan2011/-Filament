#include<stdio.h>
#include<string.h>

main()
{
	char password[20],email[20];
	
	printf("Enter Your E-mail = ");
	gets(email);
	
	printf("Enter Your Password = ");
	gets(password);
	
	if(strcmp(email,"kishanbaraiya123@gmail.com")==0)
	{
		printf("\n Correct E-mail");
	}
	else
	{
		printf("\n Incorrect E-mail");
	}
	if(strcmp(password,"kishan123@")==0)
	{
		printf("\n Correct Password");
	}
	else
	{
		printf("\n Incorrect Password");
	}
}