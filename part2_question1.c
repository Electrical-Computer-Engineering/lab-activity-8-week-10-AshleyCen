//Ashley Cen (115796180)
#include <stdio.h>
#include <stdlib.h>
#define MAX 32


int my_strlen (char str[])
{
	int i = 0; 
	while (str[i] != '\0')
	{
		i++; 
	}
	return i; 
}
int my_strcmp (char one[], char two[])
{
	int i = 0; 
	int a = 0, b = 0; 
	for (i= 0; i < (my_strlen(one)) || i < (my_strlen(two)); i++)
	{
		a = one[i] - '0'; 
		b = two[i] - '0'; 
		
		if (a != b)
		{
			return 0; 
		}
	}
	return 1; 
	
}

int my_strncmp (char one [], char two[], int n)
{
	int i = 0; 
	int a = 0, b = 0; 
	for (i = 0; i < n; i++)
	{
		a = one[i] - '0'; 
		b = two[i] - '0'; 
		
		if (a != b)
		{
			return 0; 
		}
	}
	return 1; 
}

char *my_strcpy (char one[], char two[])
{
	char copy; 
	int i = 0, j = 0; 
	
	while (one[i] != '\0'){
		two[i] = one [i]; 
	}
	
	for (j = i; j < my_strlen(two); j++)
	{
		two[j] = ' '; 
	}
	
	return two; 
}


char *my_reverse (char one[], char two[]) //unfinished
{
	int i = 0; 
	int length =  my_strlen(one);
}



int main ()
{
	char first [MAX] = {'m', 'a', 'g', 'n', 'e', 't', 'i', 'c', '\0' }; 
	char second [MAX] = {'m', 'n', 'g', 'n', 'e', 't', 'i', 'c', '\0' }; 


	//test my_strcmp ()
	if (my_strcmp (first, second) == 1)
	{
		printf("The strings are equal.\n");
    }
	else if (my_strcmp (first, second) == 0)
	{
		printf("The strings are not equal.\n"); 
	}
	
	//test my_strncmp()
	if (my_strncmp (first, second, 3) == 1)
	{
		printf("The first 3 characters are equal.\n");
    }
	else if (my_strncmp (first, second, 3) == 0)
	{
		printf("The first 3 characters are not equal.\n"); 
	}
	
	//testing my_strcat()
	
	
	

	
	

}



