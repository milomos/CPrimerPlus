#include <stdio.h>
void Temperatures(double fahrenheit);
int main(void)
{
  double fahrenheit;
  printf("输入华氏温度:");
  while(scanf("%lf", &fahrenheit) == 1)
  {
    Temperatures(fahrenheit);
    printf("继续输入华氏温度(输入q退出或者非数字值)");
  }
  printf("end.");
  return 0;
}
void Temperatures(double fahrenheit)
{
  const double j = 1.8;
  const double k = 32.0;
  const double l = 273.16;
  double Celsius = j * fahrenheit + k;
  double Kelvin = Celsius + l;
  printf("华氏度:%2.2lf 摄氏度:%2.2lf 绝对温度:%2.2lf\n", fahrenheit, Celsius, Kelvin);
}
