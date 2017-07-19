#include <iostream>
#include <malloc.h>
#include "linearhead.h"

//����һ���յ����Ա�L
bool InitList_Sq(SqList &L)
{
	L.elem = (int *)malloc(LIST_INIT_SIZE * sizeof(int));
	if (!L.elem)
	{
		return false;
		exit(OVERFLOW);
	}
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return true;
}
//�������Ա�L
void DestroyList_Sq(SqList &L)
{
	L.elem = NULL;
	L.length = 0;
	L.listsize = 0;
}
//�������Ա�LΪ�ձ�
void ClearList_Sq(SqList &L)
{
	L.length = 0;
}
//�ж����Ա��Ƿ�Ϊ��
bool ListEmpty(SqList L)
{
	if (!L.length == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
//��ȡ���Ա�ĳ���
int ListLength(SqList L)
{
	return L.length;
}
//������Ա���ĳ��Ԫ��
int GetElem(SqList L, int i)
{
	//int  * e;
	//e = &L.elem[i - 1];
	//return *e;
	return L.elem[i - 1];
}
//���ָ��λ�õ�ǰһ��λ�õ�Ԫ��
int PriorElem(SqList L, int cur_e)
{
	int pre_e;
	if (cur_e > 1)
	{
		pre_e = L.elem[cur_e - 2];
		return pre_e;
	}
	return NULL;
}
//���ָ��λ�õĺ�һ��λ�õ�Ԫ��
int NextElem(SqList L, int cur_e)
{
	int next_e;
	if (cur_e < L.length)
	{
		next_e = L.elem[cur_e];
		return next_e;
	}
	return NULL;
}
//�����Ա��е�i��λ��֮ǰ����eԪ��
bool ListInsert_Sq(SqList &L, int i, int e)
{
	if (i < 1 || i > L.length + 1)
		return false;
	if (L.length >= L.listsize)
	{
		int * newbase;
		newbase = (int *)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(int));
		if (!newbase)
		{
			exit(OVERFLOW);
		}
		L.elem = newbase;
		L.listsize += LISTINCREMENT;
		delete newbase;
	}
	int * q;
	q = &(L.elem[i - 1]);
	for (int * p = &(L.elem[L.length - 1]); p >= q; --p)
	{
		*(p + 1) = *p;
	}
	*q = e;
	++L.length;
	return true;
}
//ɾ�����Ա��е�iλ�õ�Ԫ��
bool ListDelete_Sq(SqList &L, int i)
{
	if (i < 1 || i > L.length)
		return false;
	int * p = &(L.elem[i - 1]);			//����Ҫɾ��Ԫ�صĵ�ַ����*P
	int * q = L.elem + L.length - 1;	//��βԪ�ص�λ��
	for (++p; p <= q; ++p)
	{
		*(p - 1) = *p;
	}
	--L.length;
	return true;
}
//���Ա���������
void InputList_Sq(SqList &L)
{
	for (int i = 0; i < 10; i++)
	{
		L.elem[i] = i;
		L.length++;
	}
}
//������ӡ���Ա�
void ListTraverse(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		std::cout << L.elem[i] << " ";
	}
}