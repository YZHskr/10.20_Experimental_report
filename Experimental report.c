#include<stdlib.h>
#include<time.h>
#include<stdio.h>
	void Factorial() {
	int n,i,num;
	num = 1;
	printf("������n��ֵ��\n");
	scanf_s("%d", &n);
	for (i = 1; i < n; i++) 
		num = num * i;
	printf("%d\n" ,num);
}
	void test_rand() {
	int r = 0;
	int x = 0;
	srand((unsigned)time(NULL));
	r = rand() % 100 + 1;   
	do {
		printf("������µ�����\n");
		scanf_s("%d", &x);
		if (x < r) {
			printf("��С��\n");
		}
		else if (x > r) {
			printf("�´���\n");
		}
	} while (r != x);
	printf("�¶���\n");	
		}
	void GCD_LCM() {
	int num1, num2, t, p;
	printf("������������������\n");
	scanf_s("%d%d", &num1, &num2);      
	p = num1 * num2;
	while (t = num1 % num2)        
	{
		num1 = num2;               
		num2 = t;                 
	}
	p = p / num2;
	printf("���ǵ����Լ����%d\n", num2);
	printf("���ǵ���С��������%d\n", p);
}
	void PRINTF() {
		char arr[] = "*";
		printf("%6s\n", arr);
		char arr1[] = "***";
		printf("%7s\n", arr1);
		char arr2[] = "*****";
		printf("%8s\n", arr2);
		char arr3[] = "*******";
		printf("%9s\n", arr3);
		char arr4[] = "*****";
		printf("%8s\n", arr4);
		char arr5[] = "***";
		printf("%7s\n", arr5);
		char arr6[] = "*";
		printf("%6s\n", arr6);
		system("pause");
	}
int main()
  {
	Factorial();
	test_rand();
	GCD_LCM();
	PRINTF();
	return 0;
}