#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 널 문자 확인 */

//int main() {
//	char null_1 = '\0';			// 이 3 개는 모두 동일하다
//	char null_2 = 0;
//	char null_3 = (char)NULL;   // 모두 대문자로 써야 한다
//
//	char not_null = '0';
//
//	printf("NULL 의 정수(아스키)값 : %d, %d, %d \n", null_1, null_2, null_3);
//	printf("'0' 의 정수(아스키)값 : %d \n", not_null);
//
//	return 0;
//}



/*문자열의 시작*/
//int main() {
//	char sentence_1[5] = { 'G', 'o', 'o', 'd', '\0' };	//'\0' 종료문자
//	char sentence_2[5] = { 'G', 'o', 'o', 'd', 0 };
//	char sentence_3[5] = { 'G', 'o', 'o', 'd', (char)NULL };
//	char sentence_4[5] = { "Good" };				// 널문자 자동추가
//
//	printf("sentence_1 : %s \n", sentence_1);  // %s 를 통해서 문자열을 출력한다.
//	printf("sentence_2 : %s \n", sentence_2);
//	printf("sentence_3 : %s \n", sentence_3);
//	printf("sentence_4 : %s \n", sentence_4);
//
//	return 0;
//}

/*char str[10] = "abc";// a b c 0 0 0 0 0 0 ==> 남는 공간은 널문자로 초기화*/
/*char str1[10] = "very long srting";  ==> 문자열의 길이가 배열의 크기 +1 */



/*배열을 사용하여 문자열에 접근*/

//int main() {
//	char word[] = { "long sentence" };
//
//	printf("문자열 변경 이전 : %s \n", word);
//
//	word[0] = 'a';
//	word[1] = 'b';
//	word[2] = 'c';
//	word[3] = 'd';
//
//	printf("문자열 변경 이후 : %s \n", word);
//
//	return 0;
//}

/* 포인터 간단 복습*/

//int main() {
//	char word[30] = { "long sentence" };
//	char *pstr = word;
//
//	printf("%s\n", pstr);
//
//	return 0;
//}

/*문자의 개수를 세어보기*/

//int str_length(char *str);  // 함수의 원형 선언 (포인터로 받음)
//
//int main() {
//    char str[] = { "What is your name?" };
//
//    printf("이 문자열의 길이 : %d \n", str_length(str));
//
//    return 0;
//}
//int str_length(char *str) {
//    int i = 0;
//    while (str[i]) {    // while이 0이 되는 순간(즉, 문자열의 끝에 도달 했을 때)
//        i++;
//    }
//
//    return i;
//}


/*문장열 입력 받기*/

//int main() {
//	char word[30];
//
//	printf("30자 이내의 문자열을 입력해주세요! :");
//	scanf("%s", &word);
//
//	printf("문자열 : %s \n", word);
//
//	return 0;
//}


/* 버퍼 */
//int main() {
//	int num;
//	char c;
//
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &num);
//
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &c);
//	return 0;
//}

/*%s로 받아보자*/
//int main() {
//	char str[30];
//	int i;
//	printf("숫자를 입력하시오 :");
//	scanf("%d", &i);		// 숫자
//	printf("문자를 입력하시오 :");
//	scanf("%s", str);		// 문자
//
//	printf("str : %s", str);
//
//	return 0;
//}

/* getchar(); 함수 사용 */
//int main() {
//	int num;
//	char c;
//
//	printf("숫자를 입력하세요:");
//	scanf("%d", &num);
//
//	getchar();				// stdin 에서 한문자를 읽어와서 그것을 리턴함
//
//
//	printf("문자를 입력하세요:");
//	scanf("%c", &c);
//
//	return 0;
//}



/* gets() , puts() 문자열 입출력 함수 */
//int main(void)
//{
//    char array1[10];
//    char array2[10] = "Good luck";
//
//    puts("문자를 입력하세요.");    // 문자열을 끝까지 출력하고 나면 개행문자('\n')도 같이 출력
//    gets(array1);               // 입력시 오버플로우 주의, 종료문자 '\0' 포함된다는 사실 명심
//    puts(array1);
//
//    puts(array2);
//    puts("Nice to meet you.");
//
//    return 0;
//}

/* gets() , puts() 문자열 입출력 함수2 */
//#include <string.h>             // 문자열 처리 함수 사용시 
//
//int main()
//{
//    char arr1[] = "Hello C";
//    char arr2[] = "안녕하세요";
//    char arr3[] = "";           // 널 문자열
//    int len = 0;
//
//    printf("영문 문자열의 길이: %d\n", strlen(arr1));   // 널 문자를 제외한 문자열 길이
//    printf("한글 문자열의 길이: %d\n", strlen(arr2));   // 널 문자를 제외한 문자열 길이
//
//    printf("영문 문자열의 크기: %d\n", sizeof(arr1));   // NULL 문자 '\0' 포함
//    printf("한글 문자열의 크기: %d\n", sizeof(arr2));   // NULL 문자 '\0' 포함
//
//    len = strlen(arr2);
//    if (len > 0) {
//        arr2[len - 3] = '\0';       // 마지막 3글자 삭제 ('\0') 삭제 위치에 넣음
//        printf("arr1 = %s \n", arr2);
//    }
//
//    return 0;
//}

/*문자열 비교*/
//#include<string.h>
//
//int main()
//{
//    const char *str1 = "BlockDMask";
//    const char *str2 = "Block";
//    const char *str3 = "BlockDMask";
//    const char *str4 = "BlockFMask";
//    const char *str5 = "BlockAMask";
//    const char *str6 = "BlockAMa";
//
//    //문자열 비교 반환값 확인
//    printf("strcmp(%s, %s)\t = %d\n", str1, str2, strcmp(str1, str2));
//    printf("strcmp(%s, %s)\t = %d\n", str1, str3, strcmp(str1, str3));
//    printf("strcmp(%s, %s)\t = %d\n", str1, str4, strcmp(str1, str4));
//    printf("strcmp(%s, %s)\t = %d\n", str1, str5, strcmp(str1, str5));
//    printf("strcmp(%s, %s)\t = %d\n", str6, str1, strcmp(str6, str1));
//
//    //문자열이 같은지를 판단할때 사용
//    if (strcmp(str1, str2) == 0)
//    {
//        printf("if문 판정 결과 %s, %s 는 같습니다.", str1, str2);
//    }
//    else
//    {
//        printf("if문 판정 결과 %s, %s 는 다릅니다.", str1, str2);
//    }
//
//    return 0;
//}

