int typedef ElemType;

//˫����
typedef struct DLinkList
{
	ElemType data;
	struct DLinkList *prior;
	struct DLinkList *next;
}DLinkList;

void CreateDListF(DLinkList *&L, ElemType a[], int n);//ͷ�巨����˫����
void CreateDListR(DLinkList *&L, ElemType a[], int n);//β�巨����˫����
int FindNode(DLinkList *&L, ElemType e);//����ָ��Ԫ��ֵ�Ľڵ�
int ListInsert(DLinkList *&L, int i, ElemType e);//����Ԫ��
int ListDelete(DLinkList *&L, int i);//ɾ��Ԫ��
void example_2_4_12(DLinkList *&L, int x,int y);//��2-4-12
void example_2_4_14(DLinkList *&L);//��2-4-14
void example_2_4_15(DLinkList *&L);//��2-4-15