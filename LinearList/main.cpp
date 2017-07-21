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
	std::cout << "�������Ա�ĳ���Ϊ��" << test << std::endl;
	test1 = GetElem(list, 10);
	std::cout << "���Ա��е�10����Ϊ��" << test1 << std::endl;
	int next_num;
	next_num = NextElem(list, 5);
	std::cout << "���Ա��е�3�����ĺ�һ����Ϊ��" << next_num << std::endl;
	int pre_num;
	pre_num = PriorElem(list, 3);
	std::cout << "���Ա��е�3�����ĺ�һ����Ϊ��" << pre_num << std::endl;
	int insert_num = 4;
	if (ListInsert_Sq(list, 8, insert_num))
	{
		std::cout << "ע��ɹ�!" << std::endl;
		std::cout << "�Ѿ���" << insert_num << "���뵽��8��λ��." << std::endl;
		std::cout << "�������Ա�ĳ���Ϊ��" << ListLength(list) << std::endl;
		std::cout << "���Ա��е�8����Ϊ��" << GetElem(list, 8) << std::endl;
		std::cout << "���Ա��е�9����Ϊ��" << GetElem(list, 9) << std::endl;
	}
	else
	{
		std::cout << "ע��ʧ��@_@" << std::endl;
	}
	if (ListDelete_Sq(list, 8))
	{
		std::cout << "�����ɹ�!" << std::endl;
		std::cout << "�Ѿ�����8��λ�õ�Ԫ�ص���." << std::endl;
		std::cout << "�������Ա�ĳ���Ϊ��" << ListLength(list) << std::endl;
		std::cout << "���Ա��е�8����Ϊ��" << GetElem(list, 8) << std::endl;
		std::cout << "���Ա��е�9����Ϊ��" << GetElem(list, 9) << std::endl;
	}
	else
	{
		std::cout << "����ʧ��@_@" << std::endl;
	}
	ListTraverse(list);
	return 0;
}