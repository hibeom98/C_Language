# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>

/* if 문 */

//int main()
//{
//	int num = 0;							//변수를 선언하고 초기화
//	printf("숫자를 입력하세요");
//	scanf("%d", &num);
//	if (num < 5)
//	{
//		printf("입력하신 숫자는 5보다 작습니다\n");
//
//	}
//	if (num == 5)
//	{
//		printf("입력하신 숫자는 5입니다.\n");
//	}
//	if (num > 5)
//	{
//		printf("입력하신 숫자는 5보다 큽니다.\n");
//	}
// return 0;
//}



/* if else문 */

//int main()
//{
//	int num = 0;								//변수를 선언하고 초기화
//	printf("숫자를 입력하세요");
//	scanf("%d", &num);
//	if (num < 5)
//	{
//		printf("입력하신 숫자는 5보다 작습니다\n");
//
//	}
//	else
//	{
//		if (num == 5)
//		{
//			printf("입력하신 숫자는 5입니다.\n");
//		}
//		else
//		{
//			if (num > 5)
//			{
//				printf("입력하신 숫자는 5보다 큽니다.\n");
//			}
//		}
//	}
//	return 0;
//}




/* if, else if, else 문 */


//int main() {
//
//	int num = 0;
//
//	printf("숫자를 입력하세요 ");
//	scanf("%d", &num);
//
//	if (num < 5) {
//		printf("입력하신 숫자는 5보다 작습니다.\n");
//	}
//	else if (num == 5)
//	{
//		printf("입력하신 숫자는 5입니다.\n");
//	}
//	else
//	{
//		printf("입력하신 숫자는 5보다 큽니다.\n");
//	}
//
//	return 0;
//}

//중첩 if 문

//int main() 
//{
//	int pm;
//	printf("미세먼지 농도를 입력하시오:");
//	scanf("%d", &pm);
//	if (pm > 0)
//	{
//		if (pm <= 30) 
//		{
//			printf("미세먼지 농도가 좋으므로 마스크 쓰지 마라");
//		}
//		else // else는 하나만 사용 가능하다
//		{
//			if (pm <= 80)
//			{
//				printf("미세먼지 농도가 보통이므로 마스크 쓰라");
//			}
//		}
//	}
//}


/* 중첩 if 문 ==> 가독성이 떨어지므로 많이 사용하지 않는다. */
//int main()
//{
//    int pm;
//
//    printf("미세먼지 농도를 입력하세요 : ");
//    scanf("%d", &pm);
//
//    //중첩 if문 시작
//    if (pm > 0) {
//        if (pm <= 30) {
//            printf("미세먼지 농도가 좋음이므로 마스크를 쓰지않는다.\n");
//        }
//        else {
//            if (pm <= 80) {
//                printf("미세먼지 농도가 보통이므로 마스크를 쓴다.\n");
//            }
//            else {
//                //.... 생략
//            }
//        }
//    }
//
//    return 0;
//}

/* switch case */
//int main()
//{
//    int num;
//
//    printf("미세먼지 농도 선택\n");
//    printf("1 : 좋음\n");
//    printf("2 : 보통\n");
//    printf("3 : 나쁨\n");
//    printf("4 : 매우나쁨\n");
//    scanf("%d", &num);
//
//    //switch문 등장!
//    switch (num) {	//switch문 안의 값에 대한 case 설정        
//    case 1:
//        printf("미세먼지 농도가 좋음이므로 마스크를 쓰지않는다.\n");
//        break; 		//해당 case의 종료
//    case 2:
//        printf("미세먼지 농도가 보통이므로 마스크를 쓴다.\n");
//        break;
//    case 3:
//        printf("미세먼지 농도가 나쁨이므로 고오급 마스크를 쓴다.\n");
//        break;
//    case 4:
//        printf("미세먼지 농도가 매우나쁨이므로 방독면을 쓴다.\n");
//        break;
//    default:			//예외처리
//        printf("잘못입력하였습니다.\n");
//        break;
//    }
//
//    return 0;
//}


/* 반복문(while) */

/*

while (조건식)  // loop statement
{
	반복할 코드;
	변환식;
}

*/

/* while문 */

//int main() {
//	int weight = 80;
//	int count = 0;
//	while (weight >= 50)
//	{
//		printf("매일 열심히 운동해서 1kg 뺀다.\n");
//		weight--;
//		count++;
//	}
//	printf("축하합니다, 운동 그만해도 됩니다\n");
//	printf(" %d일 운동했습니다\n",count);
//	return 0;
//}

/* 반복문 (do while 문) */

//do
//{
//	반복할 코드; // 조건식에 관계없이 무조건 한번 실행
//	변화식;     // 
//} while (조건식);


/* do while문 */
//int main()
//{
//	int weight = 80;
//	int count = 0;
//	int select;
//
//	do {
//		printf("빡세게 운동을 해서 1kg를 뺀다.\n");
//		weight--;
//		count++;
//
//		printf("운동을 더 하겠습니까?\n");
//		printf("1. yes, 2. no (숫자를 입력)\n");
//		scanf("%d", &select);
//
//		if (select == 2) break;
//	} while (weight > 50);
//
//	printf("축하합니다. 운동을 안하셔도 됩니다.\n");
//	printf("%d 일 운동 하셨습니다. \n", count-1);
//	return 0;
//}

/* FOR 문 

for문(초기화; 조건(참일때); 증감식)
{
	반복할 코드;
}

*/

/* for문 연습 */
//int main()
//{
//    int weight;
//    int count = 0;
//
//    for (weight = 80; weight > 50; weight--)
//    {
//        printf("빡세게 운동을 해서 1kg를 뺀다.\n");
//        count++;
//    }
//
//    printf("축하합니다. 운동을 안하셔도 됩니다.\n");
//    printf("%d 일 운동 하셨습니다. \n", count);
//
//    return 0;
//}


/* for문 연습(중첩)  */

//int main()
//{
//    int i, j;
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("외부 시작 %d\n", i);
//        for (j = 0; j < 3; j++)
//        {
//            printf("내부 수행 %d\n", j);
//        }
//        printf("외부 끝%d\n", i);
//    }
//
//    return 0;
//}
//


// 제어변수 여래개를 이용한 FOR 문
// for(i=0, j=0;i<100 && j>0;i++,j++)

//초기식, 조건식, 증감식, 반복 문장의 일부를 생략 가능
//for(; i <10; i++)
//for(i = 0; ; i++)
//for(i = 0; i<10; )
//for (i = 0; i < 10)
//{
//	 ;
//}
// for(i=0; i <10; printf("%d", i++)){}



/* for 문 연습(다중의 제어변수 사용) 1*/
//int main()
//{
//	int i, j;
//
//	for (i = 0; i < 5; i++)
//	{
//		
//
//		for (j = 0; j <= i; j++)
//			printf("*");
//		
//			
//	}
//			printf("\n");
//
//	return 0;
//}

/* for 문 연습(다중의 제어변수 사용) 2*/
//int main()
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("*");
//
//		}
//			printf("\n");
//	}
//	for (i = 4; i > 0; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//			printf("\n");
//	}
//	return 0;
//}
//

/*break 문*/
//int main() {
//
//	int menu;
//	char filename[32] = "test.avi";
//
//	while (1)
//	{
//		printf("0. 종료 \n");
//		printf("1. 파일 열기 \n");
//		printf("2. 재생 \n");
//		printf("3. 재생 옵션 \n");
//		printf("선택 : ");
//
//		scanf("%d", &menu);
//
//		if (menu == 0) {
//			break;
//		}
//		switch (menu)
//		{
//		case 1:
//			printf("재생할 파일 이름 ? ");
//			scanf("%s", filename);
//			break;
//		case 2:
//			printf("%s를 재생합니다 \n", filename);
//			break;
//		case 3:
//			printf("재생 옵션을 선택합니다 \n");
//			break;
//		default:
//			printf("잘못 선택 하셨습니다. \n");
//			break;
//		}
//	}
//	printf("프로그램을 종료합니다 \n");
//
//	return 0;
//}

/* 구구단 */
//int main()
//{
//	int n;
//	int i = 1;							//초기값 설정
//	printf("출력 하고싶은 단수?:\n");
//	scanf("%d", &n);
//	while (i <= 9)
//	{
//		printf("%d * %d = %d\n", n, i, n * i);
//		i++;
//	}
//	return 0;
//}


/* 팩토리얼(오버플로우를 조심하여 제작하기) */
int main(){
long fac = 1;
int i, n;
printf("정수 입력:\n");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
	fac = fac * 1;
}
printf("%d!은 %d 입니다\n", n, fac);
return 0;
}
