
#define MAX_SIZE 50 //Ĭ�ϳ���Ϊ50

int typedef ElemType;

typedef struct
{
	ElemType data[MAX_SIZE];
	int length;
}SqList;

void InitList(SqList &L);//����յ�˳���L
int GetElem(SqList L, int i);//��ѯָ��λ��Ԫ��e
int LocateElem(SqList L, ElemType &e);//��Ԫ�ز���ָ��Ԫ��e
int ListInstert(SqList & L, ElemType e, int i);//����Ԫ��e
int ListDelete(SqList & L, ElemType e, int i);//ɾ��Ԫ��e
void Merge(SqList L1, SqList L2, SqList &L3);//�����Ĺ鲢�㷨
//////////////////////////////////////////
void example_2_2_11(SqList &L, ElemType e);//��2-2-11
void example_2_2_12(SqList &L);//��2-2-12
void example_2_2_13(SqList &L, int p);//��2-2-13
void example_2_2_14(SqList &L, ElemType e);//��2-2-14
void example_2_2_15(SqList &L, ElemType e1, ElemType e2);//��2-2-15
void example_2_2_16(SqList &L);//��2-2-16
void example_2_2_17(SqList &L);//��2-2-17