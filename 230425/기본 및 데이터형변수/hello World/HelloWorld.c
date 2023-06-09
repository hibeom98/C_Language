//#include<stdio.h> // 전처리기(표준 입출력 헤더파일)
//주석 구간
/*주석구간*/




/*전처리기*/
/*#include <stdio.h>			// 컴파일러에 지정된 폴더에서 찾음
#include "abc,h"				// 현재 프로젝트 폴더 내에서 찾음
#include "C:\test\abc.h"		// 해당 드라이브 경로 내에서 찾음
#include "..\abc.h"		*/	    // 현재 소스파일의 상위 폴더 내에서 찾음



//#include <stdio.h>
//#define APPLE 10
//#define NAME "사과"
//
//int main() {
//
//	printf("%s %d \n", NAME, APPLE);
//
//	return 0;
//
//}



// C 프로그램의 기본단위는 "함수"

// C 언어로 구현되는 모든 프로그램은 반스시 
// Main 함수를 가지고 있어야 한다

// C언어는 대소문자를 구별한다
// C언어는 자유형식을 허용한다
// ;으로 끝나지 않으면 2줄로 쓰는것고 허용
// 들여쓰지 안해도 됨(하지만 가독성 문제)
// 구문:프로그램 규칙
// 컴파일러 : C프로그램이 구문에 맞는지 검사
// 컴파일 과정 : C 프로그램 -> 토큰으로 분리 -> 목적코드변환
// 토큰의종류: 키워드, 식별자, 상수, 문자열상수, 연산자, 구두점




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





/*if문 예시*/

//#include<stdio.h>
//#define NUM 10
//
//int main() {
//#if NUM < 10
//	printf("NUM은 10보다 작다\n");
//
//#elif NUM>10
//	printf("NUM은 10보다 크다\n");
//#else
//	printf("NUM은 10 이다\n");
//
//#endif
//	return 0;
//
//}

//#ifdef 매크로 이름 // 매크로가 정의되어 있을 때

//#else            // 매크로가 정의되어 있지 때

//#endif           // 끝 마루리 일 때 항상 사용해준다.


//#include <stdio.h>
//#define NUM 10
//
//int main() {
//#ifdef NUM
//	printf("NUM은 %d 입니다", NUM);
//
//#else
//	printf("NUM은 정의되어 있지 않습니다");
//
//#endif
//	return 0;
//
//}


/*내장 매크로*/
//#include <stdio.h>
//void fun();
//
//int main() {
//	printf("컴파일 날짜 : %s\n",__DATE__);
//	printf("컴파일 시간 : %s\n",__TIME__);
//	printf("컴파일 날짜, 요일, 시간 : %s\n",__TIMESTAMP__);
//	printf("라인번호 : %d\n",__LINE__);
//	fun();
//	printf("현재 소스파일 위치 : %s\n",__FILE__);
//}
//
//void fun() {
//	printf("현재 함수 : %s\n",__FUNCTION__);
//}


/*printf 함수의 형식 문자열*/

//#include <stdio.h>
//
//int main()
//{
//	int num; // 정수형
//	float x; // 실수형
//	char c; // 문자형
//	num = 123;
//	x = 1.23;
//	c = 'A'; // 문자열 -->" 문자-->'
//	// 서식문자와 출력밧의 개수가 같아야 함
//
//	printf(" % d %x\n", num, num); //10진수 16진수
//	printf(" % f %e\n", x, x); // 부동소수점, 지수
//	printf(" % c\n", c); //문자
//	printf(" % x\n", num); // 소문자
//	printf(" % X\n",num); // 대문자
//	printf(" %#x \n",num);
//	printf(" %#X \n", num);
//}


/*문자폭 지정*/

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
//	printf("%8d\n", num); //8문자 출력에 맞춤
//	printf("%8d\n", num*10); //8문자 출력에 맞춤
//	printf("%8d\n", num*100); //8문자 출력에 맞춤
//	printf("%8d\n", num*1000); //8문자 출력에 맞춤
//
//	printf("%8d\n", num * 100000); //문자폭 보다 큼
//	printf("%08d\n", num); // 빈칸대신 0을 넣음
//
//	return 0;
//}


/*정밀도 지정*/

//#include <stdio.h>
//int main() {
//
//	float x = 12.34567;
//	printf("%f\n",x); //폭과 정밀도 지정 안함
//	printf("%.2f\n", x); //소수점이하 2자리
//	printf("%8.2f\n", x); //폭과 정밀도 지정
//	return 0;
//}

/*scanf 함수의 형식 문자열*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>


//int main() {
//	char name[20]; //20칸의 방의 크기를 가지고 있는 것 
//	int age;
//	char gender;
//
//		printf("이름 ,나이, 성별(M/F) 순으로 입력하시오\n");
//		scanf("%s %d  %c", name, &age, &gender);
//		printf("이름 :%s\n", name);
//		printf("나이 :%d \n", age);
//		printf("성별 :%c \n", gender);
//
//		return 0;
//}

/*sizeof 연산자*/
//#include <stdio.h>
//int main()
//{
//	char c;
//	int num;
//	double x;
//	printf("char형의 바이트 크기 %d\n",sizeof(char));
//	printf("short형의 바이트 크기 %d\n", sizeof(short));
//	printf("long형의 바이트 크기 %d\n", sizeof(long));
//	printf("long long형의 바이트 크기 %d\n", sizeof(long long));
//	printf("float형의 바이트 크기 %d\n", sizeof(float));
//	printf("double형의 바이트 크기 %d\n", sizeof(double));
//	printf("long double형의 바이트 크기 %d\n", sizeof(long double));
//	printf("c형의 바이트 크기 %d\n", sizeof(c));
//	printf("num형의 바이트 크기 %d\n", sizeof(num));
//	printf("x형의 바이트 크기 %d\n", sizeof(x));
//	
//	return 0;
//
//}

// 변수의 선언과 사용에 대해서
// 변수는 영문자 , 숫자 ,언더스코어만 가능하다.
// 첫글자 영뭄ㄴ자, 언더스코어, 대소문자 구별, 키워드 불가

//코깅 명명법
// 카멜(Camel)표기법

//int manAge; // 변수명
//int womanage;//
//int kimHeeBeom; 
//int pelpleAge(int man, int woman) { // 함수명
//	return 0;
//}

//파스칼 표기법
//int ManAge;
//int WomanAge;

//스네이크 표기법
//int man_age;
//int woman_age;

// 헝가리안 표기법
//String strName;
//char ch1;
//byte bAge;




//#include<stdio.h>
//int main() {
//	int n = 1;
//
//	if (n > 0) {
//		printf("참");		//120자가 넘지 않게 작성한다.
//
//
//	}
//	return 0;
//}



/*변수의 초기화*/

//#include<stdio.h>
//int main() {
//	int price; // 변수 선언
//	price = 100; //초기화
//	
//	int a = 0;
//	int b = 5;
//	int c;
//	c = 0;
//
//	printf("%d\n", price);
//	return 0;
//}




/*변수의 초기화*/
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
//	printf("주량");
//	scanf("%d", &amount);
//
//	price = 2000;
//	total = amount * price;
//	printf("합계 :%d원 \n", total);
//	
//	return 0;
//}




// 상수
// 프로그램에서 값이 변경되지 않는 요소
// 리터럴 상수
// 문자 상수 : 'A', '\wa'
// 정수형 상수 :0x12, 123u
// 실수형 상수 : 3.14,1.23e1
// 문자열 상수 : "hello", "A"
// const 상수
// ---- 값을 변경할 수 없는 변수
// ---- const 변수는 반드시 선언시 초기화 해야 함 !


/*const 변수*/
//#include<stdio.h>
//int main()
//{
//	int amount = 0, price = 0;
//	const double vat_rate = 0.1;
//	int total = 0;
//	printf("수량?");
//	scanf("%d", &amount);
//	printf("단가");
//	scanf("%d", &price);
//	total = amount * price * (1 + vat_rate);
//	printf("합계 : %d\n", total);
//	return 0;
//
//}
//
//
