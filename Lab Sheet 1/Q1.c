/* Write a program to find the average expenditure of a company for each month of each year, each year and average over 
the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average. */
#include <stdio.h>

int main()
{
  int time, year = 2019;
  printf("Enter the no. of years: ");
  scanf("%d", &time);
  int exp[time][12], sum[time+1];

  for (int i = 0; i < time; i++)
  {
    printf("For the Year %d\n", year + i);
    for (int j = 0; j < 12; j++)
    {
      printf("For Month %1d, Enter the Expenditure: ", j + 1);
      scanf("%d", &exp[i][j]);
    }
  }

  sum[time+1] = 0;
  printf("Year\tM 01\tM 02\tM 03\tM 04\tM 05\tM 06\tM 07\tM 08\tM 09\tM 10\tM 11\tM 12\tTotal\tAverage\n");
  for (int i = 0; i < time; i++)
  {
    sum[i] = 0;
    printf("%d\t", year + i);
    for (int j = 0; j < 12; j++)
    {
      printf("%d\t", exp[i][j]);
      sum[i] = sum[i] + exp[i][j];
    }
    printf("%d\t%d\n", sum[i], sum[i] / 12);
    sum[time+1] = sum[time+1] + sum[i];
  }
  printf("Summary\t\t\t\t\t\t\t\t\t\t\t\t\t%d\t%d", sum[time+1], sum[time+1] / 12);

  return 0;
}
