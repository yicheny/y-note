#include <stdio.h>

typedef unsigned char *byte_pointer;

//size_t 在32位机器上通常被定义为 unsigned int; 在64位机器上被定义为unsigned long
//在16位机器上，unsigned int的最大值位65535，int最大值为32767
//一般使用size_t来表示该平台上最大可能出现的对象大小 
//根据定义，size_t是函数sizeof关键字运算结果的类型 
void show_bytes(byte_pointer start, size_t len){
	size_t i;
	for(i=0; i<len; i++)
		// "%.2x"表明整数必须用至少两个数字的十六进制输出 
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
