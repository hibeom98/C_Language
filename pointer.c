#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/* �������� ũ�� */
//#include <stdio.h>
//
//int main() {
//	int *pi;		
//	double *pd;
//	char *pc;
//
//	printf("int���� ������ ũ�� : %d \n", sizeof(pi));
//	printf("double���� ������ ũ�� : %d \n", sizeof(pd));
//	printf("char���� ������ ũ�� : %d \n", sizeof(pc));
//
//	printf("int* �� ������ ũ�� : %d \n", sizeof(int *));
//	printf("double* �� ������ ũ�� : %d \n", sizeof(double *));
//	printf("char* �� ������ ũ�� : %d \n", sizeof(char *));
//
//	return 0;
//}

// �������� �ʱ�ȭ
// �����Ϳ� ���� ���� �ּҸ� �����ؼ��� �ȵ�
//int *ptr = (int *)0x123456;	---> �޸� �ּҸ� ���� ����ϸ� �ɰ��� ���� �߻� ���ɼ� 

//� ������ �ּҷ� �ʱ�ȭ ���� �� �� ������ 0���� �ʱ�ȭ
//int *ptr = 0;						// 0 ���� �ʱ�ȭ ����
//int *ptr = NULL;					// NULL ������ �ʱ�ȭ (����)




/*������ �ּҰ��� �˰�ʹٸ� &�� ����Ѵ�*/
/*&������ */

//int main() {
//	int a;
//	a = 2;
//
//	printf("%p \n", &a);
//	return 0;
//}


/* �������� ���� */
//int main() {
//	int *p;				// ������ ����
//	int a;				// a ���� ����
//	p = &a;				// �����Ϳ� ������ �ּҰ��� �־� �ʱ�ȭ
//	printf("������ p �� ��� �ִ� �� : %p \n", p);
//	printf("int ���� a �� ����� �ּ� : %p \n", &a);
//	return 0;
//}


/*������*/
//int main() {
//	int *p;
//	int a;
//
//	p = &a;
//	a = 2;
//
//	printf("a�� �� : %d \n", a);
//	printf("*p�� �� : %d \n", *p);
//
//	return 0;
//}

//int main() {
//	int *p;
//	int a;
//
//	p = &a;
//	*p = 3;
//
//	printf("a�� �� : %d \n", a);
//	printf("*p�� �� : %d \n", *p);
//
//	return 0;
//}


/* �����͵� �����̴� */
//int main() {
//	int a;
//	int b;
//	int *ptr;		//������ ���� ����
//
//	ptr = &a;		
//	*ptr = 2;
//	ptr = &b;		// �����Ϳ� ���� b�� �Է�
//	*ptr = 3;		
//
//	printf("a�� �� : %d \n", a);
//	printf("b�� �� : %d \n", b);
//
//	return 0;
//}

/* const �������� *���� */
//�����Ͱ� ����Ű�� ������ ���� ������ �� ����
// ������ �ڽ��� ���� ������ �� ����
// ������ ����� NULL �� �ʱ�ȭ �ϰ�, ���ϴ� ������ Ư�� ������ �ּҸ� �����Ͽ� ��� ����


/* ��� ������ 1 */
//int main() {
//	int a;
//	int b;
//	const int *ptr = &a;
//
//	*ptr = 3;	// �����ʹ� a�� �����ϰ� �ֱ� ������ B �� �Է� �� ���� �߻� 
//	ptr = &b;	// ���� ����
//
//	return 0;
//}

/*�������� CONST *���� */
// ������ �ڽ��� ��(����� �ּ�)�� ���� �Ұ���
// �ٸ� ���� ����ų �� ����
// �����Ͱ� ����Ű�� ������ ���� ���� ����

//int main() {
//	int a;
//	int b;
//	int *const ptr = &a;
//
//	*ptr = 3;	// ���� ����
//	ptr = &b;	// ���� �߻�
//
//	return 0;



/*�������� ����*/

//int main() {
//	int a;
//	int *pa;
//	pa = &a;
//
//	printf("pa �� �� : %p \n", pa);
//	printf("(pa + 1) �� �� : %p \n", pa + 1);
//
//	return 0;
//}

/* �ٸ� Ÿ���� ������ �� ���� */
//#include <stdio.h>
//int main() {
//	int a;
//	char b;
//	double c;
//	int *pa = &a;
//	char *pb = &b;
//	double *pc = &c;
//
//	printf("pa �� �� : %p \n", pa);
//	printf("(pa + 1) �� �� : %p \n", pa + 1);
//	printf("pb �� �� : %p \n", pb);
//	printf("(pb + 1) �� �� : %p \n", pb + 1);
//	printf("pc �� �� : %p \n", pc);
//	printf("(pc + 1) �� �� : %p \n", pc + 1);
//
//	return 0;
//}

/* �������� ���� */

//int main() {
//	int a;
//	int *pa = &a;
//	int *pb;
//
//	*pa = 3;
//	pb = pa;
//
//	printf("pa �� ����Ű�� �ִ� �� : %d \n", *pa);
//	printf("pb �� ����Ű�� �ִ� �� : %d \n", *pb);
//
//	return 0;
//}

/* �迭�� ���� Ȯ�� */
//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int i;
//
//    for (i = 0; i < 10; i++) 
//    {
//        printf("arr[%d] �� �ּҰ� : %p \n", i, &arr[i]);
//    }
//    return 0;
//}

/* �����ͷ� �迭�� ���� */

//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int *parr;
//    int i;
//    parr = &arr[0];
//
//    for (i = 0; i < 10; i++) {
//        printf("arr[%d] �� �ּҰ� : %p ", i, &arr[i]);
//        printf("(parr + %d) �� �� : %p ", i, (parr + i));
//
//        if (&arr[i] == (parr + i)) {
//            /* ���� (parr + i) �� ���������� arr[i] �� ����Ų�ٸ� */
//            printf(" --> ��ġ \n");
//        }
//        else {
//            printf("--> ����ġ\n");
//        }
//    }
//    return 0;
//}



/* *�����ڸ� �̿��� �迭��� ���� */
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *parr;
//
//	parr = &arr[0];
//
//	printf("arr[3] = %d\n *(parr + 3) = %d \n", arr[3], *(parr + 3));
//	return 0;
//}
//

/*�迭 [0]�� �ּҰ��� ����*/
// �迭�� �̸� arr �� arr[0] �� �ּҰ��� �����ϴ�.
// �迭�� �̸��� ù ��° ���Ҹ� ����Ű�� �����ʹ� �ƴϴ� !!
//int main() {
//	int arr[3] = { 1, 2, 3 };
//
//	printf("arr �� ��ü : %p \n", arr);
//	printf("arr[0] �� �ּҰ� : %p \n", &arr[0]);
//
//	return 0;
//}


/* sizeof(ũ��) �����ڸ� �̿��� Ȯ�� */

// C ��� �󿡼� �迭�� �̸��� sizeof �����ڳ� �ּҰ� ������(& / ���� ��� &arr) �� ���� ���� ���� 
// ��츦 �����ϸ�, �迭�� �̸��� ���� �Ϲ������� ù ��° ���Ҹ� ����Ű�� �����ͷ� Ÿ�� ��ȯ�� �ȴ�.

//int main() {
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int *parr = arr;
//
//	printf("Sizeof(arr) : %d \n", sizeof(arr));
//	printf("Sizeof(parr) : %d \n", sizeof(parr));
//}

/*1���� �迭 ����Ű��*/
// sizeof �� �ּҰ� ������(&)�� �Բ� ����� ���� �����ϸ�,�迭�� �̸��� ù ��° ���Ҹ� ����Ų��
// arr[i] �� ���� ������ ��� �����Ϸ��� ���� *(arr + i)�� ��ȯ�ȴ�.

//int main() {
//	int arr[3] = { 1, 2, 3 };
//	int *parr;
//
//	parr = arr;
//	//    parr = &arr[0]; ����    
//
//	printf("arr[1] : %d \n", arr[1]);
//	printf("parr[1] : %d \n", parr[1]);
//	return 0;
//}

/* ������ �̿��� ���� */
//
//int main() {
//    int arr[10] = { 100, 98, 97, 95, 89, 76, 92, 96, 100, 99 };
//
//    int *parr = arr;		// ������ ����� ���ÿ� �ʱⰪ &arr[0] �ּҰ��� �־���
//    int sum = 0;
//
//    while (parr - arr <= 9) {
//        sum += (*parr);	// �����Ͱ� ����Ű�� �ּ��� value�� ���� �ջ�
//        parr++;			// ������ �ּҰ��� ����������
//    }
//
//    printf("�� ���� ���� ��� : %d \n", sum / 10);
//    return 0;
//}

/* �������� ������*/

//	int main() 
//{
//	int a;
//	int *pa;
//	int **ppa;
//
//	pa = &a;		// pa�� a�� �ּҸ� ������ ����
//	ppa = &pa;		// ppa�� �����ͺ��� pa�� �ּ�
//
//	a = 3;
//
//	printf("a�� �� : %d || *pa�� �� : %d || **ppa�� �� : %d \n", a, *pa, **ppa);
//	printf("a�� �ּ� : %p || pa�� ����Ű�� �ּ� : %p || *ppa�� ���� �� : %p \n",
//		&a, pa, *ppa);
//	printf("pa�� �ּ� : %p || ppa�� ����Ű�� �ּ� : %p \n", &pa, ppa);
//
//	return 0;
//}


/* int a[2][3]�� �ǹ� */

//int main() {
//	int arr[2][3];
//
//	printf("arr[0] : %p \n", arr[0]);
//	printf("&arr[0][0] : %p \n", &arr[0][0]);
//
//	printf("arr[1] : %p \n", arr[1]);
//	printf("&arr[1][0] : %p \n", &arr[1][0]);
//
//	return 0;
//}


/* 2���� �迭�� ���� ��� */

//	int main() {
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//
//	printf("��ü ũ�� : %d \n", sizeof(arr));
//	printf("�� ���� ���� : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	printf("�� ���� ���� : %d \n", sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}

/* ������ �迭 */

//int main() {
//	int *arr[3];
//	int a = 1, b = 2, c = 3;
//	arr[0] = &a;
//	arr[1] = &b;
//	arr[2] = &c;
//
//	printf("a : %d, *arr[0] : %d \n", a, *arr[0]);
//	printf("b : %d, *arr[1] : %d \n", b, *arr[1]);
//	printf("b : %d, *arr[2] : %d \n", c, *arr[2]);
//
//	printf("&a : %p, arr[0] : %p \n", &a, arr[0]);
//	return 0;
//}


/* arr3 �迭�� 3��° �迭���(value = 23)�� �����ϴ� ���� */
//int main() {
//	int arr1[4] = { 1 ,2, 3, 4 };
//	int arr2[4] = { 11, 12, 13, 14 };
//	int arr3[4] = { 21, 22, 23, 24 };
//
//	int *ptr_arr[3] = { arr1, arr2, arr3 }; // ������ �迭�� �� �迭�� �ʱ�ȭ
//
//	int i, j;
//
//	for (i = 0; i < 3; i++) 
//	{
//		for (j = 0;j < 4; j++)
//		{
//			printf("%5d", ptr_arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*  ��������  ++ , -- ���� */
// p++ , ++p : p�� ����Ű�� �������� 1�� ũ�⸸ŭ �ּҸ� ����
// p-- , --p : p�� ����Ű�� �������� 1�� ũ�⸸ŭ �ּҸ� ����

//int main() {
//	int arr[3] = { 1,2,3 };
//	int *p = &arr[0];
//
//	for (int i = 0; i < 3; i++, p++)
//	{
//		printf("p = %p ,", p);
//		printf("*p = %d\n", *p);
//	}
//	return 0;
//}

/* ��������  ++ , -- ����  */
// ���� �����ڿ� ���� �����ڸ� �Բ� ����� ���� ������ �켱 ������ �Ű��� ��.
// *p++ �� *(p++)�� �ǹ���
// *(p+1) ������ p �� �ּҰ��� ������.

//int main() {
//	for (int i = 0; i < 5; i++)
//	{
//		printf("p = %p ,", p);
//		printf("*p = %d\n", *p++);
//	}
//}

// call by value/ call by reference
// �������� ����  / �ּҰ��� ���� ����

//int swap_value(int i) {
//	
//	i = 3;
//	return 0;
//}
//
//int main()
//{
//	int i = 5;
//	printf("ȣ�� ������ i ��: %d\n", i);
//	swap_value(i);
//	printf("ȣ�� ������ i ��: %d\n", i);
//
//
//}

//int swap_value(int *ptr_i) {
//	printf("-------swap_value �Լ��� -----");
//	printf("ptr_i�� �� : %p\n", ptr_i);
//	printf("ptr_i�� ����Ű�� ���� �� : %d\n\n", *ptr_i);
//	*ptr_i = 3;
//	printf("------- SWAP_Value �Լ� �� ------\n");
//	return 0;
//}
//
//int main() {
//	int i = 0;
//	printf("i������ �ּҰ�: %p\n\n", &i);
//	printf("ȣ�� ������ i ��: %d\n", i);
//	swap_value(&i);
//	printf("ȣ�� ������ i ��: %d\n", i);
//}

//int swap_value(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	return 0;
//}
//
//int main() {
//	int i, j;
//	i = 3;
//	j = 5;
//	printf("swap  ���� : i �� %d, j�� �� %d \n\n", i, j);
//	swap_value(&i, &j);
//	printf("swap  ���� : i �� %d, j�� �� %d \n\n", i, j);
//
//}

/*�迭 ���ڷ� �ޱ�*/

int add_number(int *ptr_arr){

int i;
for ( i = 0; i < 3; i++)
	{
	ptr_arr[i]= ptr_arr[0]+1 ; // �迭�� ��ҿ� 1�� ����
	}			  
return 0;
}


int main() {
	int arr[3];
	int i;
	printf("3���� ������ �Է�:");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	add_number(arr);
	printf("�迭�� �� ����: %d,%d,%d\n", arr[0]);
	return 0;
}