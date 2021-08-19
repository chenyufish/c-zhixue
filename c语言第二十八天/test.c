#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("  %d  ", arr[j]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//
//	return 0;
//
//}
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int  arr2[5] = { 2,4,6,8,10 };
//	//printf(" %p ", arr1);
//	//printf(" %p ", arr2);
//	//int tem[5] = { 0,0,0,0,0 };
//	int tem = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//	}
//	//printf(" %p ", arr1);
//	//printf(" %p ", arr2);
//	//printf(" %d ", arr1);
//	//printf(" %d ", arr2);
//	//printf(" %d ", tem);
//	//arr1[5] = tem;
//	//arr1[5] = arr2;
//	//arr2 [5]= tem;
//	//printf(" %d ", arr1);
//	//printf(" %d ", arr2);
//	//printf(" %d ", tem);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int bitcount(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	
//	return count;
//}
//int bitcount(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//
//	}
//	/*while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}*/
//
//	return count;
//}
//int bitcount(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数；\n");
//	scanf("%d", &a);
//	int count=bitcount(a);
//	printf("count=%d\n", count);
//	return 0;
//}
//int get_diff_bit(int i, int j)
//{
//	int count = 0;
//	int tem = i ^ j;
//	if (tem == 1 || tem == 0)
//		count++;
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m,&n);
//	int count = get_diff_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i ++ )
//	{
//		printf("%d\n", *(p + i));
//
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
void print_table(int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d*%d =%-3d",i,j,i*j);
		}
		printf("\n");
	}

}
int main()
{
	int n = 0;
	printf("请输入你想要的乘法口诀表：");
	scanf("%d", &n);
	print_table(n);

	return 0;
}