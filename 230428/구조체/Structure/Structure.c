#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� �ٸ� �ڷ��� �ѵ��̷� ���´�
// ����ü ���� ��ġ
// �Լ���: ���ǵ� �Լ� �� ������ ��밡��
// �Լ���: �ҽ����� ���ۿ� ���� ��ü���� ��밡��
// ����ü ������ �޸𸮿� �Ҵ� �� �� ������� ����� ������� �Ҵ�

/* ����ü ���� �� ���� ���� 1 */
//struct human {		// Human �̶�� ����ü ����
//	int age;		// ����
//	int height;		// Ű
//	int weight;		// ������
//};					// �������� �����ݷ� ���� !!
//
//int main() {
//	struct human info;	// ����ü ���� ����
//
//	info.age = 99;
//	info.height = 185;
//	info.weight = 80;
//
//	printf("info �� ���� ���� \n");
//	printf("����   : %d \n", info.age);
//	printf("Ű     : %d \n", info.height);
//	printf("������ : %d \n", info.weight);
//
//	return 0;
//}


/* ����ü ���� �� ���� ���� 2 */
//#include <string.h>
//
//struct contact {								// ����ó ����ü
//	char name[20];								// �̸�
//	char phone[20];								// ��ȭ��ȣ
//	int ringtone;								// ���Ҹ� (0~9) ����
//};
//
//int main() {
//
//	struct contact ct = { "�輮��", "01012345678", 0 };
//	struct contact ct1 = { 0 }, ct2 = { 0 };		// ����� 0���� �ʱ�ȭ
//
//	ct.ringtone = 5;								// ct���� ringtone�� 0���� �ٲ�
//	strcpy(ct.phone, "01000008765");				// ct���� phone�� �ٲ�
//	printf("��    �� : %s \n", ct.name);
//	printf("��ȭ��ȣ : %s \n", ct.phone);
//	printf("�� �� �� : %d \n", ct.ringtone);
//
//	strcpy(ct1.name, "������");						// ������ ����ü ct1 �� name�� ����
//	strcpy(ct1.phone, "01188889999");				// ct1 �� phone ����
//	ct1.ringtone = 1;								// ct1 �� ringtone ����
//	printf("��    �� : %s \n", ct1.name);	
//	printf("��ȭ��ȣ : %s \n", ct1.phone);
//	printf("�� �� �� : %d \n", ct1.ringtone);
//
//	// ����ó�� �޾ƺ���
//	printf("��  �� : ");
//	scanf("%s", ct2.name);						// �迭������ ����
//	printf("��ȭ��ȣ : ");
//	scanf("%s", ct2.phone);						// �迭������ ����
//	printf("���Ҹ�(0~9) : ");
//	scanf("%d", &ct2.ringtone);					// �ּ� ������ ����
//	printf("��    �� : %s \n", ct2.name);
//	printf("��ȭ��ȣ : %s \n", ct2.phone);
//	printf("�� �� �� : %d \n", ct2.ringtone);
//
//	return 0;
//
//}

// ����ü �������� ���� ���迬���� �񱳺Ұ�
/*typedef */// ������ ���������� ���� ����(Alias)
	


/*typedef ����*/
//typedef unsigned int myUnsignedInteger;	// �ڷ��� ������
//
//int main() {
//
//	myUnsignedInteger num;				// �����ǵ� �ڷ��� �̸�
//
//	num = 10;
//
//	printf("Num : %d \n", num);
//
//	return 0;
//}

/*typedef ����2*/

// �ڷ����� �ѱ۷� ���Ǵ� ���� �ʴ°� ����
//typedef char		����Ʈ_1��;
//typedef int			����Ʈ_4��;
//typedef double		����Ʈ_8��;
//
//int main() {
//
//	����Ʈ_1�� ���ڿ�[100] = "�ѱ��� ����";
//	����Ʈ_4�� ���� = 100;
//	����Ʈ_8�� �Ǽ� = 20.55;
//
//	printf("���ڿ� : %s \n", ���ڿ�);
//	printf("����   : %d \n", ����);
//	printf("�Ǽ�   : %.2f \n", �Ǽ�);
//
//	return 0;
//}

/*typedef ����3*/
//typedef struct food
//{
//	char name[10];
//	int iPrice;
//	int iCookTime;
//	int iPreference;
//}FOOD;					// ����ü ������ �ƴ� ������ �� ������ �̸�
//
//int main() {
//
//	FOOD Food = { "���", 3500, 3, 5 };
//
//	printf("���� �̸� : %s \n", Food.name);
//	printf("���� ���� : %d \n", Food.iPrice);
//	printf("���� �ð� : %dm \n", Food.iCookTime);
//	printf("���� �� : %d�� \n", Food.iPreference);
//
//	return 0;
//}


/*typedef�� �̿��� ����ü �迭1*/
//typedef struct contact
//{
//	char name[20];
//	char phone[20];
//	int  ringtone;
//}CONTACT;
//
//int main() {
//
//	CONTACT arr[] = {
//		{"�輮��", "01011112222", 0},
//		{"������", "01044445555", 1},
//		{"������", "01088883333", 2}
//	};
//
//	int size = sizeof(arr) / sizeof(arr[0]);		// �迭�� ũ�� 
//	int i;
//
//	printf(" �̸�        ��ȭ��ȣ     ���Ҹ� \n");
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%s %15s %5d\n", arr[i].name ,arr[i].phone, arr[i].ringtone);
//	}
//
//	return 0;
//}

/*typedef�� �̿��� ����ü �迭 �˻� */
//#include <stdlib.h>
//#define STR_SIZE 20
//
//typedef struct contact
//{
//	char name[STR_SIZE];
//	char phone[STR_SIZE];
//	int ringtone;
//} CONTACT;
//
//int main() {
//
//	CONTACT arr[] = {				// �迭 �ʱ�ȭ
//		{"�輮��", "01011112222", 0},
//		{"������", "01044445555", 1},
//		{"������", "01088883333", 2},
//		{"�賲��", "01088883333", 3},
//		{"�ڿ븸", "01088883333", 4},
//		{"��â��", "01088883333", 5}
//	};
//
//	int size = sizeof(arr) / sizeof(arr[0]);	// �迭�� ũ��
//	int i;
//	char name[STR_SIZE];		// �Է¹��� �̸��� ������ ���� �迭
//	int index;
//
//	printf(" �̸��� �����ÿ� : ");
//	scanf("%s", name);			// �迭���̱� ������ & ��� ��
//
//	index = -1;
//	for (i = 0; i < size; i++)
//	{
//		if (strcmp(arr[i].name, name) == 0) {
//			index = i;
//			break;
//		}
//	}
//	if (index >= 0)
//	{
//		printf("%s �� ��ȭ��ȣ : %s \n", arr[index].name, arr[index].phone);
//	}
//	else
//	{
//		printf("����ó�� ã���� ���� \n");
//	}
//
//	return 0;
//}

/*����ü ������ ������*/
//struct test
//{
//	int a, b;
//};
//
//int main() {
//	struct test st;
//	struct test *ptr;
//
//	ptr = &st;
//	(*ptr).a = 1 ;
//	(*ptr).b = 2 ;
//
//	printf("st�� a ��� : %d\n", st.a);
//	printf("st�� b ��� : %d\n", st.b);
//
//	return 0;
//}

/*����ü ������ ���� 1*/

//#include <stdlib.h>
//
//struct contact {						// ����ó ����ü
//	char name[20];						// �̸�
//	char phone[20];						// ��ȭ��ȣ
//	int ringtone;						// ���Ҹ� (0~9) ����
//};
//
//int main() {
//
//	struct contact ct = { "�輮��", "01099997777", 0 };
//	struct contact *ptr = &ct;		// ������ ���� �� �ʱ�ȭ
//
//	ptr->ringtone = 5;
//
//	strcpy(ptr->phone, "01033334444");
//	printf("��    �� : %s \n", ptr->name);
//	printf("��ȭ��ȣ : %s \n", ptr->phone);
//	printf("�� �� �� : %d \n", ptr->ringtone);
//
//	return 0;
//}


/*����ü ������ ���� 2*/

//#include <stdio.h>
//
//struct TEST {
//	int c;
//	int *pointer;
//};
//int main() {
//	struct TEST t;
//	struct TEST *pt = &t;
//	int i = 0;
//
//	/* t �� ��� pointer �� i �� ����Ű�� �ȴ�*/
//	t.pointer = &i;
//
//	/* t �� ��� pointer �� ����Ű�� ������ ���� 3 ���� �����*/
//	*t.pointer = 3;	// ������ �켱���� ����
//
//	printf("i : %d \n", i);
//
//	/*
//
//	-> �� * ���� �켱������ �����Ƿ� ���� �ؼ��ϰ� �ȴ�.
//	��,
//	(pt �� ����Ű�� ����ü ������ pointer ���) �� ����Ű�� ������ ���� 4 ��
//	�ٲ۴�. ��� ���̴�/
//
//	*/
//	*pt->pointer = 4;
//
//	printf("i : %d \n", i);
//	return 0;
//}

/*����ü ������ ���� 3*/
//struct TEST {
//	int c;
//};
//
//int main() {
//	struct TEST t;
//	struct TEST *pt = &t;
//
//	/* pt �� ����Ű�� ����ü ������ c ����� ���� 0 ���� �Ѵ�*/
//	(*pt).c = 0;
//
//	printf("t.c : %d \n", t.c);
//
//	/* pt �� ����Ű�� ����ü ������ c ����� ���� 1 ���� �Ѵ�*/
//	pt->c = 1;
//
//	printf("t.c : %d \n", t.c);
//
//	return 0;
//}


/*������*/
// ������ ������ Ư���� ���� �� �Ѱ��� ���� ������ ����

//const int value1 = 1;
//const int value2 = 2;
//const int value3 = 3;

/*������*/
//enum dayOfweek		// ������ ����
//{
//	sunday = 0,		// �ʱⰪ �Ҵ� ���� ���� +1�� ����
//	monday,
//	tuesday,
//	wendsday = 4,	// �߰��� ���� �Ҵ� ���� ���ĺ��� +1�� ����
//	thurday,
//	friday,
//	saturday
//};
//
//int main() {
//	enum dayOfweek week;	//������ ���� ����
//	week = thurday;
//	printf("%d\n", week);
//}


/*������*/
//enum dayOfweek		// ������ ����
//{
//	sunday = 0,		// �ʱⰪ �Ҵ� ���� ���� +1�� ����
//	monday = 3,
//	tuesday = 5,
//	wendsday = 11,	// �߰��� ���� �Ҵ� ����
//	thurday = 7,
//	friday = 9,
//	saturday = 8
//};
//
//int main() {
//	enum dayOfweek week;	//������ ���� ����
//	week = tuesday;
//	printf("%d\n", week);	//������ �� �Ҵ�
//}


/*����ȯ*/

int main() {
	int i = 1;
	int j = 3;
	double di;

	di = (double)i / (double)j;
	printf("%d", (i / j));
	printf("%f", di);
}
