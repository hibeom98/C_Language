//#include<stdio.h> // ��ó����(ǥ�� ����� �������)
//�ּ� ����
/*�ּ�����*/




/*��ó����*/
/*#include <stdio.h>			// �����Ϸ��� ������ �������� ã��
#include "abc,h"				// ���� ������Ʈ ���� ������ ã��
#include "C:\test\abc.h"		// �ش� ����̺� ��� ������ ã��
#include "..\abc.h"		*/	    // ���� �ҽ������� ���� ���� ������ ã��



//#include <stdio.h>
//#define APPLE 10
//#define NAME "���"
//
//int main() {
//
//	printf("%s %d \n", NAME, APPLE);
//
//	return 0;
//
//}



// C ���α׷��� �⺻������ "�Լ�"

// C ���� �����Ǵ� ��� ���α׷��� �ݽ��� 
// Main �Լ��� ������ �־�� �Ѵ�

// C���� ��ҹ��ڸ� �����Ѵ�
// C���� ���������� ����Ѵ�
// ;���� ������ ������ 2�ٷ� ���°Ͱ� ���
// �鿩���� ���ص� ��(������ ������ ����)
// ����:���α׷� ��Ģ
// �����Ϸ� : C���α׷��� ������ �´��� �˻�
// ������ ���� : C ���α׷� -> ��ū���� �и� -> �����ڵ庯ȯ
// ��ū������: Ű����, �ĺ���, ���, ���ڿ����, ������, ������




//#include<stdio.h>
//#define CALC(x,y) ((x)*(y))
//
//int main() {
//	
//	printf("%d\n", CALC(2, 4));
//	
//	return 0;
//
//}





/*if�� ����*/

//#include<stdio.h>
//#define NUM 10
//
//int main() {
//#if NUM < 10
//	printf("NUM�� 10���� �۴�\n");
//
//#elif NUM>10
//	printf("NUM�� 10���� ũ��\n");
//#else
//	printf("NUM�� 10 �̴�\n");
//
//#endif
//	return 0;
//
//}

//#ifdef ��ũ�� �̸� // ��ũ�ΰ� ���ǵǾ� ���� ��

//#else            // ��ũ�ΰ� ���ǵǾ� ���� ��

//#endif           // �� ���縮 �� �� �׻� ������ش�.


//#include <stdio.h>
//#define NUM 10
//
//int main() {
//#ifdef NUM
//	printf("NUM�� %d �Դϴ�", NUM);
//
//#else
//	printf("NUM�� ���ǵǾ� ���� �ʽ��ϴ�");
//
//#endif
//	return 0;
//
//}


/*���� ��ũ��*/
//#include <stdio.h>
//void fun();
//
//int main() {
//	printf("������ ��¥ : %s\n",__DATE__);
//	printf("������ �ð� : %s\n",__TIME__);
//	printf("������ ��¥, ����, �ð� : %s\n",__TIMESTAMP__);
//	printf("���ι�ȣ : %d\n",__LINE__);
//	fun();
//	printf("���� �ҽ����� ��ġ : %s\n",__FILE__);
//}
//
//void fun() {
//	printf("���� �Լ� : %s\n",__FUNCTION__);
//}


/*printf �Լ��� ���� ���ڿ�*/

//#include <stdio.h>
//
//int main()
//{
//	int num; // ������
//	float x; // �Ǽ���
//	char c; // ������
//	num = 123;
//	x = 1.23;
//	c = 'A'; // ���ڿ� -->" ����-->'
//	// ���Ĺ��ڿ� ��¹��� ������ ���ƾ� ��
//
//	printf(" % d %x\n", num, num); //10���� 16����
//	printf(" % f %e\n", x, x); // �ε��Ҽ���, ����
//	printf(" % c\n", c); //����
//	printf(" % x\n", num); // �ҹ���
//	printf(" % X\n",num); // �빮��
//	printf(" %#x \n",num);
//	printf(" %#X \n", num);
//}


/*������ ����*/

//#include <stdio.h>
//int main()
//{
//
//	int num = 12345;
//	printf("%d\n",num);
//	printf("%d\n", num*10);
//	printf("%d\n", num*100);
//	printf("%d\n", num*1000);
//
//	printf("%8d\n", num); //8���� ��¿� ����
//	printf("%8d\n", num*10); //8���� ��¿� ����
//	printf("%8d\n", num*100); //8���� ��¿� ����
//	printf("%8d\n", num*1000); //8���� ��¿� ����
//
//	printf("%8d\n", num * 100000); //������ ���� ŭ
//	printf("%08d\n", num); // ��ĭ��� 0�� ����
//
//	return 0;
//}


/*���е� ����*/

//#include <stdio.h>
//int main() {
//
//	float x = 12.34567;
//	printf("%f\n",x); //���� ���е� ���� ����
//	printf("%.2f\n", x); //�Ҽ������� 2�ڸ�
//	printf("%8.2f\n", x); //���� ���е� ����
//	return 0;
//}

/*scanf �Լ��� ���� ���ڿ�*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>


//int main() {
//	char name[20]; //20ĭ�� ���� ũ�⸦ ������ �ִ� �� 
//	int age;
//	char gender;
//
//		printf("�̸� ,����, ����(M/F) ������ �Է��Ͻÿ�\n");
//		scanf("%s %d  %c", name, &age, &gender);
//		printf("�̸� :%s\n", name);
//		printf("���� :%d \n", age);
//		printf("���� :%c \n", gender);
//
//		return 0;
//}

/*sizeof ������*/
//#include <stdio.h>
//int main()
//{
//	char c;
//	int num;
//	double x;
//	printf("char���� ����Ʈ ũ�� %d\n",sizeof(char));
//	printf("short���� ����Ʈ ũ�� %d\n", sizeof(short));
//	printf("long���� ����Ʈ ũ�� %d\n", sizeof(long));
//	printf("long long���� ����Ʈ ũ�� %d\n", sizeof(long long));
//	printf("float���� ����Ʈ ũ�� %d\n", sizeof(float));
//	printf("double���� ����Ʈ ũ�� %d\n", sizeof(double));
//	printf("long double���� ����Ʈ ũ�� %d\n", sizeof(long double));
//	printf("c���� ����Ʈ ũ�� %d\n", sizeof(c));
//	printf("num���� ����Ʈ ũ�� %d\n", sizeof(num));
//	printf("x���� ����Ʈ ũ�� %d\n", sizeof(x));
//	
//	return 0;
//
//}

// ������ ����� ��뿡 ���ؼ�
// ������ ������ , ���� ,������ھ �����ϴ�.
// ù���� ��������, ������ھ�, ��ҹ��� ����, Ű���� �Ұ�

//�ڱ� ����
// ī��(Camel)ǥ���

//int manAge; // ������
//int womanage;//
//int kimHeeBeom; 
//int pelpleAge(int man, int woman) { // �Լ���
//	return 0;
//}

//�Ľ�Į ǥ���
//int ManAge;
//int WomanAge;

//������ũ ǥ���
//int man_age;
//int woman_age;

// �밡���� ǥ���
//String strName;
//char ch1;
//byte bAge;




//#include<stdio.h>
//int main() {
//	int n = 1;
//
//	if (n > 0) {
//		printf("��");		//120�ڰ� ���� �ʰ� �ۼ��Ѵ�.
//
//
//	}
//	return 0;
//}



/*������ �ʱ�ȭ*/

//#include<stdio.h>
//int main() {
//	int price; // ���� ����
//	price = 100; //�ʱ�ȭ
//	
//	int a = 0;
//	int b = 5;
//	int c;
//	c = 0;
//
//	printf("%d\n", price);
//	return 0;
//}




/*������ �ʱ�ȭ*/
//#include<stdio.h>
//
//int main()
//{
//	int amount = 0;
//	int price = 0;
//	int total = 0;
//
//	printf("amount = %d , price = %d\n", amount, price);
//
//	printf("�ַ�");
//	scanf("%d", &amount);
//
//	price = 2000;
//	total = amount * price;
//	printf("�հ� :%d�� \n", total);
//	
//	return 0;
//}




// ���
// ���α׷����� ���� ������� �ʴ� ���
// ���ͷ� ���
// ���� ��� : 'A', '\wa'
// ������ ��� :0x12, 123u
// �Ǽ��� ��� : 3.14,1.23e1
// ���ڿ� ��� : "hello", "A"
// const ���
// ---- ���� ������ �� ���� ����
// ---- const ������ �ݵ�� ����� �ʱ�ȭ �ؾ� �� !


/*const ����*/
//#include<stdio.h>
//int main()
//{
//	int amount = 0, price = 0;
//	const double vat_rate = 0.1;
//	int total = 0;
//	printf("����?");
//	scanf("%d", &amount);
//	printf("�ܰ�");
//	scanf("%d", &price);
//	total = amount * price * (1 + vat_rate);
//	printf("�հ� : %d\n", total);
//	return 0;
//
//}
//
//
