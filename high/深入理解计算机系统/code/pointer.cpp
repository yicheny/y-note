#include <stdio.h>

int test_1(void){
	//unsigned char�ֽ�ռ��һ���ֽڴ�С
	unsigned char a = 1;

	//&���ڻ�ȡ�ֽڱ�ţ�&a���Եõ�����a���ֽڵ�ַ
	//�������ַ�ʽ��ֵ�����ͺ��*��,����b�洢����a���ֽڱ��
	unsigned char* b = &a;

	//��ӡ�ֽڴ洢��ֵ
	printf("%d\n",*b);//���1 

	//��ӡ����b�洢���ֽڵ�ַ
	printf("%.2x",b);//���ʮ��λ����������62fe17
	
	return (0); 
}

int test_2(void){
	unsigned int c = 257;
	unsigned int* a = &c;
	unsigned char* b = (unsigned char*)&c;
	
	printf("%d\n",*a);//257
	printf("%d",*b);//1
	
	return (0);
} 

int main(void){
//	test_1();
	test_2(); 
	
	return (0);
} 


