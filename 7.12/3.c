#include <stdio.h>

int main(void)
{
  int sum, num, i, n_odd, n_even;  //偶数even  奇数
  int even[n_even]; //偶数
  int odd[n_odd]; //奇数
  sum = num = n_odd = n_even = 0;
  while(scanf("%d", &i) == 1)
  {
    if(i == 0)
      break;
    if(i%2 == 0)
        {
          even[n_even] = i;
          n_even++;
          num += i;
        }
    if(!(i%2 == 0))
    {
      odd[n_odd] = i;
      n_odd++;
      sum += i;
    }
  }
  printf("偶数:");
  for(i = 0; i < n_even; i++)
  printf("%3d", even[i]);
  printf("\n个数:%2d, 平均值:%2d\n", n_even, num/n_even);
  printf("奇数:");
  for(i = 0; i < n_odd; i++)
  printf("%3d", odd[i]);
  printf("\n个数:%2d, 平均值:%2d\n", n_odd, sum/n_odd);
  printf("\nend.");
  return 0;
}
