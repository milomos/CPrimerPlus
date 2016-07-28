#include <stdio.h>

int main(void)
{
  int lower, upper, sum, count;
  sum = 0;
  printf("Enter lower and upper integer limits:");
  scanf("%d%d", &lower, &upper);
  while(!(lower == upper))
    {
      for(count = lower; count <= upper; count++)
        sum += count * count;
      printf("The sums of the squares from %3d to %3d is %3d\n", lower * lower, upper * upper, sum);
      printf("Enter next set of limits:");
      scanf("%d%d", &lower, &upper);
      sum = 0;
    }
    printf("done\n");
    return 0;
}
