# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>

/* if �� */

//int main()
//{
//	int num = 0;							//������ �����ϰ� �ʱ�ȭ
//	printf("���ڸ� �Է��ϼ���");
//	scanf("%d", &num);
//	if (num < 5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� �۽��ϴ�\n");
//
//	}
//	if (num == 5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5�Դϴ�.\n");
//	}
//	if (num > 5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� Ů�ϴ�.\n");
//	}
// return 0;
//}



/* if else�� */

//int main()
//{
//	int num = 0;								//������ �����ϰ� �ʱ�ȭ
//	printf("���ڸ� �Է��ϼ���");
//	scanf("%d", &num);
//	if (num < 5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� �۽��ϴ�\n");
//
//	}
//	else
//	{
//		if (num == 5)
//		{
//			printf("�Է��Ͻ� ���ڴ� 5�Դϴ�.\n");
//		}
//		else
//		{
//			if (num > 5)
//			{
//				printf("�Է��Ͻ� ���ڴ� 5���� Ů�ϴ�.\n");
//			}
//		}
//	}
//	return 0;
//}




/* if, else if, else �� */


//int main() {
//
//	int num = 0;
//
//	printf("���ڸ� �Է��ϼ��� ");
//	scanf("%d", &num);
//
//	if (num < 5) {
//		printf("�Է��Ͻ� ���ڴ� 5���� �۽��ϴ�.\n");
//	}
//	else if (num == 5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5�Դϴ�.\n");
//	}
//	else
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� Ů�ϴ�.\n");
//	}
//
//	return 0;
//}

//��ø if ��

//int main() 
//{
//	int pm;
//	printf("�̼����� �󵵸� �Է��Ͻÿ�:");
//	scanf("%d", &pm);
//	if (pm > 0)
//	{
//		if (pm <= 30) 
//		{
//			printf("�̼����� �󵵰� �����Ƿ� ����ũ ���� ����");
//		}
//		else // else�� �ϳ��� ��� �����ϴ�
//		{
//			if (pm <= 80)
//			{
//				printf("�̼����� �󵵰� �����̹Ƿ� ����ũ ����");
//			}
//		}
//	}
//}


/* ��ø if �� ==> �������� �������Ƿ� ���� ������� �ʴ´�. */
//int main()
//{
//    int pm;
//
//    printf("�̼����� �󵵸� �Է��ϼ��� : ");
//    scanf("%d", &pm);
//
//    //��ø if�� ����
//    if (pm > 0) {
//        if (pm <= 30) {
//            printf("�̼����� �󵵰� �����̹Ƿ� ����ũ�� �����ʴ´�.\n");
//        }
//        else {
//            if (pm <= 80) {
//                printf("�̼����� �󵵰� �����̹Ƿ� ����ũ�� ����.\n");
//            }
//            else {
//                //.... ����
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
//    printf("�̼����� �� ����\n");
//    printf("1 : ����\n");
//    printf("2 : ����\n");
//    printf("3 : ����\n");
//    printf("4 : �ſ쳪��\n");
//    scanf("%d", &num);
//
//    //switch�� ����!
//    switch (num) {	//switch�� ���� ���� ���� case ����        
//    case 1:
//        printf("�̼����� �󵵰� �����̹Ƿ� ����ũ�� �����ʴ´�.\n");
//        break; 		//�ش� case�� ����
//    case 2:
//        printf("�̼����� �󵵰� �����̹Ƿ� ����ũ�� ����.\n");
//        break;
//    case 3:
//        printf("�̼����� �󵵰� �����̹Ƿ� ����� ����ũ�� ����.\n");
//        break;
//    case 4:
//        printf("�̼����� �󵵰� �ſ쳪���̹Ƿ� �浶���� ����.\n");
//        break;
//    default:			//����ó��
//        printf("�߸��Է��Ͽ����ϴ�.\n");
//        break;
//    }
//
//    return 0;
//}


/* �ݺ���(while) */

/*

while (���ǽ�)  // loop statement
{
	�ݺ��� �ڵ�;
	��ȯ��;
}

*/

/* while�� */

//int main() {
//	int weight = 80;
//	int count = 0;
//	while (weight >= 50)
//	{
//		printf("���� ������ ��ؼ� 1kg ����.\n");
//		weight--;
//		count++;
//	}
//	printf("�����մϴ�, � �׸��ص� �˴ϴ�\n");
//	printf(" %d�� ��߽��ϴ�\n",count);
//	return 0;
//}

/* �ݺ��� (do while ��) */

//do
//{
//	�ݺ��� �ڵ�; // ���ǽĿ� ������� ������ �ѹ� ����
//	��ȭ��;     // 
//} while (���ǽ�);


/* do while�� */
//int main()
//{
//	int weight = 80;
//	int count = 0;
//	int select;
//
//	do {
//		printf("������ ��� �ؼ� 1kg�� ����.\n");
//		weight--;
//		count++;
//
//		printf("��� �� �ϰڽ��ϱ�?\n");
//		printf("1. yes, 2. no (���ڸ� �Է�)\n");
//		scanf("%d", &select);
//
//		if (select == 2) break;
//	} while (weight > 50);
//
//	printf("�����մϴ�. ��� ���ϼŵ� �˴ϴ�.\n");
//	printf("%d �� � �ϼ̽��ϴ�. \n", count-1);
//	return 0;
//}

/* FOR �� 

for��(�ʱ�ȭ; ����(���϶�); ������)
{
	�ݺ��� �ڵ�;
}

*/

/* for�� ���� */
//int main()
//{
//    int weight;
//    int count = 0;
//
//    for (weight = 80; weight > 50; weight--)
//    {
//        printf("������ ��� �ؼ� 1kg�� ����.\n");
//        count++;
//    }
//
//    printf("�����մϴ�. ��� ���ϼŵ� �˴ϴ�.\n");
//    printf("%d �� � �ϼ̽��ϴ�. \n", count);
//
//    return 0;
//}


/* for�� ����(��ø)  */

//int main()
//{
//    int i, j;
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("�ܺ� ���� %d\n", i);
//        for (j = 0; j < 3; j++)
//        {
//            printf("���� ���� %d\n", j);
//        }
//        printf("�ܺ� ��%d\n", i);
//    }
//
//    return 0;
//}
//


// ����� �������� �̿��� FOR ��
// for(i=0, j=0;i<100 && j>0;i++,j++)

//�ʱ��, ���ǽ�, ������, �ݺ� ������ �Ϻθ� ���� ����
//for(; i <10; i++)
//for(i = 0; ; i++)
//for(i = 0; i<10; )
//for (i = 0; i < 10)
//{
//	 ;
//}
// for(i=0; i <10; printf("%d", i++)){}



/* for �� ����(������ ����� ���) 1*/
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

/* for �� ����(������ ����� ���) 2*/
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

/*break ��*/
//int main() {
//
//	int menu;
//	char filename[32] = "test.avi";
//
//	while (1)
//	{
//		printf("0. ���� \n");
//		printf("1. ���� ���� \n");
//		printf("2. ��� \n");
//		printf("3. ��� �ɼ� \n");
//		printf("���� : ");
//
//		scanf("%d", &menu);
//
//		if (menu == 0) {
//			break;
//		}
//		switch (menu)
//		{
//		case 1:
//			printf("����� ���� �̸� ? ");
//			scanf("%s", filename);
//			break;
//		case 2:
//			printf("%s�� ����մϴ� \n", filename);
//			break;
//		case 3:
//			printf("��� �ɼ��� �����մϴ� \n");
//			break;
//		default:
//			printf("�߸� ���� �ϼ̽��ϴ�. \n");
//			break;
//		}
//	}
//	printf("���α׷��� �����մϴ� \n");
//
//	return 0;
//}

/* ������ */
//int main()
//{
//	int n;
//	int i = 1;							//�ʱⰪ ����
//	printf("��� �ϰ���� �ܼ�?:\n");
//	scanf("%d", &n);
//	while (i <= 9)
//	{
//		printf("%d * %d = %d\n", n, i, n * i);
//		i++;
//	}
//	return 0;
//}


/* ���丮��(�����÷ο츦 �����Ͽ� �����ϱ�) */
int main(){
long fac = 1;
int i, n;
printf("���� �Է�:\n");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
	fac = fac * 1;
}
printf("%d!�� %d �Դϴ�\n", n, fac);
return 0;
}
