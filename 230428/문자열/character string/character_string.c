#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �� ���� Ȯ�� */

//int main() {
//	char null_1 = '\0';			// �� 3 ���� ��� �����ϴ�
//	char null_2 = 0;
//	char null_3 = (char)NULL;   // ��� �빮�ڷ� ��� �Ѵ�
//
//	char not_null = '0';
//
//	printf("NULL �� ����(�ƽ�Ű)�� : %d, %d, %d \n", null_1, null_2, null_3);
//	printf("'0' �� ����(�ƽ�Ű)�� : %d \n", not_null);
//
//	return 0;
//}



/*���ڿ��� ����*/
//int main() {
//	char sentence_1[5] = { 'G', 'o', 'o', 'd', '\0' };	//'\0' ���Ṯ��
//	char sentence_2[5] = { 'G', 'o', 'o', 'd', 0 };
//	char sentence_3[5] = { 'G', 'o', 'o', 'd', (char)NULL };
//	char sentence_4[5] = { "Good" };				// �ι��� �ڵ��߰�
//
//	printf("sentence_1 : %s \n", sentence_1);  // %s �� ���ؼ� ���ڿ��� ����Ѵ�.
//	printf("sentence_2 : %s \n", sentence_2);
//	printf("sentence_3 : %s \n", sentence_3);
//	printf("sentence_4 : %s \n", sentence_4);
//
//	return 0;
//}

/*char str[10] = "abc";// a b c 0 0 0 0 0 0 ==> ���� ������ �ι��ڷ� �ʱ�ȭ*/
/*char str1[10] = "very long srting";  ==> ���ڿ��� ���̰� �迭�� ũ�� +1 */



/*�迭�� ����Ͽ� ���ڿ��� ����*/

//int main() {
//	char word[] = { "long sentence" };
//
//	printf("���ڿ� ���� ���� : %s \n", word);
//
//	word[0] = 'a';
//	word[1] = 'b';
//	word[2] = 'c';
//	word[3] = 'd';
//
//	printf("���ڿ� ���� ���� : %s \n", word);
//
//	return 0;
//}

/* ������ ���� ����*/

//int main() {
//	char word[30] = { "long sentence" };
//	char *pstr = word;
//
//	printf("%s\n", pstr);
//
//	return 0;
//}

/*������ ������ �����*/

//int str_length(char *str);  // �Լ��� ���� ���� (�����ͷ� ����)
//
//int main() {
//    char str[] = { "What is your name?" };
//
//    printf("�� ���ڿ��� ���� : %d \n", str_length(str));
//
//    return 0;
//}
//int str_length(char *str) {
//    int i = 0;
//    while (str[i]) {    // while�� 0�� �Ǵ� ����(��, ���ڿ��� ���� ���� ���� ��)
//        i++;
//    }
//
//    return i;
//}


/*���忭 �Է� �ޱ�*/

//int main() {
//	char word[30];
//
//	printf("30�� �̳��� ���ڿ��� �Է����ּ���! :");
//	scanf("%s", &word);
//
//	printf("���ڿ� : %s \n", word);
//
//	return 0;
//}


/* ���� */
//int main() {
//	int num;
//	char c;
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &num);
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%c", &c);
//	return 0;
//}

/*%s�� �޾ƺ���*/
//int main() {
//	char str[30];
//	int i;
//	printf("���ڸ� �Է��Ͻÿ� :");
//	scanf("%d", &i);		// ����
//	printf("���ڸ� �Է��Ͻÿ� :");
//	scanf("%s", str);		// ����
//
//	printf("str : %s", str);
//
//	return 0;
//}

/* getchar(); �Լ� ��� */
//int main() {
//	int num;
//	char c;
//
//	printf("���ڸ� �Է��ϼ���:");
//	scanf("%d", &num);
//
//	getchar();				// stdin ���� �ѹ��ڸ� �о�ͼ� �װ��� ������
//
//
//	printf("���ڸ� �Է��ϼ���:");
//	scanf("%c", &c);
//
//	return 0;
//}



/* gets() , puts() ���ڿ� ����� �Լ� */
//int main(void)
//{
//    char array1[10];
//    char array2[10] = "Good luck";
//
//    puts("���ڸ� �Է��ϼ���.");    // ���ڿ��� ������ ����ϰ� ���� ���๮��('\n')�� ���� ���
//    gets(array1);               // �Է½� �����÷ο� ����, ���Ṯ�� '\0' ���Եȴٴ� ��� ���
//    puts(array1);
//
//    puts(array2);
//    puts("Nice to meet you.");
//
//    return 0;
//}

/* gets() , puts() ���ڿ� ����� �Լ�2 */
//#include <string.h>             // ���ڿ� ó�� �Լ� ���� 
//
//int main()
//{
//    char arr1[] = "Hello C";
//    char arr2[] = "�ȳ��ϼ���";
//    char arr3[] = "";           // �� ���ڿ�
//    int len = 0;
//
//    printf("���� ���ڿ��� ����: %d\n", strlen(arr1));   // �� ���ڸ� ������ ���ڿ� ����
//    printf("�ѱ� ���ڿ��� ����: %d\n", strlen(arr2));   // �� ���ڸ� ������ ���ڿ� ����
//
//    printf("���� ���ڿ��� ũ��: %d\n", sizeof(arr1));   // NULL ���� '\0' ����
//    printf("�ѱ� ���ڿ��� ũ��: %d\n", sizeof(arr2));   // NULL ���� '\0' ����
//
//    len = strlen(arr2);
//    if (len > 0) {
//        arr2[len - 3] = '\0';       // ������ 3���� ���� ('\0') ���� ��ġ�� ����
//        printf("arr1 = %s \n", arr2);
//    }
//
//    return 0;
//}

/*���ڿ� ��*/
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
//    //���ڿ� �� ��ȯ�� Ȯ��
//    printf("strcmp(%s, %s)\t = %d\n", str1, str2, strcmp(str1, str2));
//    printf("strcmp(%s, %s)\t = %d\n", str1, str3, strcmp(str1, str3));
//    printf("strcmp(%s, %s)\t = %d\n", str1, str4, strcmp(str1, str4));
//    printf("strcmp(%s, %s)\t = %d\n", str1, str5, strcmp(str1, str5));
//    printf("strcmp(%s, %s)\t = %d\n", str6, str1, strcmp(str6, str1));
//
//    //���ڿ��� �������� �Ǵ��Ҷ� ���
//    if (strcmp(str1, str2) == 0)
//    {
//        printf("if�� ���� ��� %s, %s �� �����ϴ�.", str1, str2);
//    }
//    else
//    {
//        printf("if�� ���� ��� %s, %s �� �ٸ��ϴ�.", str1, str2);
//    }
//
//    return 0;
//}

