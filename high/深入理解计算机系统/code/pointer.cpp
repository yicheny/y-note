#include <stdio.h>

int test_1(void){
	//unsigned char字节占据一个字节大小
	unsigned char a = 1;

	//&用于获取字节编号，&a可以得到变量a的字节地址
	//利用这种方式赋值【类型后跟*】,变量b存储的是a的字节编号
	unsigned char* b = &a;

	//打印字节存储的值
	printf("%d\n",*b);//输出1 

	//打印变量b存储的字节地址
	printf("%.2x",b);//输出十六位整数，比如62fe17
	
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


