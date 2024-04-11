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


void match_removed (char one[], char two[])
{
  int len1 = my_strlen(one); 
  int len2 = my_strlen(two); 
  char result[MAX] = {'\0'};
  int i = 0, j = 0; 
  int checkSame;


    if (len2 >= len1) // when the length of string two is longer than string one
    {
      for (i = 0; i < len2; i++)
        checkSame = 0; 
        { 
          for (j = 0; j < len1; j++)
            {
              if (two[j] = one[i])
              {
                checkSame = 1; 
              }
            }
          
        }

      if (checkSame == 0)
      {
        printf("%c", one[i]); 
      }
    }
  else
  {
    for (i = 0; i < len1; i++)
      {
      checkSame = 0; 
      for (j = 0; j < len2; j++) 
      {
        if (one[j] == two[i])
        {
          checkSame = 1; 
        }
      }