#include <iostream>
#include "linearhead.h"


int main()
{
	SqList list;
	InitList_Sq(list);
	InputList_Sq(list);
	int test = 0;
	int test1;
	test = ListLength(list);
	std::cout << "现在线性表的长度为：" << test << std::endl;
	test1 = GetElem(list, 10);
	std::cout << "线性表中第10个数为：" << test1 << std::endl;
	int next_num;
	next_num = NextElem(list, 5);
	std::cout << "线性表中第3个数的后一个数为：" << next_num << std::endl;
	int pre_num;
	pre_num = PriorElem(list, 3);
	std::cout << "线性表中第3个数的后一个数为：" << pre_num << std::endl;
	int insert_num = 4;
	if (ListInsert_Sq(list, 8, insert_num))
	{
		std::cout << "注入成功!" << std::endl;
		std::cout << "已经将" << insert_num << "插入到第8个位置." << std::endl;
		std::cout << "现在线性表的长度为：" << ListLength(list) << std::endl;
		std::cout << "线性表中第8个数为：" << GetElem(list, 8) << std::endl;
		std::cout << "线性表中第9个数为：" << GetElem(list, 9) << std::endl;
	}
	else
	{
		std::cout << "注入失败@_@" << std::endl;
	}
	if (ListDelete_Sq(list, 8))
	{
		std::cout << "弹出成功!" << std::endl;
		std::cout << "已经将第8个位置的元素弹出." << std::endl;
		std::cout << "现在线性表的长度为：" << ListLength(list) << std::endl;
		std::cout << "线性表中第8个数为：" << GetElem(list, 8) << std::endl;
		std::cout << "线性表中第9个数为：" << GetElem(list, 9) << std::endl;
	}
	else
	{
		std::cout << "弹出失败@_@" << std::endl;
	}
	ListTraverse(list);
	return 0;
}