#include<stdio.h>
#include<string.h>

#define Max      1000
#define Name_max 10
#define Sex_max  5
#define Tele_max 12
#define Addr_max 30
#define _CRT_SECURE_NO_WARNINGS 1

struct People_Init
{
	char name[10];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
};
//通讯录类
struct contact
{
	struct People_Init data[Max];//通讯录
	int size;//计算添加的个数
};
enum Opinion
{
	Exit,//0
	Add,//1
	Del,//2
	Search,//3
	Modify,//4
	Print,//5
	Sort//6
};

//函数声明
void InitContact(struct contact* ps);
void AddContact(struct contact* ps);
void PrintContact(const struct contact* ps);
void DelContact(struct contact* ps);
