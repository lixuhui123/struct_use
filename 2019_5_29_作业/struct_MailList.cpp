#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
enum menu
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SORT,
	EMPTY,
	SHOW
};
#define NAME_SIZE 30
#define SEX_SIZE 5
#define ADDR_SIZE 100
#define TEL_SIZE 20
#define MAX 3
typedef struct student
{
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
    int age;
	char addr[ADDR_SIZE];
	char tel[TEL_SIZE];
}Student;
typedef struct MailList
{
	//Student data[MAX];
	Student *data;
	int capacity;//当前最大容量决定是多少就赋值多少
	int size;//
}MailList;
void menu()
{
	printf("******************************\n");
	printf("**** 1.add      2.del     ****\n");
	printf("**** 3.modify   4.search  ****\n");
	printf("**** 5.sort     6.empty   ****\n");
	printf("**** 7.show     0.exit    ****\n");
	printf("******************************\n");
	
}
int IncCapacity(MailList *ml)
{
	assert(ml != NULL);
	Student *temp = NULL;

	ml->capacity = ml->capacity + MAX;
	temp = (Student*)realloc(ml->data, sizeof(Student)*ml->capacity);
	if (temp != NULL)
	{
		ml->data = temp;
		return 0;
	}
	return 1;
}
void LoadData(MailList *ml)
{
	//int i = 0;
	FILE *rp = fopen("F:\\bite learn\\MailList.txt", "rb");
	 
	while (fread(&ml->data[ml->size], sizeof(Student), 1, rp))
	{
		ml->size++;
		if (ml->size >= ml->capacity)
		{
			IncCapacity(ml);
		}
		
	}
	fclose(rp);
	rp = NULL;
}
void InitMailList(MailList *ml)
{
	assert(ml != NULL);
	ml->capacity = MAX;
	ml->size = 0;
	ml->data = (Student*)malloc(sizeof(Student)*ml->capacity);
	memset(ml->data, 0, MAX * sizeof(Student));//mi.data是一个 指针
	LoadData(ml);

}

void AddInfo(MailList *ml)
{
	assert(ml != NULL);
	/*if (ml->size >= MAX)
	{
		printf("通讯录已满不能插入\n");
		return;
	}*/
	if (ml->size >= ml->capacity && IncCapacity(ml))
	{
		//这个地方判断的优先级高于逻辑与，而且与运算是短路求值问题
		//第一个是0后第二个表达式就不计算，所以不会每次都开辟空间 
		//只有当前面是1的时候才会开辟空间
		printf("通讯录已满不能插入\n");
		return;
	}
	printf("请输入姓名 性别 年龄 住址 电话\n");
	scanf("%s", ml->data[ml->size].name);//是一个数组，名字就是地址
	scanf("%s", ml->data[ml->size].sex);
	scanf("%d", &ml->data[ml->size].age);
	scanf("%s", ml->data[ml->size].tel);
	scanf("%s", ml->data[ml->size].addr);
	
	++ml->size;
}
void ShowInfo(MailList *ml)
{
	assert(ml != NULL);
	printf("%15s %5s %3s %10s %12s", "姓名", "性别", "年龄", "电话", "住址\n");
	int i = 0;
	for (i = 0; i < ml->size; ++i)
	{
		printf("%15s",ml->data[i].name);
		printf("%5s", ml->data[i].sex);
		printf("%3d", ml->data[i].age);
		printf("%10s", ml->data[i].tel);
		printf("%12s\n", ml->data[i].addr);
	}
}
void SortInfo(MailList *ml)
{
	assert(ml != NULL);

	int i = 0;
	int j = 0;
	Student tmp;
	for (i = 0; i < ml->size; ++i)
	{
		for (j = 0; j < ml->size - i - 1; ++j)
		{
			if (strcmp(ml->data[j].name, ml->data[j+1].name)>0)//strcmp的对比方式是两个的第一个字符开始对比
				//直到找到不同大的字符返回
			{
				tmp = ml->data[j];
				ml->data[j] = ml->data[j + 1];
				ml->data[j + 1] = tmp;
			}
		}
	}
}
void SaveMailList(MailList *ml)
{
	int i = 0;
	FILE *fp = fopen("F:\\bite learn\\MailList.txt", "wb");
	for (i = 0; i < ml->size; ++i)
	{
		fwrite(&ml->data[i], sizeof(Student), 1, fp);
	}
	//data是指向student结构体的指针啊哈哈
	
	fclose(fp);
	fp = NULL;
}
void DestoryMaillist(MailList *ml)
{
	assert(ml != NULL);
	SaveMailList(ml);
	free(ml->data);
	ml->data = NULL;
	ml->capacity = ml->size=NULL;

}

void Test()

{
	int input = 0;
	MailList ml;
	InitMailList(&ml);
	while (1)
	{
		menu();
		printf("请输入要实现的功能\n");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			DestoryMaillist(&ml);
			printf("退出！\n");
			return;
		case ADD:
			AddInfo(&ml);
			break;
		case DEL:
			//DelInfo(&ml);
			//删除
			break;
		case MODIFY:
			//ModifyInfo(&ml);
			//修改
			break;
		case SEARCH:
			//SearchInfo(&ml);
			break;
		case SORT:
			SortInfo(&ml);
			break;
		case EMPTY:
			//EmptyInfo(&ml);
			break;
		case SHOW:
			ShowInfo(&ml);
			break;
		default:
			printf("输入分支不存在,请重新输入\n");
		}
	}
}
int main()
{
	Test();
	system("pause");
	return 0;
}