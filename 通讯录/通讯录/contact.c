#include"contact.h"
void menu()
{
	printf("*******************************************\n");
	printf("*****      1.添加         2.删除      *****\n");
	printf("*****      3.查找         4.修改      *****\n");
	printf("*****      5.打印         6.排序      *****\n");
	printf("*****      0.退出                     *****\n");
	printf("*******************************************\n");

}
int main()
{
	//创建通讯录
	struct contact con;
	//初始化通讯录
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case Add:
			//添加对象
			AddContact(&con);
			break;
		case Del:
			//删除对象
			DelContact(&con);
			break;
		case Search:
			break;
		case Modify:
			break;
		case Print:
			//打印
			PrintContact(&con);
			break;
		case Sort:
			break;
		case Exit:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}