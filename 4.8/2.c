#include <stdio.h>
int main(void)
{
  char name[10];
  printf("输入名字:");
  scanf("%s", name);
  /*printf("%s", name);*/
  /*printf("%20s", name);*/
  printf("%-20s", name);
  return 0;
}
