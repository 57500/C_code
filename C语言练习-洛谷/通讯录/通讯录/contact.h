#pragma once


#include<stdio.h>
#include<string.h>
#include<assert.h>




#define max 100
//��������
typedef struct peoinfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
}peoinof;



//ͨѶ¼
typedef struct contact
{
	struct peoinfo date[100];
	int count;//�˵ĸ���
}contact;


//��ʼ��
void initcontact(contact* pc);





//����ͨѶ¼
void addcontact(contact* pc);



//��ӡͨѶ¼
void showcontact(const contact* pc);



//ɾ��ͨѶ¼
void delecontact(const contact* pc);



//����ͨѶ¼
void searchcontact(const contact* pc);



//�޸�ָ����ϵ��
void modifycontact(contact* pc);



//����
void sortcontact(contact* pc);