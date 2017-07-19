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
	//			std::cout << "�����ɹ�!" << std::endl;
	//		}
	//		else
	//		{
	//			std::cout << "����ʧ��@_@" << std::endl;
	//		}

	//		break;
	//	case 0:
	//		exit(0);
	//		break;
	//	default:
	//		std::cout << "�������������ֵĶ���@_@" << std::endl;
	//		break;
	//	}
	//}

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
		std::cout << "�Ѿ���" << insert_num << "���뵽�ڰ˸�λ��." << std::endl;
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
		std::cout << "�Ѿ����ڰ˸�λ�õ�Ԫ�ص���." << std::endl;
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

void Main_Menu()
{
	std::cout << "��ѡ��: " << std::endl;
	std::cout << "1.�½����Ա�" << std::endl;
	std::cout << "0.�˳�" << std::endl;
}

void Second_Menu()
{
	std::cout << "��ѡ��: " << std::endl;
	std::cout << "1.���ٵ�ǰ���Ա�" << std::endl;
	std::cout << "2.��յ�ǰ���Ա�" << std::endl;
	std::cout << "3.�鿴��ǰ���Ա��Ƿ�Ϊ��" << std::endl;
	std::cout << "4.�鿴��ǰ���Ա��ǳ���" << std::endl;
	std::cout << "5.���ĳ��λ�õ�Ԫ��" << std::endl;
	std::cout << "6.���ĳ��λ�õ�ǰһ��Ԫ��" << std::endl;
	std::cout << "7.���ĳ��λ�õĺ�һ��Ԫ��" << std::endl;
	std::cout << "8.��ĳ��λ�õ�ע��һ��Ԫ��" << std::endl;
	std::cout << "9.ɾ��ĳ��λ�õ�Ԫ��" << std::endl;
	std::cout << "11.����Ԫ��" << std::endl;
	std::cout << "12.�鿴����Ԫ��" << std::endl;
	std::cout << "0.����" << std::endl;
}