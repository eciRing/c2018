#include<stdio.h>

int main() {

	int  a, b, c,value;
	
		printf("ˮ�ɻ�����ĿΪ��");
	
		for (int i = 100; i < 1000; i++) {
			a = i % 10;/*��λ*/
			b = i / 10 % 10;/*ʮλ*/
			c = i / 100;/*��λ*/
			if (c * 100 + b * 10 + a == a*a*a + b*b*b + c*c*c) {
				printf("%d\n", i);
			}
			
		}
		
		
	
	system("pause");
	return 0;
}
