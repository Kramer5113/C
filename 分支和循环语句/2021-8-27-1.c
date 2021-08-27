#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

// 打印1-100的奇数
// int main()
// {
//     int a=1;
//     while(a<=100)
//     {
//         if(a%2==1)
//         {
//             printf("%d\n",a);
//         }
//         a++;
//     }
//     return 0;
// }

// 利用getchar输入 putchar输出 来打印
// int main()
// {
//     int a=getchar();
//     putchar(a);
//     return 0;
// }

// 关于输入缓冲区的定义
// int main()
// {
// 	int AC = 0;    // 定义三个变量
// 	int ch = 0;
// 	char password[20] = { 0 };
// 	printf("请输入密码:>");
// 	scanf("%s", &password);         // 输入字符放入password 举例输入 apple
// 	while ((ch=getchar()) != '\n')  // 但是输入的是apple\n 而我们scanf定义了
// 	{                               // 只读字符型数据所以其实在输入缓冲区中还有
// 		;                           // 一个\n 此时我们利用getchar 因为getchar与
// 	}                               // scanf都是用的是输入缓冲区此时\n就会被他读走
// 	printf("请确认（Y/N）:>");
// 	AC = getchar();
// 	if (AC == 'Y')
// 	{
// 		printf("成功\n");
// 	}
// 	else
// 	{
// 		printf("失败\n");
// 	}
// 	return 0;
// }

// for循环的注意事项
// int main()
// {
// 	int i = 0;
// 	int j = 0;
// 	for (;i < 10;i++)
// 	{
// 		for (;j < 10;j++)
// 		{
// 			printf("ambition\n");
// 		}
// 	}
// 	return 0;
// }
//  此函数定义i j 使用for循环后条件符合 进如内循环 打印输出 ambition 当j=10时 出内循环按外循环要求
//  再进入内循环 此时由于j没有重新赋值所以 j=10 再次跳出循环 如此反复 此时只输出了最开始10个ambition

//1-3阶的总和
// int main()
// {
// 	int b = 0;
// 	int sum = 0;
// 	int c = 1;
// 	for(b=1;b<=3;b++)
// 	{
// 			c = b * c;   // c为阶 b为阶数
// 		sum = sum + c;
// 	}
// 	printf("%d\n", sum);
// 	return 0;
// }

// 二分查找
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int num = 4;
//     int left = 0;
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[i]);
//     int right = sz - 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (arr[mid] < num)
//         {
//             left = mid + 1; //右移
//         }
//         else if (arr[mid] > num)
//         {
//             right = mid - 1; //左移
//         }
//         else
//         {
//             printf("sign:%d\n", mid);
//             break;
//         }
//     }
//     if (left > right) // 当left>right说明所有数值已经对比过一遍也就是数组里没有符合要求的值
//         printf("not found\n");
//     return 0;
// }
// 首先定义一个整型数组放进入数值 num为我们需要查找的数值 将数组的起始下标定义给left 利用sizeof
// 算出sz也就是数组个数 将其-1也就是right最后一位下标 此时进入函数利用right left来求出中间值mid
// 此时利用mid来与num进行判断 如果arr[mid]<num 说明num在整个数组的右半部分 反之左半部分 或者
// num正好就是中间值 一直进行循环不断的取中间值来寻找直到不符合循环要求

// 弹幕效果
// int main()
// {
// 	char arr1[] = "ambition";
// 	char arr2[] = "########";
// 	int left = 0;
//     int right = 0;
// 	right = strlen(arr1) - 1;  // 利用strlen来求出字符串长度-1也就是最后一位下标
// 	while (left <= right)  // 当left<=right 说明整个字符串还没有走完
// 	{
// 		arr2[left] = arr1[left];  // 进行替换
// 		arr2[right] = arr1[right];
// 		Sleep(1000);    // 暂停时间1000=1s
// 		system("cls");  // 清屏操作 需要windows.h
// 		printf("%s\n", arr2); 
// 		left++;  // leftright持续向内进以此来进行不断地逐位替换
// 		right--;
		
// 	}
// 	return 0;
// }

// 密码系统改进版
// int main()
// {
// 	int i = 0;           // 定义一个整型和字符数组
// 	char mm[20] = {0};
// 	for (i = 0;i < 3;i++)  //定义一个循环让其运行三次然后跳出循环
// 	{
// 		printf("password:>");
// 		scanf("%s", &mm);   // 利用scanf函数输入内容
// 		if (strcmp(mm,"123456") ==0)    // 利用strcmp函数来判断内容的一致性
// 		{
// 			printf("密码正确\n");\
// 				break;
// 		}
// 		else
// 			printf("密码错误\n");
	
// 	}
// 	if (i == 3)
// 		printf("三次错误\n");
// 	return 0;
// }

// 猜数字小游戏
// void guess(int x,int y) 
// {
// 	printf("start\n");
// 	while (1)
// 	{
// 		scanf("%d", &y); // 输入猜测的值
// 		if (x < y)   // 如果此时输入的值大于x 进入循环此时y如果大于20说明输入了不符合要求的数值
// 		{            // 否则打印大了 以此来进行不断地循环通过大或者小的提示来进行判断直到猜出
// 			if (y > 20)
// 				printf("超出范围\n");
// 			else
// 			printf("大\n");
// 		}
			
// 		else if (x > y)   // 同上
// 		{if(y<1)
// 			printf("超出范围\n");
// 		else
// 			printf("小\n");
// 		}
			
// 		else
// 			{
// 			printf("成功\n");
// 		}
			
// 	}
// }
// int main()
// {
// 	srand((unsigned)time(NULL));  // 创建随机值时间变化随机值也变化
	
// 	int j = 0;
// 	int num = rand()%20+1;  // 取随机值同时将其取余+1也就是说此时num的范围是1-20
// 	printf("开始登陆\n");
	
// 	while (1)
// 	{
// 		int i = 0;
// 		scanf("%d", &i);
// 		switch (i)
// 		{
// 		case 1:
// 			guess(num, j); // 创建一个自定义函数放入num 整型j
// 				break;
// 		case 0:
// 			printf("退出系统\n");
// 			break;
// 		default:
// 			printf("请重试\n");
// 		}
// 	}
// 	return 0;
// }

//  重点：打印最大公约数
//int main()
//{
//	int a = 48;
//	int b = 10;
//	int c = 0;
//	while (c=a % b )
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n",b);
//		return 0;
//}

//  判断素数
// #include<math.h>
// int main()
// {
// 	int i = 0;
// 	int count = 0;
// 	for (i = 100;i <=200;i++)
// 	{
// 		int j = 0;                     // 如果i=a*b 那么其中至少有一个数字<=开平方i 
// 		for (j = 2;j <= sqrt(i);j++)   // sqrt=开平方 引用math.h 所以我们判定条件为j<=sqrt(i)
// 		{                              // 此时如果在循环结束之钱跳出说明不是素数 而执行结束跳出
// 			if(i% j == 0)              // 说明此时j> 也就得出了素数
// 			break;
// 		}
// 		if (j>sqrt(i))
// 		{
// 			printf("%d\n", i);
// 			count++;
// 		}
// 	}
// 	printf("总计：%d", count);
// 	return 0;
// }

