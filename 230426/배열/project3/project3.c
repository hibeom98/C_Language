#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �迭(array)
// �迭�� ���� Ÿ���� ������� �̷���� ���� ����
// �迭�� �����ϴ� ������ ���� �迭 ��Ҷ� �Ѵ�.
// �迭���� ��ġ�� ����Ű�� ���ڴ� �ε��� ��� �Ѵ�.
// �׻� �ε����� 0���� �����ϸ� 0�� ���Ծ� ���� �������� ���� �� �ִ�.
// �׸��� �迭�� �׻� ���ӵ� �޸𸮿� �Ҵ� �˴ϴ�.

// int arr[3]; --> �迭 ���� ���, �迭�� ũ��� 0���� Ŀ�� �Ѵ�.

// int arr[0]

//int size = 100;
//double data[size];// �迭�� ���� ���� �Ұ�

// #define MAX 5 // ������ ��ũ�� ��� ������ �����ϴ�
// int arr[MAX]; 

/* �迭�� ũ�� ���ϱ� */

//int main() {
//
//	int arr[5];				// ũ�Ⱑ 5�� �迭 ����
//	int byte_size = 0;		// �迭�� ����Ʈ ũ�⸦ ������ ����
//	int size = 0;			// �迭�� ũ�⸦ ������ ����
//	int i;
//
//	byte_size = sizeof(arr);				// �迭�� ����Ʈ ũ��
//	printf("�迭�� ����Ʈ ũ�� : %d \n\n", byte_size);
//
//	size = sizeof(arr) / sizeof(arr[0]);	// �迭�� ũ��(������ ����)
//	printf("�迭�� ũ�� : %d\n", size);
//
//	for (i = 0; i < size; i++) {
//		arr[i] = 0;
//	}
//
//	return 0;
//}
//


/* ��ũ�� ����� �̿��� �迭 */

//#define ARR_SIZE 5						// �迭�� ũ��� ��ũ�� ��� ����
//
//int main() {
//
//	int arr[ARR_SIZE];					// �迭�� ũ�⸦ ��ũ�� ����� ����	
//	int i;
//
//	for (i = 0; i < ARR_SIZE; i++) {	// �迭�� ũ�⸦ ARR_SIZE �̿�
//		arr[i] = 0;
//	}
//	printf("arr�迭�� ���� : ");
//
//	for (i = 0; i < ARR_SIZE; i++) {	// �迭�� ũ�⸦ ���������� �Ҽ� �ִ�
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

/* �迭�� ���� 1 */
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("arr�� 3��° ��Ұ� ����/ %d\n", arr[2]);
//	return 0;
//}


/* �迭�� ���� 2 */
//int main() {
//	int arr[10];
//	
//	arr[0] = 3;
//	arr[1] = 5;
//	arr[2] = 7;
//
//	printf("arr�� ù��° ��� ? : %d\n", arr[0]);
//	printf("arr�� �ι�° ��� ? : %d\n", arr[1]);
//	printf("arr�� ����° ��� ? : %d\n", arr[2]);
//}


/* �迭�� ��� */
//int main() {
//	int arr[10];				// �ش� ������ ������ �������� ���Ѵ�.
//	int i = 5;
//	arr[i] = 3;
//	arr[i+1] = 5;
//	arr[i+3] = 7;
//
//	printf("arr�� ������° ��� ? : %d\n", arr[i]);
//	printf("arr�� �ϰ���° ��� ? : %d\n", arr[i+1]);
//	printf("arr�� ��ȩ��° ��� ? : %d\n", arr[8]);
//
//	return 0;
//}


/* �迭�� ũ��� ��ũ�� ��� ���� */
//#define arr_size 5
//int add(int a, int b) { return a + b; }		//�迭�� ũ��� ��ũ�� ��� ����
//
//int main() {
//	int arr[arr_size] = { 0 };
//	int i;
//	arr[0] = 5;
//	arr[1] = arr[0] + 10;					//�迭�� ���(����)�� ���Ŀ� �̿�
//	arr[2] = add(arr[0], arr[1]);			// �Լ��� ���ڷ� ���
//	printf("������ 2�� �Է� �Ͻÿ� : ");
//	scanf("%d %d", &arr[3], &arr[4]);		// �迭�� ���ҷ� �Է�
//	for (i = 0; i < arr_size; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//
//	printf("\n");
//	return 0;
//
//}


/* �߸��� �ε����� ����ϴ� ��� */

//#define ARR_SIZE 5
//
//int main() {
//	int arr[ARR_SIZE] = { 10, 20, 30, 40, 50 };
//	int i;
//	printf("arr= ");
//	for (i = 0; i < ARR_SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//	printf("arr[5] = %d \n", arr[5]);
//	return 0;
//}


/* �迭�� �޸� ���� */
//int main() {
//
//	int i = 5;
//	char c = 'A';
//
//	printf("���� i �� �ּҰ� : %p\t���� i �� �� : %d\n", &i, i);
//	printf("���� c �� �ּҰ� : %p\t���� c �� �� : %c\n", &c, c);
//
//	return 0;
//}

/* �迭�� �ּҰ� �� ��Ұ� ǥ�� */
//int main() //�迭�� �ʱ�ȭ�� �� �ѹ� ó�� ���� �� �ѹ��� ��� ĭ �ʱ�ȭ ����
//{
//	int arr[4] = { 3,5,7,9 };
//	arr[0] = 3;
//	arr[1] = 5;
//	arr[2] = 7;
//	arr[3] = 9;
//
//	printf("arr �迭�� ù��° ��� �ּҰ� : %p\t ��Ұ�: %d \n",&arr[0],arr[0]);
//	printf("arr �迭�� ù��° ��� �ּҰ� : %p\t ��Ұ�: %d \n",&arr[1],arr[1]);
//	printf("arr �迭�� ù��° ��� �ּҰ� : %p\t ��Ұ�: %d \n",&arr[2],arr[2]);
//	printf("arr �迭�� ù��° ��� �ּҰ� : %p\t ��Ұ�: %d \n",&arr[3],arr[3]);
//
//	return 0;
//
//
//}

/* �迭�� �ʱ�ȭ(sizeof ������ ���) */

//int main() {
//	int arr[5] = { 2,3,4,5,6 };
//	int brr[] = { 2 ,4 ,8 };
//	printf("int�� ũ�� : %d byte\n", sizeof(int));
//	printf("�迭 arr�� ũ�� : %d byte\n", sizeof(arr));
//	printf("�迭 brr����  ũ�� : %d byte\n", sizeof(brr));
//	return 0;
//}


/* 5�� �л��� ������ �Է¹޾� ��ü ����� ���Ѵ� */

//int main() {
//
//    int arr[5];		// ���� ���� �迭
//    int i, sum = 0;
//
//    for (i = 0; i < 5; i++) {
//        printf("%d��° �л��� ������ �Է��ϼ��� : ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 5; i++) {
//        sum = sum + arr[i];
//    }
//    printf("��ü �л��� ���� : %d \n", sum);
//    printf("��ü �л��� ����� : %d \n", sum / 5);
//
//    return 0;
//}


/* ������ �Է¹޾� ��ü ����� ���� ��պ��� ������ ���ٸ� ���հ� / �̻��̸� �հ� */

//int main() {
//
//    int arr[5];
//    int i, sum = 0, ave = 0;
//
//    for (i = 0; i < 5; i++) {
//        printf("%d��° �л��� ������ ? : ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 5; i++) {
//        sum += arr[i];
//    }
//    ave = sum / 5;
//
//    printf("��ü �л��� ����� : %d \n", ave);
//
//    for (i = 0; i < 5; i++) {
//
//        printf("�л� %d: ", i + 1);
//
//        if (arr[i] >= ave) {
//            printf("�հ� \n");
//        }
//        else {
//            printf("���հ� \n");
//        }
//    }
//    return 0;
//}


/* �迭�� Ž�� */

//int main() {
//	int data[] = { 78,52,63,58,77,52,88};
//	int size;
//	int key, i;
//	size = sizeof(data) / sizeof(data[0]);
//	printf("arr = ");
//	for (i = 0; i < size; i++)
//	{
//		printf("%d    ", data[i]);
//	}
//	printf("    \n");
//	printf("ã�� ����? : ");
//	scanf("%d", &key);
//
//	for (i = 0; i < size; i++)
//	{
//		if (data[i] == key)
//		{
//			printf("ã�� ������ �ε��� : %d\n", i);
//		}
//	}return 0;
//}


/* �迭�� Ž�� 2 */
//int main() {
//
//	int data[] = { 78,34,52,15,63,15,25 };
//	int size;
//	int key, i, found = 0;					// found ���� �߰� �� �ʱ�ȭ
//
//	size = sizeof(data) / sizeof(data[0]);
//	printf("arr = ");
//	for (i = 0; i < size; i++) {
//		printf("%d ", data[i]);
//	}
//	printf("\n");
//
//	printf("ã�� ��(Ű) ? : ");
//	scanf("%d", &key);
//
//	for (i = 0; i < size; i++) {
//		if (data[i] == key) {		// �迭�� ���ҿ� Ű ��
//			printf("ã�� ������ �ε��� : %d \n", i);
//			found = 1;				// found ������ 1�� �����Ͽ� ã������ ǥ��
//		}
//	}
//	if (!found) {		// ���Ҹ� ã�� ������ ��� �޼��� ���
//		printf("ã�� ���Ұ� �����ϴ�. \n");
//	}
//
//	return 0;
//}


/* ������ �Է¹ް� �Ǵٸ� ���� �ϳ��� �Է¹޾Ƽ� �Է¹��� ���� �� ���� ���忡�� ã�Ƴ���.*/
//#define MAX 30
//
//int main() {
//
//    char sentence[MAX] = { 0 };
//    char key;
//    int i;
//
//    printf("30�� ������ ������ �Է��Ͻÿ� : ");
//
//    for (i = 0; i < MAX; i++) {
//
//        scanf("%c", &sentence[i]);
//
//        if (sentence[i] == '\n') {
//
//            sentence[i] = '\0';
//            break;
//        }
//    }
//
//    printf("ã�� ���ڸ� �Է��ϼ��� : ");
//    scanf("%c", &key);
//
//    for (i = 0; i < MAX; i++) {
//
//        if (sentence[i] == key) {
//
//            printf("%d��° ĭ���� ã�ҽ��ϴ�. \n", i + 1);
//        }
//    }
//
//    return 0;
//}



/* �迭�� �̿��ؼ� ���� ��ȯ 10������ 2������ �ٲٱ� */

//int main()
//{
//    int decimal;
//    int binary[20] = { 0, };
//
//    int position = 0;
//
//    printf("2������ ��ȯ�� 10������ �Է��ϼ��� : ");
//    scanf("%d", &decimal);
//
//    while (1)
//    {
//        binary[position] = decimal % 2;    // 2�� �������� �� �������� �迭�� ����
//        decimal = decimal / 2;             // 2�� ���� ���� ����
//
//        position++;    // �ڸ��� ����
//
//        if (decimal == 0)    // ���� 0�� �Ǹ� �ݺ��� ����
//            break;
//    }
//
//     �迭�� ��Ҹ� �������� ���
//    for (int i = position - 1; i >= 0; i--)
//    {
//        printf("%d", binary[i]);
//
//    }
//
//    printf("\n");
//
//    return 0;
//}

/* �Լ��� ���ڷ� �迭 �����ϱ� */
//#define MAX 10
//
//void print_array(int arr[], int size);		// �Լ� ����
//
//int main() {
//
//	int scores[] = { 99,98,97,96,66,55 };
//	int size = sizeof(scores) / sizeof(scores[0]);
//	int arr[MAX] = { 0 };
//
//	print_array(scores, size);		// ũ�Ⱑ 6�� int �迭 ���
//	print_array(arr, MAX);			// ũ�Ⱑ 10�� int �迭 ���
//
//	return 0;
//}
//
//void print_array(int arr[], int size)	// �迭�� ���Ҹ� ����ϴ� �Լ�
//{
//	int i;
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}


/* 2���� �迭 ���� */
//// �� �� ��
//
//int arr_2[3][3] = {
//	{1,2,3},
//	{4,5,6},
//	{7,8,9}
//};


/* ��� ���� ǥ���ϱ� */
//int main() {
//
//    int arr_2[3][3] = {
//    {1, 2, 3},
//    {4, 5, 6},
//    {7, 8, 9}
//    };
//
//    return 0;
//}

/* 2���� �迭�� �� �� �� �ľ� */
//int main(){
//	int arr_2[3][3] = {{1,4,6},{8,5,2},{7,9,3}};
//	printf(" 1�� 1�� : %d | ", arr_2[0][0]);
//	printf(" 1�� 2�� : %d | ", arr_2[0][1]);
//	printf(" 1�� 3�� : %d | \n", arr_2[0][2]);
//	printf(" 2�� 1�� : %d | ", arr_2[0][0]);
//	printf(" 2�� 2�� : %d | ", arr_2[0][1]);
//	printf(" 2�� 3�� : %d | \n", arr_2[0][2]);
//	printf(" 3�� 1�� : %d | ", arr_2[0][0]);
//	printf(" 3�� 2�� : %d | ", arr_2[0][1]);
//	printf(" 3�� 3�� : %d | \n", arr_2[0][2]);
//	return 0;
//	}


/* for ������ ���� */
//int main() {
//
//    int arr_2[3][3] = { {1, 4, 6}, {8, 5, 2}, {7, 9, 3} };
//    int i, j;
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%d�� %d�� : %d", i, j, arr_2[i][j]);
//            if (j < 3) printf(" | ");
//            if (j == 2) printf("\n");
//        }
//    }
//
//    return 0;
//}



/* 2���� �迭�� �޸� ���� ������ 1���� �迭�� ���� */
//int main() {
//	int arr_2[3][3] = { {1,4,6},{8,5,2},{7,9,3} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{	
//			printf("%d�� %d�� : %d | �ּ� : %p\n", i, j, arr_2[i][j],&arr_2[i][j]);
//		}
//		
//	}
//	return 0;
//}




/*2���� �迭���� �����Ҷ� ���� �� ����� �� �ִ�.(��, ���� �ȵ�)*/
//int main() {
//
//    int arr_2[][3] = { {1, 4}, {8, 5, 2} };
//    int i, j;
//
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%d��  %d�� �� : %d \n", i, j, arr_2[i][j]);
//        }
//    }
//    return 0;
//}



/* �迭�� ũ�� �˾ƺ��� */
//int main() {
//
//	int arr_2[][3] = { {1, 4}, {8, 5, 2} };
//
//	printf("�迭�� byte ũ�� : %d \n", sizeof(arr_2));
//	printf("�ʱ�ȭ ���� ���� arr_2[0][2] �� �� : %d \n", arr_2[0][2]);
//
//	return 0;
//}


/* ��� ���� ���� ���ϱ� */
//
//#define ROW 3
//#define COL 3
//
//int main() {
//
//    int square[ROW + 1][COL + 1] = { 0 };
//    int i, j;
//
//    printf("�� �ٿ� 3���� ������ 3�� �Է��Ͻÿ� \n");
//    for (i = 0; i < ROW; i++) {
//        for (j = 0; j < COL; j++) {
//            scanf("%d", &square[i][j]);
//        }
//    }
//    for (i = 0; i < ROW; i++) {
//        for (j = 0; j < COL; j++) {
//            square[i][COL] += square[i][j];
//            if (i < ROW) {
//                square[ROW][j] += square[i][j];
//            }
//        }
//        // square[ROW][COL] += square[i][j];
//    }
//    for (i = 0; i < ROW + 1; i++) {
//        for (j = 0; j < COL + 1; j++) {
//            printf("%5d", square[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}