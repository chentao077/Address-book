#include"contact.h"
void menu()
{
	printf("*******************************************\n");
	printf("*****      1.���         2.ɾ��      *****\n");
	printf("*****      3.����         4.�޸�      *****\n");
	printf("*****      5.��ӡ         6.����      *****\n");
	printf("*****      0.�˳�                     *****\n");
	printf("*******************************************\n");

}
int main()
{
	//����ͨѶ¼
	struct contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case Add:
			//��Ӷ���
			system("cls");
			AddContact(&con);
			break;
		case Del:
			//ɾ������
			system("cls");
			DelContact(&con);
			break;
		case Search:
			//���Ҷ���
			system("cls");
			SearchContact(&con);
			break;
		case Modify:
			//�޸Ķ���
			system("cls");
			ModifyContact(&con);
			break;
		case Print:
			//��ӡͨѶ¼
			system("cls");
			PrintContact(&con);
			break;
		case Sort:
			//����ͨѶ¼
			system("cls");
			SortContact(&con);
			break;
		case Exit:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}