// Store and retrieve the name of the students and obtained marks in C programming in 1st semester using structure.
#include <stdio.h>

int main()
{
  int n;
  printf("Enter the no. of studemts: ");
  scanf("%d", &n);
  struct exam
  {
    char name[20];
    int c_prog;
  } marks[n];

  for (int i = 0; i < n; i++)
  {
    printf("Student No. %d\n", i + 1);
    printf("Enter Name: ");
    scanf("%s", marks[i].name);
    printf("Enter the Marks: ");
    scanf("%d", &marks[i].c_prog);
  }
  printf("Name \tMarks Obtained\n");
  for (int i = 0; i < n; i++)
  {
    printf("%s\t", marks[i].name);
    printf("%d\n", marks[i].c_prog);
  }
  return 0;
}