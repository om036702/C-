#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i;
	srand((unsigned int)time(NULL));
	for (i = 0; i < 10; i++)
	{
        // 最小値:0 取得個数:10個
		printf("%d\n", 0 + rand() % 10);
	}
	return 0;
}
