#include <iostream>
#include <malloc.h>
#include "linearhead.h"

//构造一个空的线性表L
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
//销毁线性表L
void DestroyList_Sq(SqList &L)
{
	L.elem = NULL;
	L.length = 0;
	L.listsize = 0;
}
//重置线性表L为空表
void ClearList_Sq(SqList &L)
{
	L.length = 0;
}
//判断线性表是否为空
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
//获取线性表的长度
int ListLength(SqList L)
{
	return L.length;
}
//获得线性表中某个元素
int GetElem(SqList L, int i)
{
	//int  * e;
	//e = &L.elem[i - 1];
	//return *e;
	return L.elem[i - 1];
}
//获得指定位置的前一个位置的元素
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
//获得指定位置的后一个位置的元素
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
//在线性表中第i个位置之前插入e元素
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
//删除线性表中第i位置的元素
bool ListDelete_Sq(SqList &L, int i)
{
	if (i < 1 || i > L.length)
		return false;
	int * p = &(L.elem[i - 1]);			//将需要删除元素的地址赋给*P
	int * q = L.elem + L.length - 1;	//表尾元素的位置
	for (++p; p <= q; ++p)
	{
		*(p - 1) = *p;
	}
	--L.length;
	return true;
}
//线性表输入数据
void InputList_Sq(SqList &L)
{
	for (int i = 0; i < 10; i++)
	{
		L.elem[i] = i;
		L.length++;
	}
}
//遍历打印线性表
void ListTraverse(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		std::cout << L.elem[i] << " ";
	}
}