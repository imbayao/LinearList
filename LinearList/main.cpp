#include <iostream>
#include "linearhead.h"

void Main_Menu();
void Second_Menu();

int main()
{
	SqList list;
	//int choose_num;
	//Main_Menu();
	//while (std::cin >> choose_num)
	//{
	//	switch (choose_num)
	//	{
	//	case 1:
	//		if (InitList_Sq(list))
	//		{
	//			std::cout << "创建成功!" << std::endl;
	//		}
	//		else
	//		{
	//			std::cout << "创建失败@_@" << std::endl;
	//		}

	//		break;
	//	case 0:
	//		exit(0);
	//		break;
	//	default:
	//		std::cout << "你好像输入了奇怪的东西@_@" << std::endl;
	//		break;
	//	}
	//}

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
		std::cout << "已经将" << insert_num << "插入到第八个位置." << std::endl;
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
		std::cout << "已经将第八个位置的元素弹出." << std::endl;
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

void Main_Menu()
{
	std::cout << "请选择: " << std::endl;
	std::cout << "1.新建线性表" << std::endl;
	std::cout << "0.退出" << std::endl;
}

void Second_Menu()
{
	std::cout << "请选择: " << std::endl;
	std::cout << "1.销毁当前线性表" << std::endl;
	std::cout << "2.清空当前线性表" << std::endl;
	std::cout << "3.查看当前线性表是否为空" << std::endl;
	std::cout << "4.查看当前线性表是长度" << std::endl;
	std::cout << "5.获得某个位置的元素" << std::endl;
	std::cout << "6.获得某个位置的前一个元素" << std::endl;
	std::cout << "7.获得某个位置的后一个元素" << std::endl;
	std::cout << "8.在某个位置的注入一个元素" << std::endl;
	std::cout << "9.删除某个位置的元素" << std::endl;
	std::cout << "11.输入元素" << std::endl;
	std::cout << "12.查看所有元素" << std::endl;
	std::cout << "0.返回" << std::endl;
}