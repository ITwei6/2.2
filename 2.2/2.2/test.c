#define _CRT_SECURE_NO_WARNINGS
//二维数组的数组名表示 第一行数组，是数组指针
//既有输入的功能就可以接收函数返回值可能性
//杨式矩阵
#include <stdio.h>
//int check(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;//右上角数字的坐标
//	while (x <= *px-1 && y>=0)//循环终止条件
//	{
//		if (arr[x][y] < k)//如果k比右右上角的数要大，则这行中不可能存在要查找的数，所以找下一行
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)//如果k比右上角的数小，则这列中不可能存在要查找的数了，只可能在左边
//		{
//			y--;
//		}
//		else
//		{
//			
//			*px = x;
//			*py = y;//将要查找的数的下标传回去
//			return 1;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int x = 3;
//	int y = 3;
//	int k = 5;
//	int ret=check(arr, &x, &y, k);
//	if (ret == 0)
//	{
//		printf("找不到\n");
//		
//	}
//	else
//	{
//		printf("找到了\n");
//		printf("下标是 %d %d", x, y);
//	}
//	return 0;
//}
//void mid_(int arr[3][3],int x,int y,int k)
//{
//	int left = 0;
//	int right = y-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[left][mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[left][mid] >k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了\n");
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 8;
//	mid_(arr,3,3,k);
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		mid_(arr + i, 3, 3, k);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] == k)
//			{
//				printf("找到了\n");
//				return 1;//直接退出
//			}
//		}
//	}
//	printf("找不到\n");
//	return 0;
//}
//字符串旋转问题：字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB

//#include <string.h>
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;//当字符旋转次数为自己长度时，字符旋转跟没有旋转一样，所以超过自身次数旋转跟某次旋转是一样的
//	//左旋字符串
//	//第一步拷贝拿走第一个字符
//	char tmp = arr[0];
//	//第二步，将后面的往前覆盖
//	int i;
//	for (i = 0; i < len - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	//第三步，将第一个字符放在最后面
//	arr[len - 1] = tmp;
//}

//int main()
//{
//	char arr[] = "ABCD";
//	int k;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}
#include <string.h>
//void reverse(char *left,char*right)
//{
//	//逆序函数需要两个指针分别指向前面和后面，当前面指针小于后面指针时
//	//说明还有元素需要逆序
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k;
//	scanf("%d", &k);
//	int len = strlen(arr);
//	//写一个逆序函数reserve
//	//先逆序左边
//	 reverse(arr,arr+k-1);
//	//再逆序右边
//	 reverse(arr + k, arr + len - 1);
//	//再整体逆序
//	 reverse(arr, arr + len - 1);
//	 printf("%s", arr);
//	return 0;
//}
//空间辅助法
//int main()
//{
//	char arr[256] = "abcdef";
//	int k;
//	scanf("%d", &k);
//	char tmp[256] = { 0 };//创建一个空数组
//	//旋转k 这个点是一个断点
//    //先把断点后面的拷贝到tmp中，再将前面的放进tmp中，最后将tmp再拷贝回去
//	strcpy(tmp, arr + k);
//	strncat(tmp, arr, k);//将k个字符追加到tmp后面
//	//再将tmp拷贝回去
//	strcpy(arr, tmp);
//	printf("%s", arr);
//	return 0;
//}
//int is_move(char arr1[], char arr2[])
//{
	//int len1 = strlen(arr1);
	//int len2 = strlen(arr2);
	//if (len1 != len2)//判断一下长度是否相等，如果不等直接返回0
	//{
	//	return 0;
	//}
//	int i;
//	for (i = 0; i < len1; i++)
//	{
//		left_move(arr1, 1);//每次左旋一个
//		if (strcmp(arr1, arr2) == 0)//每次旋转完与字符串2比较是否相同
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
/*i*//*nt main()
{
	char arr1[] = "ABCDEF";
	char arr2[] = "CDEFAB";
   int ret=is_move(arr1, arr2);
   if (ret == 1)
   {
	   printf("Yes\n");
   }
   else
   {
	   printf("No\n");
   }

}*/
int is_move(char arr1[20],char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)//判断一下长度是否相等，如果不等直接返回0
	{
		return 0;
	}
	strncat(arr1, arr1, len1);//给数组arr1追加一个arr1，追加6个元素
	//strstr是用来查找字符串中的子串的，如果字符串中找到要比较的字符串
	//那么将返回要比较的字符在该字符串中的地址
	//如果没有则返回NULL.
	if (strstr(arr1, arr2) != NULL)
		return 1;
	else
		return 0;
}
int main()
{
	char arr1[20] = "ABCDEF";
	char arr2[] = "CDEFAB";
	int ret = is_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}