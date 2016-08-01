#include <stdio.h>
int main(void)
{
  int n_chars, n_space, n_line;
  n_chars = n_space = n_line = 0;
  char ch;
  printf("输入(#结束):");
  while((ch = getchar()) != '#')
  {
    n_chars++;
    if(ch == ' ')
      n_space++;
    if(ch == '\n')
      n_line++;
  }
  printf("空格数目:%d, 换行数目:%d, 其他字符:%d", n_space, n_line, n_chars);
  return 0;
}
