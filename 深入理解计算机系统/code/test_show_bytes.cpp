#include <stdio.h>

typedef unsigned char *byte_pointer;

//size_t ��32λ������ͨ��������Ϊ unsigned int; ��64λ�����ϱ�����Ϊunsigned long
//��16λ�����ϣ�unsigned int�����ֵλ65535��int���ֵΪ32767
//һ��ʹ��size_t����ʾ��ƽ̨�������ܳ��ֵĶ����С 
//���ݶ��壬size_t�Ǻ���sizeof�ؼ��������������� 
void show_bytes(byte_pointer start, size_t len){
	size_t i;
	for(i=0; i<len; i++)
		// "%.2x"�������������������������ֵ�ʮ��������� 
		printf("%.2x",start[i]); 
	printf("\n");
} 

void show_int(int x){
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(void){
	int num = 12345;
	test_show_bytes(num);
	return (0);
} 
