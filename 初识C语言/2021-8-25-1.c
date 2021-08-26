#include<stdio.h>
int main()
{
int num = 10;
&num;//取出num的地址
printf("%p\n", &num);//打印地址，%p--以地址的形式打印
return 0;
}