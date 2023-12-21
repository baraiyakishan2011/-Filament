#include <stdio.h>
#include <string.h>
 
int main()
{

 	char a[100];
 	int i,len,c;
 	c=0;
 	
 	printf("Enter The String = ");
 	gets(a);
 	
 	len = strlen(a);
 	
 	for(i=0;i<len;i++)
 	{
 		if(a[i]!=a[len-i-1])
		{	
 		  c = 1;
		}
	}
	
	if(c==0)
	{
		printf("%s is palindrome",a);
	}
	else
	{
		printf("%s is not palindrome",a);
	}
}