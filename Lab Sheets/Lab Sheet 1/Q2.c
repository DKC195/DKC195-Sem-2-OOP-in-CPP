// Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char sth[34] = "idea without execution is worthless";
  char *ath = &sth;
  for (int i = 0; i < 35; i++)
  {
    if (*(ath + i) == 'c')
    {
      printf("Therefore the position is %d", i+1);
      exit(0);
    }
  }

  return 0;
}