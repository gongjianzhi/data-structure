
int typedef ElemType;

//������
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LinkList;

void CreateListF(LinkList *&L, ElemType a[], int n);//����ͷ�巨����������
void CreateListR(LinkList *&L, ElemType a[], int n);//����β�巨����������
int LocateElem(LinkList *&L, ElemType e);//��Ԫ��ֵ����
void ListInstert(LinkList *&L, ElemType e, int i);//��������
void ListDelete(LinkList *&L, int i);//ɾ������
void Merge(LinkList *L1, LinkList *L2, LinkList *&L3);//�鲢��������
//////////////////////////////////////////////////////
int example_2_3_23(LinkList *&L, ElemType e);//��2_3_23
void example_2_3_26(LinkList *&L);//��2_3_26
void example_2_3_28(LinkList *&L);//��2_3_28
void example_2_3_29(LinkList *&A,LinkList *&B);//��2_3_29
void example_2_3_34(LinkList *&L,ElemType e);//��2_3_34
void example_2_3_36(LinkList *&L, ElemType min,ElemType max);//��2_3_36
void example_2_3_38(LinkList *&L);//��2_3_38
void example_2_3_40(LinkList *&L1 ,LinkList *&L2,LinkList *&L3);//��2_3_40
void example_2_3_42(LinkList *&L1, LinkList *&L2, LinkList *&L3);//��2_3_42