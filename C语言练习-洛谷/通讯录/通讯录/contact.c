#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void initcontact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));
}



//����
void addcontact(struct contact* pc)
{
	assert(pc);
	if (pc->count == 100)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("����������:\n");
	scanf("%s", pc->date[pc->count].name);
	printf("����������:\n");
	scanf("%d", &(pc->date[pc->count].age));
	printf("�������Ա�:\n");
	scanf("%s", pc->date[pc->count].sex);
	printf("������绰����:\n");
	scanf("%s", pc->date[pc->count].tele);
	printf("�������ַ:\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");

}




//��ӡͨѶ¼
void showcontact(const contact* pc)
{
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->date[i].name, pc->date[i].age,
			pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
	}
}




//������ϵ��
static int findbyname(contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->date[i].name,name))
		{
			return i;
		}
	}
	return -1;
}

//ɾ��ͨѶ¼
void delecontact(contact* pc)
{
	char name[20] = { 0 };
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ������ϵ��:\n");
	scanf("%s", name);
	int pos=findbyname(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	for (int i = pos; i < pc->count-1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}





//����ͨѶ¼
void searchcontact(const contact* pc)
{
	char name[20] = { 0 };
	assert(pc);
	printf("����������˵�����:\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("δ�鵽����\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->date[pos].name, pc->date[pos].age,
			pc->date[pos].sex, pc->date[pos].tele, pc->date[pos].addr);
}



//�޸���ϵ��
void modifycontact(contact* pc)
{
	char name[20] = { 0 };
	assert(pc);
	printf("������Ҫ�޸��˵�����:\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("δ�鵽����\n");
		return;
	}
	printf("������Ҫ�޸ĵ��˵���Ϣ\n");
	printf("����������:\n");
	scanf("%s", pc->date[pos].name);
	printf("����������:\n");
	scanf("%d", &(pc->date[pos].age));
	printf("�������Ա�:\n");
	scanf("%s", pc->date[pos].sex);
	printf("������绰����:\n");
	scanf("%s", pc->date[pos].tele);
	printf("�������ַ:\n");
	scanf("%s", pc->date[pos].addr);
	printf("�޸ĳɹ�\n");
}



//����

int cmpbyname(const void* e1, const void* e2)
{

}
void sortcontact(contact* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(struct peoinfo));
}