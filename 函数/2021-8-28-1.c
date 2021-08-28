#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Math.h>

// strcpy 字符串复制函数、
// char *strcpy( char *strDestination, const char *strSource );
// // 使用规则前一位放置目的地 后一位放置要引用的
// int main()
// {
// 	char str1[] = "Sample string";
// 	char str2[40];
// 	char str3[40];
// 	strcpy(str2, str1);
// 	strcpy(str3, "copy successful");
// 	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
// 	return 0;
// }

// memset的使用
// void *memset( void *dest, int c, size_t count );
// // dest为目的地 第二部分为进行替换的值 第三位为替换的个数
// int main()
// {
// 	char i[] = "#########";
// 	memset(i, '&', 4);
// 	printf("%s", i);
// 	return 0;
// }

// 100-200 素数的判断
// int is_prime(int n)
// {
//     int j = 0;  // 定义整型j
//     for (j = 2; j <= sqrt(n); j++) // 因为素数只能被1和本身整除 所以初始设定j=2
//     {                              // j<=sqrt(n)的原因在循环那个练习里有
//         if (n % j == 0)
//             return 0;   // 此时符合这个条件说明不是素数
//     }
//     return 1;  // 是返回1
// }

// int main()
// {
//     int i = 0;
//     for (i = 100; i <= 200; i++)   // 进入循环将100-200的所有书进行应用
//     {
//         if (is_prime(i) == 1)   // 将i放入自定义函数 此时由上面返回的值进行判断
//             printf("%d\n", i);   
//     }
//     return 0;
// }


// 二分查找(自定义函数版)
// int binary_search(int arr[], int k, int x)
// {
// 	int left = 0;              // 设定左值右值(下标)
// 	int right = x - 1;
// 	while (left <= right)  // 解释见循环那章
// 	{
// 		int mid = (left + right) / 2;
// 		if (arr[mid] < k)
// 		{
// 			left = mid + 1;
// 		}
// 		else if (arr[mid] > k)
// 		{
// 			right = mid - 1;
// 		}
// 		else
// 		{
// 			return mid;
// 		}
// 	}
// 	return -1;

// }

// int main()
// {
// 	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; // 创建一个整型数组arr放入1-10
// 	int k = 7;                            // k为我们进行查找的值
// 	int sz = sizeof(arr) / sizeof(arr[0]);// 利用sizeof算出数组里数值个数
// 	int ret = binary_search(arr, k,sz);   // 创建自定义函数放入
	
// 	if (ret == -1)
// 	{
// 		printf("找不到数字\n");
// 	}
// 	else
// 		printf("找到了下标为:>%d\n",ret);
// 	return 0;
// }

// 函数的嵌套
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;	
}
//从最内层开始打印43 当外一层接收到两个字符后 打印出2 最外一层收到一个字符 打印1