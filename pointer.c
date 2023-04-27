#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/* 포인터의 크기 */
//#include <stdio.h>
//
//int main() {
//	int *pi;		
//	double *pd;
//	char *pc;
//
//	printf("int형의 포인터 크기 : %d \n", sizeof(pi));
//	printf("double형의 포인터 크기 : %d \n", sizeof(pd));
//	printf("char형의 포인터 크기 : %d \n", sizeof(pc));
//
//	printf("int* 의 포인터 크기 : %d \n", sizeof(int *));
//	printf("double* 의 포인터 크기 : %d \n", sizeof(double *));
//	printf("char* 의 포인터 크기 : %d \n", sizeof(char *));
//
//	return 0;
//}

// 포인터의 초기화
// 포인터에 직접 절대 주소를 대입해서는 안됨
//int *ptr = (int *)0x123456;	---> 메모리 주소를 직접 사용하면 심각한 문제 발생 가능성 

//어떤 변수의 주소로 초기화 할지 알 수 없으면 0으로 초기화
//int *ptr = 0;						// 0 으로 초기화 가능
//int *ptr = NULL;					// NULL 값으로 초기화 (권장)




/*변수의 주소값을 알고싶다면 &를 사용한다*/
/*&연산자 */

//int main() {
//	int a;
//	a = 2;
//
//	printf("%p \n", &a);
//	return 0;
//}


/* 포인터의 시작 */
//int main() {
//	int *p;				// 포인터 선언
//	int a;				// a 변수 선언
//	p = &a;				// 포인터에 변수의 주소값을 넣어 초기화
//	printf("포인터 p 에 들어 있는 값 : %p \n", p);
//	printf("int 변수 a 가 저장된 주소 : %p \n", &a);
//	return 0;
//}


/*연산자*/
//int main() {
//	int *p;
//	int a;
//
//	p = &a;
//	a = 2;
//
//	printf("a의 값 : %d \n", a);
//	printf("*p의 값 : %d \n", *p);
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
//	printf("a의 값 : %d \n", a);
//	printf("*p의 값 : %d \n", *p);
//
//	return 0;
//}


/* 포인터도 변수이다 */
//int main() {
//	int a;
//	int b;
//	int *ptr;		//포인터 변수 선언
//
//	ptr = &a;		
//	*ptr = 2;
//	ptr = &b;		// 포인터에 변수 b를 입력
//	*ptr = 3;		
//
//	printf("a의 값 : %d \n", a);
//	printf("b의 값 : %d \n", b);
//
//	return 0;
//}

/* const 데이터형 *변수 */
//포인터가 가리키는 변수의 값을 변경할 수 없음
// 포인터 자신의 값은 변경할 수 있음
// 포인터 선언시 NULL 로 초기화 하고, 원하는 시점에 특정 변수의 주소를 저장하여 사용 가능


/* 상수 포인터 1 */
//int main() {
//	int a;
//	int b;
//	const int *ptr = &a;
//
//	*ptr = 3;	// 포인터는 a를 지정하고 있기 때문에 B 값 입력 시 에러 발생 
//	ptr = &b;	// 정상 문장
//
//	return 0;
//}

/*데이터형 CONST *변수 */
// 포인터 자신의 값(저장된 주소)을 변경 불가능
// 다른 변수 가리킬 수 없음
// 포인터가 가리키는 변수의 값은 변경 가능

//int main() {
//	int a;
//	int b;
//	int *const ptr = &a;
//
//	*ptr = 3;	// 정상 문장
//	ptr = &b;	// 에러 발생
//
//	return 0;



/*포인터의 덧셈*/

//int main() {
//	int a;
//	int *pa;
//	pa = &a;
//
//	printf("pa 의 값 : %p \n", pa);
//	printf("(pa + 1) 의 값 : %p \n", pa + 1);
//
//	return 0;
//}

/* 다른 타입의 데이터 형 뎃셈 */
//#include <stdio.h>
//int main() {
//	int a;
//	char b;
//	double c;
//	int *pa = &a;
//	char *pb = &b;
//	double *pc = &c;
//
//	printf("pa 의 값 : %p \n", pa);
//	printf("(pa + 1) 의 값 : %p \n", pa + 1);
//	printf("pb 의 값 : %p \n", pb);
//	printf("(pb + 1) 의 값 : %p \n", pb + 1);
//	printf("pc 의 값 : %p \n", pc);
//	printf("(pc + 1) 의 값 : %p \n", pc + 1);
//
//	return 0;
//}

/* 포인터의 대입 */

//int main() {
//	int a;
//	int *pa = &a;
//	int *pb;
//
//	*pa = 3;
//	pb = pa;
//
//	printf("pa 가 가리키고 있는 것 : %d \n", *pa);
//	printf("pb 가 가리키고 있는 것 : %d \n", *pb);
//
//	return 0;
//}

/* 배열의 상태 확인 */
//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int i;
//
//    for (i = 0; i < 10; i++) 
//    {
//        printf("arr[%d] 의 주소값 : %p \n", i, &arr[i]);
//    }
//    return 0;
//}

/* 포인터로 배열의 접근 */

//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int *parr;
//    int i;
//    parr = &arr[0];
//
//    for (i = 0; i < 10; i++) {
//        printf("arr[%d] 의 주소값 : %p ", i, &arr[i]);
//        printf("(parr + %d) 의 값 : %p ", i, (parr + i));
//
//        if (&arr[i] == (parr + i)) {
//            /* 만일 (parr + i) 가 성공적으로 arr[i] 를 가리킨다면 */
//            printf(" --> 일치 \n");
//        }
//        else {
//            printf("--> 불일치\n");
//        }
//    }
//    return 0;
//}



/* *연산자를 이용한 배열요소 접근 */
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

/*배열 [0]과 주소값의 관계*/
// 배열의 이름 arr 과 arr[0] 의 주소값이 동일하다.
// 배열의 이름이 첫 번째 원소를 가리키는 포인터는 아니다 !!
//int main() {
//	int arr[3] = { 1, 2, 3 };
//
//	printf("arr 의 정체 : %p \n", arr);
//	printf("arr[0] 의 주소값 : %p \n", &arr[0]);
//
//	return 0;
//}


/* sizeof(크기) 연산자를 이용한 확인 */

// C 언어 상에서 배열의 이름이 sizeof 연산자나 주소값 연산자(& / 예를 들면 &arr) 와 같이 사용될 때의 
// 경우를 제외하면, 배열의 이름을 사용시 암묵적으로 첫 번째 원소를 가리키는 포인터로 타입 변환이 된다.

//int main() {
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int *parr = arr;
//
//	printf("Sizeof(arr) : %d \n", sizeof(arr));
//	printf("Sizeof(parr) : %d \n", sizeof(parr));
//}

/*1차원 배열 가리키기*/
// sizeof 와 주소값 연산자(&)와 함께 사용할 때를 제외하면,배열의 이름은 첫 번째 원소를 가리킨다
// arr[i] 와 같은 문장은 사실 컴파일러에 의해 *(arr + i)로 변환된다.

//int main() {
//	int arr[3] = { 1, 2, 3 };
//	int *parr;
//
//	parr = arr;
//	//    parr = &arr[0]; 동일    
//
//	printf("arr[1] : %d \n", arr[1]);
//	printf("parr[1] : %d \n", parr[1]);
//	return 0;
//}

/* 포인터 이용한 예제 */
//
//int main() {
//    int arr[10] = { 100, 98, 97, 95, 89, 76, 92, 96, 100, 99 };
//
//    int *parr = arr;		// 포인터 선언과 동시에 초기값 &arr[0] 주소값을 넣어줌
//    int sum = 0;
//
//    while (parr - arr <= 9) {
//        sum += (*parr);	// 포인터가 가리키는 주소의 value의 누적 합산
//        parr++;			// 포인터 주소값의 증감연산자
//    }
//
//    printf("내 시험 점수 평균 : %d \n", sum / 10);
//    return 0;
//}

/* 포인터의 포인터*/

//	int main() 
//{
//	int a;
//	int *pa;
//	int **ppa;
//
//	pa = &a;		// pa는 a의 주소를 가지고 있음
//	ppa = &pa;		// ppa는 포인터변수 pa의 주소
//
//	a = 3;
//
//	printf("a의 값 : %d || *pa의 값 : %d || **ppa의 값 : %d \n", a, *pa, **ppa);
//	printf("a의 주소 : %p || pa가 가리키는 주소 : %p || *ppa의 저장 값 : %p \n",
//		&a, pa, *ppa);
//	printf("pa의 주소 : %p || ppa가 가리키는 주소 : %p \n", &pa, ppa);
//
//	return 0;
//}


/* int a[2][3]의 의미 */

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


/* 2차원 배열의 개수 계산 */

//	int main() {
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//
//	printf("전체 크기 : %d \n", sizeof(arr));
//	printf("총 열의 개수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}

/* 포인터 배열 */

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


/* arr3 배열의 3번째 배열요소(value = 23)를 참조하는 과정 */
//int main() {
//	int arr1[4] = { 1 ,2, 3, 4 };
//	int arr2[4] = { 11, 12, 13, 14 };
//	int arr3[4] = { 21, 22, 23, 24 };
//
//	int *ptr_arr[3] = { arr1, arr2, arr3 }; // 포인터 배열에 각 배열명 초기화
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

/*  포인터의  ++ , -- 연산 */
// p++ , ++p : p가 가리키는 데이터형 1개 크기만큼 주소를 증가
// p-- , --p : p가 가리키는 데이터형 1개 크기만큼 주소를 감소

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

/* 포인터의  ++ , -- 연산  */
// 증감 연산자와 참조 연산자를 함께 사용할 때는 연산자 우선 순위에 신경써야 함.
// *p++ 는 *(p++)를 의미함
// *(p+1) 포인터 p 의 주소값의 증가임.

//int main() {
//	for (int i = 0; i < 5; i++)
//	{
//		printf("p = %p ,", p);
//		printf("*p = %d\n", *p++);
//	}
//}

// call by value/ call by reference
// 값에의한 전달  / 주소값에 의한 전달

//int swap_value(int i) {
//	
//	i = 3;
//	return 0;
//}
//
//int main()
//{
//	int i = 5;
//	printf("호출 이전의 i 값: %d\n", i);
//	swap_value(i);
//	printf("호출 이후의 i 값: %d\n", i);
//
//
//}

//int swap_value(int *ptr_i) {
//	printf("-------swap_value 함수인 -----");
//	printf("ptr_i의 값 : %p\n", ptr_i);
//	printf("ptr_i가 가리키는 것의 값 : %d\n\n", *ptr_i);
//	*ptr_i = 3;
//	printf("------- SWAP_Value 함수 끝 ------\n");
//	return 0;
//}
//
//int main() {
//	int i = 0;
//	printf("i변수의 주소값: %p\n\n", &i);
//	printf("호출 이전의 i 값: %d\n", i);
//	swap_value(&i);
//	printf("호출 이후의 i 값: %d\n", i);
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
//	printf("swap  이전 : i 값 %d, j의 값 %d \n\n", i, j);
//	swap_value(&i, &j);
//	printf("swap  이후 : i 값 %d, j의 값 %d \n\n", i, j);
//
//}

/*배열 인자로 받기*/

int add_number(int *ptr_arr){

int i;
for ( i = 0; i < 3; i++)
	{
	ptr_arr[i]= ptr_arr[0]+1 ; // 배열의 요소에 1을 더함
	}			  
return 0;
}


int main() {
	int arr[3];
	int i;
	printf("3개의 정수를 입력:");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	add_number(arr);
	printf("배열의 각 원소: %d,%d,%d\n", arr[0]);
	return 0;
}