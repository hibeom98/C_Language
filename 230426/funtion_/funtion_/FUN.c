#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Function(함수)
// 함수란? : 하나의 특별한 목적의 작업을 수행하기 위해 
//          독립적으로 설계된 프로그램 집합

// C언어에서 크게 표준함수 , 사용자정의함수
// 함수사용 이유 
// 1. 반복적인 프로그램 --> 특정한 작업 반복을 피하기 위함
// 2. 함수로 작성 ---> 모듈화에 좋다 ---> 가독성이 좋아진다 --> 유지보수가 좋아진다.
// 3. 일반적으로 하나의 기능을 하나의 함수로 작성한다.

//int sum(int x, y)		// X,Y는 매개변수 목록
//{
//	/*함수 본체*/
//}



/* 기본적인 함수 선언 및 함수 호출 */

//int print_hello() {
//	printf("Hello World ! \n");
//	return 0;
//}
//
//int main() {
//
//	printf("함수를 불러봅시다 : ");
//	print_hello();
//
//	printf("함수를 또 !! 불러 봅시다 : ");
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

//함수의 이름 명명 --> 명확하게 어떤일을 하는지


//void f1(void)
//{
//
//}
//void play_video()
//{
//
//}
// 식별자 생성 규칙
// 일관된 명명 규칙
// 같은이름 함수를 존재 하지 말것 

//void play_video(void) // 매개변수가 없는 함수
//{
//	printf("반환없음");
//}



/* 매개변수가 없는 코드 */

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
//	printf("a와 b의 합은 : %d\n", sum);
//	printf("a와 10의 합은 : %d\n", add(a, 10));
//
//	return 0;
//}

// 함수의 작성은 함수의 리턴값의 자료형, 함수의 인자, 함수의 내용이 필요하다.
// 함수의 인자는 반드시 갯수와 자료형에 맞게 넣어서 호출
// 함수 이름 중복 금지
// 함수명 --> 식별자 금지 동일
// 함수의 리턴값이 없는 void형 함수가 아니면 반드시 return이 존재 해야 함


/* 매크로 상수를 이용한 함수 선언 */
//#define add(x,y)(x + y)
//int main()
//{
//
//	int a, b, sum;
//	a = 3;
//	b = 5;
//	sum = add(a, b);					// add(3+5)
//	printf("a와b의 합은 : %d\n", sum);
//	printf("a와10의 합은 : %d\n", add(a, 10));
//	return 0;
//}


// 변수의 유효범위
// 지역변수(Local variable)
// 전역변수(Global variable)
// 정적변수(Static variable)
// 레지스터 변수(Resister variable)

// 지역변수
// "블록" 내에서 선언된 변수
// 변수가 선언된 "블록" 내에서만 유효, 블록이 종료되면 메모리에서 사라짐
// 지역변수는 메모리상의 스택영역에 저장되며, 초기화 하지 않으면 Trash 값으로 초기화 됨
// 함수의 매개변소도 함수내에서 정의되는 지역변수로 취급된다.

/* 지역변수 */
//void local(void);		//함수 원형 선언

//void local(void);		//함수 원형 선언
//
//int main() {
//	int i = 5;
//	int var = 10;
//
//	printf("main() 함수내의 지역변수 var의 값은 : %d \n", var);
//	if (i < 10)
//	{
//		local();
//		int var = 30;
//		printf("if문내의 지역변수 var의 값은 : %d \n", var);
//	}
//	printf("현재 지역변수 var의 값은 : %d \n", var);
//	return 0;
//}
//void local(void) {
//	int var = 20;
//	printf("local() 함수내의 지역변수 var의 값은 : %d \n", var);
//}


 //전역변수
 //함수 외부에서 선언된 변수
 //프로그램의 어디에서나 접근, 프로그램이 종료 되어야 메모리 사라짐
 //전역변수는 메모리상에서 date영역에 저장
 //직접 초기화 하지 않아도 0으로 자동적으로 초기화 된다.


/* 전역변수 문 */
//void local(void);		// 함수 원형 선언
//int var;				// 전역변수 선언
//
//int main() {
//	printf("전역변수 var의 초기값은 : %d \n", var);
//	int i = 5;
//	int var = 10;		// 지역변수 선언
//	printf("main()함수내의 지역변수 var의 값은 : %d \n", var);
//
//	if (i < 10)
//	{
//		local();
//		printf("현재 변수 var의 값은 : %d \n", var);	// 지역변수에 접근
//	}
//
//	printf("더 이상 main()함수에서는 전역변수 var에 접근할 수 없습니다. \n");
//	return 0;
//}
//
//void local(void) {
//	var = 20;
//	printf("local()함수내에서 접근한 전역변수 var의 값은 : %d \n", var);
//}

//정적변수(Static)
// Static으로 정의된 변수
// 지역변수와 전역변수의 특징을 모두 가지고 있다
// 함수내에서 선언된 정적변수는 전역변수처럼 단 한번만 초기화된다.(최초 실행시, 딱 1번)
// 프로그램이 종료되어야 메모리에서 삭제
// 정적변수는 지역변수처럼 해당 함수내에서만 접근 가능

/*정적변수 문*/
//void local(void);	  // 함수 원형 선언
//void staticVar(void); // 함수 원형 선언
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
//	printf("local()함수가 %d번째 호출되었습니다. \n", count);
//	count++;
//}
//
//void staticVar(void) {
//	static int static_count = 1;	// 정적변수의 초기화
//	printf("staticVar()함수가 %d번째 호출되었습니다. \n\n", static_count);
//	static_count++;
//}


// 레지스터 변수
// 레지스터 변수는 지역변수 선언할 때 Resister 키워드를 붙여서 선언한다
// CPU의 레지스터 메모리에 저장이 된다.


/* 메모리 동적할당 */

//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//int main()
//{
//    int num1 = 20;    // int형 변수 선언
//    int *numPtr1;     // int형 포인터 선언
//
//    numPtr1 = &num1;  // num1의 메모리 주소를 구하여 numPtr에 할당
//
//    int *numPtr2;     // int형 포인터 선언
//
//    numPtr2 = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당
//
//    printf("%p\n", numPtr1);    //  변수 num1의 메모리 주소 출력
//    // 컴퓨터마다, 실행할 때마다 달라짐
//
//    printf("%p\n", numPtr2);     //  새로 할당된 메모리의 주소 출력
//    // 컴퓨터마다, 실행할 때마다 달라짐
//
//    free(numPtr2);    // 동적으로 할당한 메모리 해제
//
//    return 0;
//}

/* 메모리 값 저장하기 */
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//
//int main()
//{
//    int* numPtr;    // int형 포인터 선언
//
//    numPtr = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당
//
//    *numPtr = 10;   // 포인터를 역참조한 뒤 값 할당
//
//    printf("%d\n", *numPtr);    // 10: 포인터를 역참조하여 메모리에 저장된 값 출력
//
//    free(numPtr);    // 동적 메모리 해제
//
//    return 0;
//}


/* memset(v포인터, 정정한 값, 크기) */
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
//#include <string.h>    // memset 함수가 선언된 헤더 파일
//
//int main()
//{
//    long long* numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트만큼 동적 메모리 할당
//
//    memset(numPtr, 0x27, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
//
//    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음
//
//    free(numPtr);    // 동적으로 할당한 메모리 해제
//
//    return 0;
//}


/* 재귀함수(재귀 호출) */

//void p(int c)
//
//{
//	if (c == 0)	// 재귀함수 탈출 조건
//		return 0;
//	printf("재귀함수 입니다 %d\n", c);
//	p(c - 1);
//}
//
//int main() {
//	p(10);
//	return 0;
//}


/* 재귀함수 */
//unsigned int factorial(int n);
//
//int main()
//{	
//
//	int i, n, result;
//
//	printf("정수 입력 : ");
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
//	printf("호출 이전 i 의 값 : %d \n", i);
//	swap_value(i);
//	printf("호출 이후 i 의 값 : %d \n", i);
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

	printf("i 변수의 주소값 : %p \n\n", &i);
	printf("호출 이전의 i 의 값 : %d \n", i);
	swap_value(&i);
	printf("호출 이후의 i 의 값 : %d \n", i);

	return 0;
}

int swap_value(int* ptr_i) {
	printf("----- swap_vlaue 함수 안에서 ----- \n");
	printf("ptr_i 의 값 : %p \n", ptr_i);
	printf("ptr_i 가 가리키는 것의 값 : %d \n\n", *ptr_i);

	*ptr_i = 3;

	printf("------ swap_vlaue 함수 끝 ----- \n");

	return 0;
}