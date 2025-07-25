#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 / c;
//	printf("%d\n", r);
//
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr));
//	return 0;
 /*int Max(int x,int y)
{	
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0
		;
	scanf("%d%d",&a,&b);
	int r = Max(a,b);
	printf("%d\n",r);*/
//	return 0;
//}
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x == 0)
		y = 1;
	else if (x < 0)
		y = -1;
	else y = 1;
	printf("%d\n", y);



	return 0;

}
