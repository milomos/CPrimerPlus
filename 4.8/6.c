#include <stdio.h>
#include <float.h>
int main(void)
{
  double num = 1.0/3.0;
  float num1 = 1.0/3.0;
  printf("Double first:%.4f second:%.12f third:%.16f\n", num, num, num);
  printf("Float first:%.4f second:%.12f third:%.16f\n", num1, num1, num1);
  printf("flt_dig=%d\n", FLT_DIG);
  printf("dbl_dig=%d\n", DBL_DIG);
}
