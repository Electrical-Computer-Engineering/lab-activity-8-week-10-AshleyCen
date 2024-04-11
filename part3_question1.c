//Ashley Cen
#include <stdio.h>
#include <stdlib.h>
#define MAX 11

int my_strlen(char str[])
 {
  int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

void shift(char str[]) //exercise 1
{
  int length = 0;
  int i = 0;
  length = my_strlen (str);
  int track = length;
  str[length]= '\0';

  printf("%s\n",str);
  while (track != 0)
    {
      for(i = 0; i < length; i++)
       {
         str[i] = str[i + 1];
         printf("%c",str[i]);
       }
      printf("\n");
      track--;
    }

}


int main ()
{
  char str[MAX];
  printf("Enter a string: ");
  scanf("%s", str);
  shift(str);

  exit(0);

}

