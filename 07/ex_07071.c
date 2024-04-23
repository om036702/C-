/*
インクリメント・デクリメント演算子
*/
#include <stdio.h>

int main(void)
{
  int a = 3;
  int b = 5;
  int c;
  
  a++;
  printf("a++ : %d\n", a);

  b--;
  printf("b-- : %d\n", b);

  ++a;
  printf("++a : %d\n", a);

  --b;
  printf("--b : %d\n", b);

  a = 5;
  printf("++a + 20 : %d\n", ++a + 20 );
  printf("a = %d\n",a);

  b = 5;
  printf("b++ + 20 : %d\n", b++ + 20 );
  printf("b = %d\n",b);
  
  return 0;
}
