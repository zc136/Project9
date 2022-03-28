#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	 int num = 10;
	int n = 100;
	int* p = &num;
	*p = 20;
	p = &n;
	printf("%d\n", num);
	return 0;
}
