/*
--------------------------------------------------
5.演算子
--------------------------------------------------
*/

#include <stdio.h>
int main(void)
{
  int a = 3;
  int b = 5;
  int c;
  
  c = a + b;
  printf("a + b = %d\n", c);

  c = a - b;
  printf("a - b = %d\n", c);

  c = a * b;
  printf("a * b = %d\n", c);

  c = b / a;
  printf("b / a  = %d\n", c);

  c = b % a;
  printf("b %% a  = %d\n", c);
  
/*
int型の値とint型の値の算術演算を行うとその結果はint型になり、double型の値とdouble型の値の算術演算を行うとその結果はdouble型になります。
int型の値とdouble型の値の算術演算を行うと、int型の値がdouble型の値に暗黙的に変換され、その結果はdouble型になります。
注意が必要なのは、int型の値をint型の値で割ったときです。
*/
  
  double d;
  d = 3 / 2;
  printf("1) d = %f\n", d);

  d = 3.0 / 2;
  printf("2) d = %f\n", d);

  return 0;
}
