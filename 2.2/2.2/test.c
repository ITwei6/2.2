#define _CRT_SECURE_NO_WARNINGS
//��ά�������������ʾ ��һ�����飬������ָ��
//��������Ĺ��ܾͿ��Խ��պ�������ֵ������
//��ʽ����
#include <stdio.h>
//int check(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;//���Ͻ����ֵ�����
//	while (x <= *px-1 && y>=0)//ѭ����ֹ����
//	{
//		if (arr[x][y] < k)//���k�������Ͻǵ���Ҫ���������в����ܴ���Ҫ���ҵ�������������һ��
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)//���k�����Ͻǵ���С���������в����ܴ���Ҫ���ҵ����ˣ�ֻ���������
//		{
//			y--;
//		}
//		else
//		{
//			
//			*px = x;
//			*py = y;//��Ҫ���ҵ������±괫��ȥ
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
//		printf("�Ҳ���\n");
//		
//	}
//	else
//	{
//		printf("�ҵ���\n");
//		printf("�±��� %d %d", x, y);
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
//			printf("�ҵ���\n");
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
//				printf("�ҵ���\n");
//				return 1;//ֱ���˳�
//			}
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}
//�ַ�����ת���⣺�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB

//#include <string.h>
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;//���ַ���ת����Ϊ�Լ�����ʱ���ַ���ת��û����תһ�������Գ������������ת��ĳ����ת��һ����
//	//�����ַ���
//	//��һ���������ߵ�һ���ַ�
//	char tmp = arr[0];
//	//�ڶ��������������ǰ����
//	int i;
//	for (i = 0; i < len - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	//������������һ���ַ����������
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
//	//��������Ҫ����ָ��ֱ�ָ��ǰ��ͺ��棬��ǰ��ָ��С�ں���ָ��ʱ
//	//˵������Ԫ����Ҫ����
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
//	//дһ��������reserve
//	//���������
//	 reverse(arr,arr+k-1);
//	//�������ұ�
//	 reverse(arr + k, arr + len - 1);
//	//����������
//	 reverse(arr, arr + len - 1);
//	 printf("%s", arr);
//	return 0;
//}
//�ռ丨����
//int main()
//{
//	char arr[256] = "abcdef";
//	int k;
//	scanf("%d", &k);
//	char tmp[256] = { 0 };//����һ��������
//	//��תk �������һ���ϵ�
//    //�ȰѶϵ����Ŀ�����tmp�У��ٽ�ǰ��ķŽ�tmp�У����tmp�ٿ�����ȥ
//	strcpy(tmp, arr + k);
//	strncat(tmp, arr, k);//��k���ַ�׷�ӵ�tmp����
//	//�ٽ�tmp������ȥ
//	strcpy(arr, tmp);
//	printf("%s", arr);
//	return 0;
//}
//int is_move(char arr1[], char arr2[])
//{
	//int len1 = strlen(arr1);
	//int len2 = strlen(arr2);
	//if (len1 != len2)//�ж�һ�³����Ƿ���ȣ��������ֱ�ӷ���0
	//{
	//	return 0;
	//}
//	int i;
//	for (i = 0; i < len1; i++)
//	{
//		left_move(arr1, 1);//ÿ������һ��
//		if (strcmp(arr1, arr2) == 0)//ÿ����ת�����ַ���2�Ƚ��Ƿ���ͬ
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
	if (len1 != len2)//�ж�һ�³����Ƿ���ȣ��������ֱ�ӷ���0
	{
		return 0;
	}
	strncat(arr1, arr1, len1);//������arr1׷��һ��arr1��׷��6��Ԫ��
	//strstr�����������ַ����е��Ӵ��ģ�����ַ������ҵ�Ҫ�Ƚϵ��ַ���
	//��ô������Ҫ�Ƚϵ��ַ��ڸ��ַ����еĵ�ַ
	//���û���򷵻�NULL.
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