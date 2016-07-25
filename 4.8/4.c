#include <stdio.h>
int main(void)
{
  char name[10];
  float feet;
  printf("请输入名字和身高:");
  scanf("%s %f", name, &feet);
  printf("%s, you are %.3f feet tall\n", name, feet);
  return 0;
}
