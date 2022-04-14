#include"contact.h"

void InitContact(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void AddContact(struct contact* ps)
{
	if (ps->size == Max)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("������������");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);
		(ps->size)++;
		printf("����ɹ�\n");
	}
}
void PrintContact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//��ӡ����
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for ( i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
void DelContact(struct contact* ps) 
{
	//1.����
	char name[Name_max];
	int i = 0;
	printf("������Ҫɾ�������֣�");
	scanf("%s", name);
	
	for ( i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
	}
	//2.ɾ��
	if (i == ps->size)
	{
		printf("�Ҳ��������\n");
	}
	else
	{
		int j = 0;
		for ( j = i; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
