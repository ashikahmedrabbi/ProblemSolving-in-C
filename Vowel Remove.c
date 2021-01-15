#include <stdio.h>
#include <string.h>
int checkVowel(char);

int main()
{
  char string[100], remove[100];
  int i, j = 0;

  printf("Enter a string to delete vowels\n");
  gets(string);

  for (i = 0; string[i] != '\0'; i++) {
    if (checkVowel(string[i]) == 0) {    
      remove[j] = string[i];
      j++;
   }
  }

  remove[j] = '\0';

  strcpy(string, remove);  

  printf("String after deleting vowels: %s\n", string);

  return 0;
}

int checkVowel(char remove)
{
  if (remove == 'a' || remove == 'A' || remove == 'e' || remove == 'E' || remove == 'i' || remove == 'I' || remove =='o' || remove=='O' || remove == 'u' || remove == 'U')
    return 1;

  return 0;
}