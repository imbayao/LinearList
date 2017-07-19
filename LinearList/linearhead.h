#ifndef linearhead
#define linearhead

#define LIST_INIT_SIZE 100	//线性表存储空间的初始分配量
#define LISTINCREMENT 10	//线性表存储空间的分配增量
struct SqList
{
	int * elem;
	int length;
	int listsize;
};

bool InitList_Sq(SqList &L);
void DestroyList_Sq(SqList &L);
void ClearList_Sq(SqList &L);
bool ListEmpty(SqList L);
int ListLength(SqList L);
int GetElem(SqList L, int i);
int PriorElem(SqList L, int cur_e);
int NextElem(SqList L, int cur_e);
bool ListInsert_Sq(SqList &L, int i, int e);
bool ListDelete_Sq(SqList &L, int i);
void InputList_Sq(SqList &L);
void ListTraverse(SqList L);



#endif // !linearhead