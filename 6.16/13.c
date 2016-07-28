#include <stdio.h>

int main(void)
{
  double a[8];
  double b[8];
  int count, i, j;
  printf("输入:");
  for(count = 0; count < 8; count++)
    scanf("%lf", &a[count]);
  for(i = 0; i < 8; i++)
  {
    for(j = 0; j <= i; j++)
      b[i] += a[j];
  }
  for(count = 0; count < 8; count++)
    printf("%4.1lf", a[count]);
      printf("\n");
  for(count = 0; count < 8; count++)
        printf("%5.1lf", b[count]);
          printf("\n");
  return 0;
}
