#include <stdio.h>
int main(void)
{
  char name[10];
  char name1[10];
  printf("请输入名字和姓氏:");
  scanf("%s%s", name, name1);
  printf("%s %s", name1, name);
  return 0;
}
