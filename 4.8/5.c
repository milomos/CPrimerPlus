#include <stdio.h>
#include <string.h>
int main(void)
{
  char name[10], name1[10];
  int num, num1, width, width1;
  printf("请输入名字:");
  scanf("%s", name);
  printf("请输入姓氏:");
  scanf("%s", name1);
  num = strlen (name);
  num1 = strlen (name1);
  width = num;
  width1 = num1;
  printf("%s %s\n", name, name1);
  printf("%*d %*d", width, num, width1, num1);
  return 0;
}
