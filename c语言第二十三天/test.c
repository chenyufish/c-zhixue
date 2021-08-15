#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
//int main()
//{
//	char arr1[] = { 1,2,3,4};
//	printf("%d", sizeof(arr1));
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	int i = 0;
//	for (i = 0; i <= 6; i++)
//	{
//		printf("%c \n", arr1[i]);
//
//	}
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;

			}

		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int arr[] = { 9,8,7,1,5,6,3,2,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}