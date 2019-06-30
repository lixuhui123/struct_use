//#include<stdio.h>
//#include<stdlib.h>
////结构体中声明自己用指针
//extern int add(int a, int b);
//struct A
//{
//	/*char c;
//	char rev1;
//	char rev2;
//	char rev3;
//	int b;
//	double c;*/
//	int a : 1;
//};//16个字节
////register关键字，加速程序，在寄存器里存，不能取地址 register int i
////union联合体
////extern int i;
////i=5;
////int i;
////跨文件使用,扩展作用域，只是声明，
//int main1()
//{
//	struct A li = { 0 };
//	li.a = 3;
//	printf("%u\n", li.a);//这里还涉及一个类型提升的问题，即低到高补不符号位
//	printf("%d\n", add(3, 5));
//	system("pause");
//	return 0;
//}