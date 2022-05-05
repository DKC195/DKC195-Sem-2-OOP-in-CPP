/* Write a program to read name, rollno, address, and phone number of each student in your class using structure. 
Store the information in file so that you can recover the information later. While recovering the information from 
the file sort the information alphabetically according to the name. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
  char name[30];
  int roll;
  char address[50];
  int pno;
  char nxt;
};

int main()
{
  int n;
  FILE *fptr;
  fptr = fopen("students.txt", "w");

  printf("Enter The No. Of Student:\n");
  scanf("%d", &n);
  struct student std[n];

  if (fptr == NULL)
  {
    printf("Error");
    exit(1);
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      printf("Student No. %d.\n", i + 1);
      printf("Enter Name: \t\t");
      scanf("%s", std[i].name);
      printf("Enter Roll No.: \t");
      scanf("%d", &std[i].roll);
      printf("Enter Address: \t\t");
      scanf("%s", std[i].address);
      printf("Enter Phone No.: \t");
      scanf("%d", &std[i].pno);
      std[i].nxt = "\n";
      fwrite(&std[i], sizeof(std[i]), 1, fptr);
    }
  }
  fclose(fptr);
  
  fptr = fopen("students.txt", "r");
  struct student temp;

  for (int i = 0; i < n; i++)
  {
    fread(&std[i], sizeof(std[i]), 1, fptr);
    for (int j = 0; j < i; j++)
    {
      if (strcmp(std[i].name, std[j].name) < 0)
      {
        temp = std[j];
        std[j] = std[i];
        std[i] = temp;
      }
    }
  }
  printf("Name \tRoll No. \tAddress\t Phone No.\n");
  for (int i = 0; i < n; i++)
  {
    printf("%s\t%d\t\t%s\t%d\n", std[i].name, std[i].roll, std[i].address, std[i].pno);
  }
  fclose(fptr);
  return 0;
}