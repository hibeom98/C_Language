#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 서로 다른 자료형 한덩이로 묶는다
// 구조체 정의 위치
// 함수내: 정의된 함수 내 에서만 사용가능
// 함수밖: 소스파일 시작에 정의 전체에서 사용가능
// 구조체 변수가 메모리에 할당 될 때 멤버들이 선언된 순서대로 할당

/* 구조체 정의 및 변수 선언 1 */
//struct human {		// Human 이라는 구조체 정의
//	int age;		// 나이
//	int height;		// 키
//	int weight;		// 몸무게
//};					// 마지막에 세미콜론 주의 !!
//
//int main() {
//	struct human info;	// 구조체 변수 선언
//
//	info.age = 99;
//	info.height = 185;
//	info.weight = 80;
//
//	printf("info 에 대한 정보 \n");
//	printf("나이   : %d \n", info.age);
//	printf("키     : %d \n", info.height);
//	printf("몸무게 : %d \n", info.weight);
//
//	return 0;
//}


/* 구조체 정의 및 변수 선언 2 */
//#include <string.h>
//
//struct contact {								// 연락처 구조체
//	char name[20];								// 이름
//	char phone[20];								// 전화번호
//	int ringtone;								// 벨소리 (0~9) 선택
//};
//
//int main() {
//
//	struct contact ct = { "김석진", "01012345678", 0 };
//	struct contact ct1 = { 0 }, ct2 = { 0 };		// 멤버를 0으로 초기화
//
//	ct.ringtone = 5;								// ct에서 ringtone을 0으로 바꿈
//	strcpy(ct.phone, "01000008765");				// ct에서 phone를 바꿈
//	printf("이    름 : %s \n", ct.name);
//	printf("전화번호 : %s \n", ct.phone);
//	printf("벨 소 리 : %d \n", ct.ringtone);
//
//	strcpy(ct1.name, "전정국");						// 별도의 구조체 ct1 의 name를 대입
//	strcpy(ct1.phone, "01188889999");				// ct1 에 phone 대입
//	ct1.ringtone = 1;								// ct1 에 ringtone 대입
//	printf("이    름 : %s \n", ct1.name);	
//	printf("전화번호 : %s \n", ct1.phone);
//	printf("벨 소 리 : %d \n", ct1.ringtone);
//
//	// 연락처를 받아본다
//	printf("이  름 : ");
//	scanf("%s", ct2.name);						// 배열명으로 받음
//	printf("전화번호 : ");
//	scanf("%s", ct2.phone);						// 배열명으로 받음
//	printf("벨소리(0~9) : ");
//	scanf("%d", &ct2.ringtone);					// 주소 연산자 조심
//	printf("이    름 : %s \n", ct2.name);
//	printf("전화번호 : %s \n", ct2.phone);
//	printf("벨 소 리 : %d \n", ct2.ringtone);
//
//	return 0;
//
//}

// 구조체 변수끼리 직접 관계연산자 비교불가
/*typedef */// 기존의 데이터형에 대한 별명(Alias)
	


/*typedef 사용법*/
//typedef unsigned int myUnsignedInteger;	// 자료형 재정의
//
//int main() {
//
//	myUnsignedInteger num;				// 재정의된 자료형 이름
//
//	num = 10;
//
//	printf("Num : %d \n", num);
//
//	return 0;
//}

/*typedef 사용법2*/

// 자료형을 한글로 정의는 하지 않는게 좋음
//typedef char		바이트_1개;
//typedef int			바이트_4개;
//typedef double		바이트_8개;
//
//int main() {
//
//	바이트_1개 문자열[100] = "한글이 좋아";
//	바이트_4개 정수 = 100;
//	바이트_8개 실수 = 20.55;
//
//	printf("문자열 : %s \n", 문자열);
//	printf("정수   : %d \n", 정수);
//	printf("실수   : %.2f \n", 실수);
//
//	return 0;
//}

/*typedef 사용법3*/
//typedef struct food
//{
//	char name[10];
//	int iPrice;
//	int iCookTime;
//	int iPreference;
//}FOOD;					// 구조체 변수가 아닌 재정의 한 형식의 이름
//
//int main() {
//
//	FOOD Food = { "라면", 3500, 3, 5 };
//
//	printf("음식 이름 : %s \n", Food.name);
//	printf("음식 가격 : %d \n", Food.iPrice);
//	printf("조리 시간 : %dm \n", Food.iCookTime);
//	printf("음식 평가 : %d점 \n", Food.iPreference);
//
//	return 0;
//}


/*typedef을 이용한 구조체 배열1*/
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
//		{"김석진", "01011112222", 0},
//		{"전정국", "01044445555", 1},
//		{"박진만", "01088883333", 2}
//	};
//
//	int size = sizeof(arr) / sizeof(arr[0]);		// 배열의 크기 
//	int i;
//
//	printf(" 이름        전화번호     벨소리 \n");
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%s %15s %5d\n", arr[i].name ,arr[i].phone, arr[i].ringtone);
//	}
//
//	return 0;
//}

/*typedef을 이용한 구조체 배열 검색 */
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
//	CONTACT arr[] = {				// 배열 초기화
//		{"김석진", "01011112222", 0},
//		{"전정국", "01044445555", 1},
//		{"박진만", "01088883333", 2},
//		{"김남기", "01088883333", 3},
//		{"박용만", "01088883333", 4},
//		{"허창수", "01088883333", 5}
//	};
//
//	int size = sizeof(arr) / sizeof(arr[0]);	// 배열의 크기
//	int i;
//	char name[STR_SIZE];		// 입력받은 이름을 저장할 문자 배열
//	int index;
//
//	printf(" 이름을 넣으시오 : ");
//	scanf("%s", name);			// 배열명이기 때문에 & 없어도 됨
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
//		printf("%s 의 전화번호 : %s \n", arr[index].name, arr[index].phone);
//	}
//	else
//	{
//		printf("연락처를 찾을수 없음 \n");
//	}
//
//	return 0;
//}

/*구조체 변수의 포인터*/
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
//	printf("st의 a 멤버 : %d\n", st.a);
//	printf("st의 b 멤버 : %d\n", st.b);
//
//	return 0;
//}

/*구조체 포인터 연습 1*/

//#include <stdlib.h>
//
//struct contact {						// 연락처 구조체
//	char name[20];						// 이름
//	char phone[20];						// 전화번호
//	int ringtone;						// 벨소리 (0~9) 선택
//};
//
//int main() {
//
//	struct contact ct = { "김석진", "01099997777", 0 };
//	struct contact *ptr = &ct;		// 포인터 선언 및 초기화
//
//	ptr->ringtone = 5;
//
//	strcpy(ptr->phone, "01033334444");
//	printf("이    름 : %s \n", ptr->name);
//	printf("전화번호 : %s \n", ptr->phone);
//	printf("벨 소 리 : %d \n", ptr->ringtone);
//
//	return 0;
//}


/*구조체 포인터 연습 2*/

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
//	/* t 의 멤버 pointer 는 i 를 가리키게 된다*/
//	t.pointer = &i;
//
//	/* t 의 멤버 pointer 가 가리키는 변수의 값을 3 으로 만든다*/
//	*t.pointer = 3;	// 연산자 우선순위 참고
//
//	printf("i : %d \n", i);
//
//	/*
//
//	-> 가 * 보다 우선순위가 높으므로 먼저 해석하게 된다.
//	즉,
//	(pt 가 가리키는 구조체 변수의 pointer 멤버) 가 가리키는 변수의 값을 4 로
//	바꾼다. 라는 뜻이다/
//
//	*/
//	*pt->pointer = 4;
//
//	printf("i : %d \n", i);
//	return 0;
//}

/*구조체 포인터 연습 3*/
//struct TEST {
//	int c;
//};
//
//int main() {
//	struct TEST t;
//	struct TEST *pt = &t;
//
//	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 0 으로 한다*/
//	(*pt).c = 0;
//
//	printf("t.c : %d \n", t.c);
//
//	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 1 으로 한다*/
//	pt->c = 1;
//
//	printf("t.c : %d \n", t.c);
//
//	return 0;
//}


/*열거형*/
// 정수형 변수가 특정한 값들 중 한가지 값을 가질때 유용

//const int value1 = 1;
//const int value2 = 2;
//const int value3 = 3;

/*열거형*/
//enum dayOfweek		// 열거형 정의
//{
//	sunday = 0,		// 초기값 할당 이후 부터 +1씩 증가
//	monday,
//	tuesday,
//	wendsday = 4,	// 중간에 값을 할당 가능 이후부터 +1씩 증가
//	thurday,
//	friday,
//	saturday
//};
//
//int main() {
//	enum dayOfweek week;	//열거형 변수 선언
//	week = thurday;
//	printf("%d\n", week);
//}


/*열거형*/
//enum dayOfweek		// 열거형 정의
//{
//	sunday = 0,		// 초기값 할당 이후 부터 +1씩 증가
//	monday = 3,
//	tuesday = 5,
//	wendsday = 11,	// 중간에 값을 할당 가능
//	thurday = 7,
//	friday = 9,
//	saturday = 8
//};
//
//int main() {
//	enum dayOfweek week;	//열거형 변수 선언
//	week = tuesday;
//	printf("%d\n", week);	//열거형 값 할당
//}


/*형변환*/

int main() {
	int i = 1;
	int j = 3;
	double di;

	di = (double)i / (double)j;
	printf("%d", (i / j));
	printf("%f", di);
}
