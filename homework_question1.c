//Ashley Cen (115796180)
#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int my_strlen(char str[]) 
{
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

int my_strcmp(char one[], char two[]) 
{
  int i = 0;
  int a = 0, b = 0;
  for (i = 0; i < (my_strlen(one)) || i < (my_strlen(two)); i++) 
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

int my_strncmp(char one[], char two[], int n) 
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

char *my_strcpy(char one[], char two[]) 
{
  char copy;
  int i = 0, j = 0;

  while (two[i] != '\0') 
  {
    one[i] = two[i];
    i++;
  }

  for (i = i; i < my_strlen(two); i++) 
  {
    one[i] = '\0';
  }

  return one;
}

char *my_strcat(char one[], char two[]) 
{
  int length = my_strlen(one);
  int i = 0;

  while (two[i] != '\0') 
  {
    one[length + i] = two[i];
    i++;
  }
  one[length + i] = '\0';

  return one;
}

char *my_reverse(char one[], char two[]) 
{
  int i = 0;
  int length = my_strlen(two);

  for (i = 0; i < my_strlen(two); i++) 
  {
    one[i] = two[length - 1];
    length--;
  }
  one[i] = '\0';
  return one;
}

int vowel(char letter) 
{
  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
      letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' ||
      letter == 'O' || letter == 'U') {
    return 1;
  } 
  else
  {
    return 0;
  }
}

char *ToPigLatin(char *word) 
{
  char way[] = {'w', 'a', 'y', '\0'};
  char ay[] = {'a', 'y', '\0'};
  int i = 0, j = 0;
  char con[MAX] = {'\0'}, vow[MAX] = {'\0'};
  char result[MAX] = {'\0'};

  // Check if consonant
  if (vowel(word[i]) == 0 || word[0] == 'y' || word[0] == 'Y') 
  {
    // Extract consonants
    while (vowel(word[i]) == 0) 
    {
      con[i] = word[i];
      i++;
    }

    // Extract vowels
    while (word[i] != '\0') 
    {
      vow[j] = word[i];
      i++;
      j++;
    }

    // Construct Pig Latin word when the word starts with consonant
    my_strcpy(result, vow);
    my_strcat(result, con);
    my_strcat(result, ay);
  } 
  else if (vowel(word[0]) == 1)
  {
    // Construct Pig Latin word when the word starts with a vowel
    my_strcpy(result, word);
    my_strcat(result, way);
  }
  
  result[my_strlen(result)] = '\0';
  my_strcpy(word, result);
  return word;
}

int main() 
{
  char inputs[5][MAX]; // Array to store five input words
  char result[MAX] = {'\0'};    // Result array for each word
  int i = 0, length;

  printf("Enter five words separated by spaces: ");
  scanf("%s %s %s %s %s", inputs[0], inputs[1], inputs[2], inputs[3],
        inputs[4]);

  // send each word to the topiglatin function and print its Pig Latin version
  for (i = 0; i < 5; i++)
    {
      ToPigLatin(inputs[i]);
      printf("%s ",inputs[i]); 
      
    }

  return 0;
}

