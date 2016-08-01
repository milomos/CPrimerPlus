#include <stdio.h>

int isprime(int);
int main(void)
{
  int num, i;
  printf("Enter number:");
  scanf("%d", &num);
  printf("all the prime <= %d:\n", num);
  for(i = 2; i <= num; i++)
    if(isprime(i))
      printf("%d\t", i);
    printf("\n");
    return 0;
}
int isprime(int n)
{
  int div;
  for(div = 2; div * div <= n; div++)
    if(n % div == 0)
      return 0;
    return 1;
}
