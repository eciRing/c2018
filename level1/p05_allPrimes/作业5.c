#include <stdio.h>
#include<time.h>/*��ʱ���й�*/

int Prime(int value);

int main()
{
	int i;
	time_t start, end;
	start = clock();

	{for (i = 2; i <= 1000; i++)
		if (Prime(i))  /*�����ж���������*/
			printf("%d\n", i); }
	end =clock();
	
	printf("���ķ���ʱ��Ϊ��%f\n", (double)end-start);
	system("pause");
	return 0;
}



int Prime(int value)
{
	int i;
	for (i = 2; i < value; i++)
		if (value % i == 0)
			return 0;
	
	return 1;
}