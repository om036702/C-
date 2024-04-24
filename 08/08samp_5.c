#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b; /*ここはコメント．C言語のとき宣言は最初*/

	a = 6;	/*ここはコメント．aに6を代入*/
	b = 5;	/*ここはコメント．bに5を代入*/

	printf("a×b=%d\n",a*b);
	printf("a÷b=%d\n",a/b);
  printf("a÷b=%f\n",a/b);
  printf("a÷b=%f\n",(double)a/b);
	printf("a%%b=%d\n",a%b); /*ここはコメント．半角%を表示させるには，%%と打つ*/
	printf("a^2 + ab =%d\n",a*a+a*b);
}
