#include <stdio.h>
#include <stdlib.h>
int main(void)
{
/*
	int 型の値を double 型へ変換をしたい場合があḂ
*/
	int a,b; 
	double c;

	a = 4;	
	b = 22;	
	c=b/a;  /* a, b 共に int 型なので、b/a の値は int 5  */
	        /* c は double型変数なので c の値は 5.0 */
	printf("%lf\n", c); 

	c = (double)b/a;   /*  キャスト演算子 ( ) に᷿ḁ b の値を double 型へ変換。*/
                       /*  22.0/4 の結果は 5.5。c の値は 5.5。  */
	printf("%lf\n", c);
/*
明示的な型変換のことをキャスト cast と言い、キャスト演算子を用いる
( 型 ) 式   式の値を型としての値に変換
*/

}
