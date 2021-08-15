#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year =1000; year <= 2000; year++)
//	{
//		if (1== is_leap_year(year))
//		{
//			printf("  %d", year);
//		}
//	}
//	
//	return 0;
//}
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//		left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//		right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字!\n");
//	}
//	else
//	{
//		printf("找到了，下标是:  %d\n", ret);
//	}
//	return 0;
//}
//void Add(int* n)
//{
//	(*n)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("  %d\n", num);
//	Add(&num);
//	printf("  %d\n", num);
//	Add(&num);
//	printf("  %d\n", num);
//	return 0;
//}