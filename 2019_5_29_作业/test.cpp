#include<stdio.h>
#include<stdlib.h>
//#define N 10
//#define S(a,b) a+b
//#define M(a,b) a*b
//#define T(a,b) ((a)*(b))//把括号加到不能加为止
//#define A (365*24*60*60)UL//无符号长整型，跑不过去
//#define W(a,b) a=a^b; b=a^b; a=a^b;
////#define W(a,b) a=a+b; b=a-b; a=a-b;
//#define Q(a,b) a>b?a:b;
//#define E(a,b) a+(b-a)/2
////#define PRINT(FORMOT,VALUE)\
//printf("the value is "FORMOT"\n",VALUE);
//#define PRINT(FORMOT,VALUE)\
//printf("the value of "#VALUE" is "FORMOT"\n",VALUE);//#把后面的东西变成字符串
//#define ADD(num,value)\
//sum##num+=value;

int main()
{
	/*char c = '32';
	printf("%c", c);*/
//#ifdef N
//	printf("aaaa");
//#else
//	printf("bbb");
//#endif
	/*int sum5 = 7;
	PRINT("%d", 6);
	ADD(5, 7);
	printf("%d\n", sum5);*/
	//宏定义 --预处理命令
/*int a = 0;
scanf("%d", &a);
printf("%d", a);*/
//for (int i = 0; i < 1; ++i)
//{
//	printf("测试\n");//从这个程序可以测试出for循环的流程是，每次都会判断。
//}
	//int a = N;
	//int s = S(4, 5);
	//int m = M(4, 5);
	//int m = M(4+4, 5+5);//m=4+4*5+5;原模原样去替换
	//int o = M(4 + 4, 5 + 5) / M(4 + 4, 5 + 5);
	////4+4*5+5/4+4*5+5
	//int b = T(4 + 4, 5 + 5)/ T(4 + 4, 5 + 5);
	////((4+4)*(5+5))/((4+4)*(5+5))=1	
	//printf("file: %s,line: %d", __FILE__, __LINE__);
	//printf("A= %d", A);
	/*int a = 3;
	int b = 4;*/
	/*W(a,b);
	printf("a= %d,b= %d",a,b );*/
	//int c = Q(a, b);
	//printf("%d", c);
	/*float a = 3;
	float b = 4; 
	float c = E(a, b);
	printf("%f", c);*/
    system("pause");
    return 0;
}