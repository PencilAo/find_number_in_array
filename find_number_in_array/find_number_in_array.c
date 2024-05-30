#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

////结构体写法
//struct coor
//{
//	int x;
//	int y;
//};
//struct coor find_number(int arr[3][3], int r, int c, int n)  
//{
//	int x = 0;
//	int y = c - 1;
//	struct coor p = { -1,-1 };
//	while (x <= r-1 && y >= 0)
//	{
//		if (arr[x][y] < n)
//		{
//			x++;
//		}
//		else if (arr[x][y] > n)
//		{
//			y--;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int row, col;
//	row = 3;
//	col = 3;
//	int n;
//	scanf("%d", &n);                     //要找的数
//	struct coor tmp = find_number(arr, row, col, n);
//	printf("%d %d", tmp.x, tmp.y);
//	return 0;
//}


//返回型参数
int find_number(int arr[3][3], int* r, int* c, int n)  
{
	int x = 0;
	int y = *c - 1;
	while (x <= *r - 1 && y >= 0)
	{
		if (arr[x][y] < n)
		{
			x++;
		}
		else if (arr[x][y] > n)
		{
			y--;
		}
		else
		{
			*r = x;
			*c = y;
			return 1;
		}
	}
	*r = -1;
	*c = -1;
	return 0;
}
int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int row, col;
	row = 3;
	col = 3;
	int n;
	scanf("%d", &n);                     //要找的数
	int tmp = find_number(arr,&row, &col, n);
	printf("%d %d", row, col);
	return 0;
}