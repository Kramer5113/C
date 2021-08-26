#define _CRT_SECURE_NO_WARNINGS // 用于关闭安全检查
#include <stdio.h>

// 关于字符的输出
// int main()
// {
//     char ch = 'A';
//     printf("%c\n", ch); // %c=打印字符格式的数据
//     20;
//     return 0;
// }


// 实现简单的加法
// int main()
// {
//     int a = 0;       
//     int b = 0;
//     int sum = 0;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     sum = a + b;
//     printf("%d", sum);
// }
// 程序首先定义a、b、sum类型为int 此时利用scanf输入函数 在a和b的地址放入
// 输入的数值 进行相加并赋值到sum 此时再打印 就形成了简单的加法 


// 计算数组个数
// int main()
// {
// 	int arr[10] = { 0 };
// 	int sz = 0;
// 	printf("%d\n", sizeof(arr));
// 	sz = sizeof(arr) / sizeof(arr[0]);
// 	printf("%d\n", sz);
// 	return 0;
// }
// 此程序定义了数组arr和整型sz 此时直接利用sizeof来计算arr大小 由于在数组
// 定义了10个整型


// 条件操作符操作规则   exp1？exp2：exp3
// int main()
// {
// 	int a = 110;
// 	int b = 100;
// 	int max = 0;
// 	max = (a > b ? a : b);    
// 	printf("max=%d\n", max);
// 	return 0;
// }


// 关于指针变量的使用（int）
// int main()
// {
// 	int a = 10;          
// 	int* p = &a;
// 	*p = 20;                      // 有一种变量是用来存放地址的就叫指针变量
// 	printf("%d\n", &a);  // 打印地址
// 	printf("%d\n", p);   // 打印地址
// 	printf("a=%d\n", a);
// 	return 0;
// }
// 程序首先定义整型a并赋值10 然后定义了一个整型指针p 同时取地址a将其放入 
// 然后解引用p并赋值20 所以此时a与p地址相同 *p=20后 a=20 

// 关于指针变量的使用（char）
int main()
{
	char ch = 'w';
	char* p = &ch;
	printf("%d\n", sizeof(p));
	*p = 'c';
	printf("%c\n", ch);
	return 0;
}
// 通过观察输出结果 

// 附录
// extern int g_val; // 用于声明外部符号