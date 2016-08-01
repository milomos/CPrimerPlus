#include <stdio.h>
int main(void)
{
  char ch;
  int count = 0;
  while((ch = getchar()) != '#')
  {
    if(ch == '.'){
      putchar('!');
      count++;}
    else if(ch == '!'){
        putchar('!');
        putchar('!');
        count++;}
    else
    putchar(ch);
  }
  printf("count:%d", count);
  return 0;
}
