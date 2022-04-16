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
//��װ���ҹ��ܣ��ҵ������±꣬�Ҳ�������-1
//static���Σ��������ֻ��test.cԴ����ʹ��
static int Find_Name(const struct contact* ps, char name[Name_max])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct contact* ps) 
{
	//1.����
	char name[Name_max];	
	printf("������Ҫɾ�������֣�");
	scanf("%s", name);
	int ret=Find_Name(ps, name);
	
	//2.ɾ��
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for ( j = ret; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(const struct contact* ps)
{
	char name[Name_max];
	printf("������Ҫ���ҵ����֣�");
	scanf("%s", name);
	int ret = Find_Name(ps, name);
	if (ret == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[ret].name,
				ps->data[ret].age,
				ps->data[ret].sex,
				ps->data[ret].tele,
				ps->data[ret].addr);	
	}
}
void ModifyContact(const struct contact* ps)
{
	char name[Name_max];
	printf("������Ҫ�޸ĵ����֣�");
	scanf("%s", name);
	int ret = Find_Name(ps, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("������������");
		scanf("%s", ps->data[ret].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ret].sex);
		printf("������绰��");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ret].addr);
		
		printf("�޸ĳɹ�\n");
	}
}
int Cmp_Name(const void* p1, const void* p2)
{
	return strcmp(((struct People_Init*)p1)->name, ((struct People_Init*)p2)->name);	
}
void SortContact(struct contact* ps)
{
	qsort(ps->data, ps->size, sizeof(ps->data[0]), Cmp_Name);
	printf("����ɹ�\n");
}