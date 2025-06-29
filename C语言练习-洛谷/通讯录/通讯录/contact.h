#pragma once


#include<stdio.h>
#include<string.h>
#include<assert.h>




#define max 100
//类型声明
typedef struct peoinfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
}peoinof;



//通讯录
typedef struct contact
{
	struct peoinfo date[100];
	int count;//人的个数
}contact;


//初始化
void initcontact(contact* pc);





//增加通讯录
void addcontact(contact* pc);



//打印通讯录
void showcontact(const contact* pc);



//删除通讯录
void delecontact(const contact* pc);



//查找通讯录
void searchcontact(const contact* pc);



//修改指定联系人
void modifycontact(contact* pc);



//排序
void sortcontact(contact* pc);