#define MAXSIZE 20
typedef int ElemType;

//ʹ��typedef����struct(�ṹ������) SqList; 
typedef struct
{
	ElemType data[MAXSIZE];//���Ա�Ԫ�أ����Ա�����ɵ��������ΪMAXSIZE 
	int Length; //���Ա�ǰ���� 
}SqList;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int status; 

status GetElem(SqList L,int i,ElemType *e)
{
	if(L.Length==0 || i<1 || i>L.length) return ERROR;
	*e = L.data[i-1];
	return OK; 
}

status ListInsert(SqList *L,int i,ElemType e)
{
	int k;
	if(L->Length==MAXSIZE) return ERROR; //����������� 	L->Length �൱�� (*L).Length 	 
}
