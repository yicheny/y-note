#include <stdio.h>

int main(void) {
	int num = 10;

	//printf("%d\n",num % 3);
	switch(num % 3) {
		case 0:
			puts("���Ա�3����");
			break;
		case 1:
			puts("��3����������1");
			break;
		case 2:
			puts("��3����������2");
			break;
		default:
			puts("����쳣��");
			break;
	}

	return (0);
}
