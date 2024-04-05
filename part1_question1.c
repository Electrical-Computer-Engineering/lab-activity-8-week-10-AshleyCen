
//Ashley Cen (115796180)
#include <stdio.h>
#include <stdlib.h>

int my_isalpha (char ch )  
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return 1; 
	}
	else 
	{
		return 0; 
	}
	
}

int my_isdigit (char ch) // return 1 if parameter is digit, 0 for other wise 
{
	ch = ch - '0'; 
	if (ch >= 0 && ch <= 9)
	{
		return 1; 
	}
	else
	{
		return 0; 
	}
	
}

int my_is_upper (char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (1); 
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return (0); 
	}
}

char my_to_upper (char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
	   ch = ch - 32; 
	   return (ch); 
	}
	else
	{
		return (ch); 
	}
}


int main ()
{
	char c; 
	printf("Enter a character: \n");
	scanf("%c", &c); 
	getchar(); 
	
	if (my_isalpha(c) == 1)
	{
		printf("This is a letter.\n"); 
		
		if (my_is_upper (c) == 1)
		{
			printf("This is an uppercase letter.\n");
		}
		else if (my_is_upper(c) == 0)
		{
			printf("This is not an uppercase letter. \n");
			c = my_to_upper (c); 
			printf ("Uppercase Version: %c \n", c); 
			
		}
	
	}
	
	if (my_isdigit (c) == 1)
	{
		printf("This is a digit.\n"); 
	}
	else
	{
		printf("This is not a digit.\n"); 
	}
	
	
	
	
}














