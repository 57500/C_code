#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void initcontact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));
}



//增加
void addcontact(struct contact* pc)
{
	assert(pc);
	if (pc->count == 100)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入名字:\n");
	scanf("%s", pc->date[pc->count].name);
	printf("请输入年龄:\n");
	scanf("%d", &(pc->date[pc->count].age));
	printf("请输入性别:\n");
	scanf("%s", pc->date[pc->count].sex);
	printf("请输入电话号码:\n");
	scanf("%s", pc->date[pc->count].tele);
	printf("请输入地址:\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("增加成功\n");

}




//打印通讯录
void showcontact(const contact* pc)
{
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->date[i].name, pc->date[i].age,
			pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
	}
}




//查找联系人
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

//删除通讯录
void delecontact(contact* pc)
{
	char name[20] = { 0 };
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	printf("请输入要删除的联系人:\n");
	scanf("%s", name);
	int pos=findbyname(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	for (int i = pos; i < pc->count-1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}





//查找通讯录
void searchcontact(const contact* pc)
{
	char name[20] = { 0 };
	assert(pc);
	printf("请输入查找人的名字:\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("未查到此人\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	int i = 0;
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->date[pos].name, pc->date[pos].age,
			pc->date[pos].sex, pc->date[pos].tele, pc->date[pos].addr);
}



//修改联系人
void modifycontact(contact* pc)
{
	char name[20] = { 0 };
	assert(pc);
	printf("请输入要修改人的名字:\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("未查到此人\n");
		return;
	}
	printf("请输入要修改的人的信息\n");
	printf("请输入名字:\n");
	scanf("%s", pc->date[pos].name);
	printf("请输入年龄:\n");
	scanf("%d", &(pc->date[pos].age));
	printf("请输入性别:\n");
	scanf("%s", pc->date[pos].sex);
	printf("请输入电话号码:\n");
	scanf("%s", pc->date[pos].tele);
	printf("请输入地址:\n");
	scanf("%s", pc->date[pos].addr);
	printf("修改成功\n");
}



//排序

int cmpbyname(const void* e1, const void* e2)
{

}
void sortcontact(contact* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(struct peoinfo));
}