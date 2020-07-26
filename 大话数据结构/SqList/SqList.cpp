#define MAXSIZE 20
typedef int ElemType;

//使用typedef创建struct(结构体类型) SqList; 
typedef struct
{
	ElemType data[MAXSIZE];//线性表元素，线性表可容纳的最大数量为MAXSIZE 
	int Length; //线性表当前长度 
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
	if(L->Length==MAXSIZE) return ERROR; //超出最大容量 	L->Length 相当于 (*L).Length 	 
}
