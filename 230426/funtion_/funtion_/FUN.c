#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Function(�Լ�)
// �Լ���? : �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� 
//          ���������� ����� ���α׷� ����

// C���� ũ�� ǥ���Լ� , ����������Լ�
// �Լ���� ���� 
// 1. �ݺ����� ���α׷� --> Ư���� �۾� �ݺ��� ���ϱ� ����
// 2. �Լ��� �ۼ� ---> ���ȭ�� ���� ---> �������� �������� --> ���������� ��������.
// 3. �Ϲ������� �ϳ��� ����� �ϳ��� �Լ��� �ۼ��Ѵ�.

//int sum(int x, y)		// X,Y�� �Ű����� ���
//{
//	/*�Լ� ��ü*/
//}



/* �⺻���� �Լ� ���� �� �Լ� ȣ�� */

//int print_hello() {
//	printf("Hello World ! \n");
//	return 0;
//}
//
//int main() {
//
//	printf("�Լ��� �ҷ����ô� : ");
//	print_hello();
//
//	printf("�Լ��� �� !! �ҷ� ���ô� : ");
//	print_hello();
//
//	return 0;
//}


//
//int print_hello()
//{
//	printf("Hello World \n");
//	return 0;
//}

//�Լ��� �̸� ��� --> ��Ȯ�ϰ� ����� �ϴ���


//void f1(void)
//{
//
//}
//void play_video()
//{
//
//}
// �ĺ��� ���� ��Ģ
// �ϰ��� ��� ��Ģ
// �����̸� �Լ��� ���� ���� ���� 

//void play_video(void) // �Ű������� ���� �Լ�
//{
//	printf("��ȯ����");
//}



/* �Ű������� ���� �ڵ� */

//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int a, b, sum;
//	a = 3;
//	b = 5;
//	sum = add(a, b);
//
//	printf("a�� b�� ���� : %d\n", sum);
//	printf("a�� 10�� ���� : %d\n", add(a, 10));
//
//	return 0;
//}

// �Լ��� �ۼ��� �Լ��� ���ϰ��� �ڷ���, �Լ��� ����, �Լ��� ������ �ʿ��ϴ�.
// �Լ��� ���ڴ� �ݵ�� ������ �ڷ����� �°� �־ ȣ��
// �Լ� �̸� �ߺ� ����
// �Լ��� --> �ĺ��� ���� ����
// �Լ��� ���ϰ��� ���� void�� �Լ��� �ƴϸ� �ݵ�� return�� ���� �ؾ� ��


/* ��ũ�� ����� �̿��� �Լ� ���� */
//#define add(x,y)(x + y)
//int main()
//{
//
//	int a, b, sum;
//	a = 3;
//	b = 5;
//	sum = add(a, b);					// add(3+5)
//	printf("a��b�� ���� : %d\n", sum);
//	printf("a��10�� ���� : %d\n", add(a, 10));
//	return 0;
//}


// ������ ��ȿ����
// ��������(Local variable)
// ��������(Global variable)
// ��������(Static variable)
// �������� ����(Resister variable)

// ��������
// "���" ������ ����� ����
// ������ ����� "���" �������� ��ȿ, ����� ����Ǹ� �޸𸮿��� �����
// ���������� �޸𸮻��� ���ÿ����� ����Ǹ�, �ʱ�ȭ ���� ������ Trash ������ �ʱ�ȭ ��
// �Լ��� �Ű����ҵ� �Լ������� ���ǵǴ� ���������� ��޵ȴ�.

/* �������� */
//void local(void);		//�Լ� ���� ����

//void local(void);		//�Լ� ���� ����
//
//int main() {
//	int i = 5;
//	int var = 10;
//
//	printf("main() �Լ����� �������� var�� ���� : %d \n", var);
//	if (i < 10)
//	{
//		local();
//		int var = 30;
//		printf("if������ �������� var�� ���� : %d \n", var);
//	}
//	printf("���� �������� var�� ���� : %d \n", var);
//	return 0;
//}
//void local(void) {
//	int var = 20;
//	printf("local() �Լ����� �������� var�� ���� : %d \n", var);
//}


 //��������
 //�Լ� �ܺο��� ����� ����
 //���α׷��� ��𿡼��� ����, ���α׷��� ���� �Ǿ�� �޸� �����
 //���������� �޸𸮻󿡼� date������ ����
 //���� �ʱ�ȭ ���� �ʾƵ� 0���� �ڵ������� �ʱ�ȭ �ȴ�.


/* �������� �� */
//void local(void);		// �Լ� ���� ����
//int var;				// �������� ����
//
//int main() {
//	printf("�������� var�� �ʱⰪ�� : %d \n", var);
//	int i = 5;
//	int var = 10;		// �������� ����
//	printf("main()�Լ����� �������� var�� ���� : %d \n", var);
//
//	if (i < 10)
//	{
//		local();
//		printf("���� ���� var�� ���� : %d \n", var);	// ���������� ����
//	}
//
//	printf("�� �̻� main()�Լ������� �������� var�� ������ �� �����ϴ�. \n");
//	return 0;
//}
//
//void local(void) {
//	var = 20;
//	printf("local()�Լ������� ������ �������� var�� ���� : %d \n", var);
//}

//��������(Static)
// Static���� ���ǵ� ����
// ���������� ���������� Ư¡�� ��� ������ �ִ�
// �Լ������� ����� ���������� ��������ó�� �� �ѹ��� �ʱ�ȭ�ȴ�.(���� �����, �� 1��)
// ���α׷��� ����Ǿ�� �޸𸮿��� ����
// ���������� ��������ó�� �ش� �Լ��������� ���� ����

/*�������� ��*/
//void local(void);	  // �Լ� ���� ����
//void staticVar(void); // �Լ� ���� ����
//
//int main() {
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		local();
//		staticVar();
//	}
//	return 0;
//}
//
//void local(void) {
//	int count = 1;
//	printf("local()�Լ��� %d��° ȣ��Ǿ����ϴ�. \n", count);
//	count++;
//}
//
//void staticVar(void) {
//	static int static_count = 1;	// ���������� �ʱ�ȭ
//	printf("staticVar()�Լ��� %d��° ȣ��Ǿ����ϴ�. \n\n", static_count);
//	static_count++;
//}


// �������� ����
// �������� ������ �������� ������ �� Resister Ű���带 �ٿ��� �����Ѵ�
// CPU�� �������� �޸𸮿� ������ �ȴ�.


/* �޸� �����Ҵ� */

//#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
//
//int main()
//{
//    int num1 = 20;    // int�� ���� ����
//    int *numPtr1;     // int�� ������ ����
//
//    numPtr1 = &num1;  // num1�� �޸� �ּҸ� ���Ͽ� numPtr�� �Ҵ�
//
//    int *numPtr2;     // int�� ������ ����
//
//    numPtr2 = malloc(sizeof(int));    // int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�
//
//    printf("%p\n", numPtr1);    //  ���� num1�� �޸� �ּ� ���
//    // ��ǻ�͸���, ������ ������ �޶���
//
//    printf("%p\n", numPtr2);     //  ���� �Ҵ�� �޸��� �ּ� ���
//    // ��ǻ�͸���, ������ ������ �޶���
//
//    free(numPtr2);    // �������� �Ҵ��� �޸� ����
//
//    return 0;
//}

/* �޸� �� �����ϱ� */
//#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
//
//int main()
//{
//    int* numPtr;    // int�� ������ ����
//
//    numPtr = malloc(sizeof(int));    // int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�
//
//    *numPtr = 10;   // �����͸� �������� �� �� �Ҵ�
//
//    printf("%d\n", *numPtr);    // 10: �����͸� �������Ͽ� �޸𸮿� ����� �� ���
//
//    free(numPtr);    // ���� �޸� ����
//
//    return 0;
//}


/* memset(v������, ������ ��, ũ��) */
//#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
//#include <string.h>    // memset �Լ��� ����� ��� ����
//
//int main()
//{
//    long long* numPtr = malloc(sizeof(long long));  // long long�� ũ�� 8����Ʈ��ŭ ���� �޸� �Ҵ�
//
//    memset(numPtr, 0x27, 8);    // numPtr�� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27�� ����
//
//    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27�� 8�� �� ����
//
//    free(numPtr);    // �������� �Ҵ��� �޸� ����
//
//    return 0;
//}


/* ����Լ�(��� ȣ��) */

//void p(int c)
//
//{
//	if (c == 0)	// ����Լ� Ż�� ����
//		return 0;
//	printf("����Լ� �Դϴ� %d\n", c);
//	p(c - 1);
//}
//
//int main() {
//	p(10);
//	return 0;
//}


/* ����Լ� */
//unsigned int factorial(int n);
//
//int main()
//{	
//
//	int i, n, result;
//
//	printf("���� �Է� : ");
//	scanf("%d", &n);
//
//	result = factorial(n);
//
//	printf("%d! = %d\n", n, result);
//
//	return 0;
//
//}
//
//unsigned int factorial(int n) {
//	if (n <= 1) return 0;
//	else return (n * factorial(n - 1));
//}

/* call by value */

//int swap_value(int i);
//
//int main() {
//
//	int i = 0;
//
//	printf("ȣ�� ���� i �� �� : %d \n", i);
//	swap_value(i);
//	printf("ȣ�� ���� i �� �� : %d \n", i);
//
//	return 0;
//}
//
//int swap_value(int i) {
//	i = 3;
//	return 0;
//}

/* Call by Reference */

int swap_value(int* ptr_i);

int main() {
	int i = 0;

	printf("i ������ �ּҰ� : %p \n\n", &i);
	printf("ȣ�� ������ i �� �� : %d \n", i);
	swap_value(&i);
	printf("ȣ�� ������ i �� �� : %d \n", i);

	return 0;
}

int swap_value(int* ptr_i) {
	printf("----- swap_vlaue �Լ� �ȿ��� ----- \n");
	printf("ptr_i �� �� : %p \n", ptr_i);
	printf("ptr_i �� ����Ű�� ���� �� : %d \n\n", *ptr_i);

	*ptr_i = 3;

	printf("------ swap_vlaue �Լ� �� ----- \n");

	return 0;
}