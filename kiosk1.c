#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct {
	char name[20]; // ǰ����� 20�� ����
	int qty;
	char size[2];
	int price;
}
product;

int seoson(int qty, char size[]);
int juice(int qty, char size[]);
int coffee(int qty, char size[]);
int yogult(int qty, char size[]);
int ade(int qty, char size[]);
void receipt(int idx, product prd[], int sum);

int main(void) {
	int menu, idx = 0; //�޴�
	int sum = 0; // �� �ݾ�
	product prd[10] = { 0 }; // ǰ��, �ִ� 10�������� ����
	// �迭 �ʱ�ȭ �� [ũ��] ���������� �ڵ����� ũ�� ������. �̶� �����ؾ� ��. �ڵ����� ������ �迭�� ũ�Ⱑ �ƴ� �� ū ũ���� �迭�� ����ϰ� �ʹٸ� ����ڰ� ũ�� ������ ����� ��(Run-Time check Failure #2 -stack around the variable'����' was corrupted)
	char discnt; //����� ���� ���� ����
	char check; //���� ���� ����
	char input; //�߰� �ֹ� ����

	while (1) {
		printf("\n*******JUICY KIOSK*******\n");
		while(1) {
			printf("\n========= MENU =========\n");
			printf("1. SEOSON\n2. JUICE\n3. COFFEE\n4. YOGULT\n5. ADE\n=========================\n");
			printf("������� �޴��� �����ϼ��� : ");
			scanf_s("%d", &menu);
			if (menu == 1) {
				printf("\n\n--------[SEOSON]--------\n");
				printf("1) ���ڻ��ͽ�\n2) ���ڻ��ť��\n3) ������\n4) ��û����\n\n");
				printf("\nM : 3,500��\n-------------------------\n");
				printf("ǰ����� �Է��ϼ��� : ");
				scanf("%s", &prd[idx].name);
				printf("����� �Է��ϼ���(M) : ");
				scanf("%s", &prd[idx].size);
				printf("������ �Է��ϼ��� : ");
				scanf("%d", &prd[idx].qty);
				prd[idx].price = seoson(prd[idx].qty, prd[idx].size);
				sum += prd[idx].price;
				idx++;
			}
			else if (menu == 2) {
				printf("\n---------[JUICE]---------\n");
				printf("1) �ٳ���\n2) Ű��\n3) ���ξ���\n4) ���ڹٳ���\n5) ���\n\n");
				printf("\nM : 1,500�� / XL : 2,800��\n-------------------------\n");
				printf("ǰ����� �Է��ϼ��� : ");
				scanf("%s", &prd[idx].name);
				printf("����� �Է��ϼ���(M / XL) : ");
				scanf("%s", &prd[idx].size);
				printf("������ �Է��ϼ��� : ");
				scanf("%d", &prd[idx].qty);
				prd[idx].price = juice(prd[idx].qty, prd[idx].size);
				sum += prd[idx].price;
				idx++;
			}
			else if (menu == 3) {
				printf("\n--------[JUICY COFFEE]--------\n");
				printf("1) �ٴҶ��\n2) ī���ī\n3) ī��Ḷ���߶�\n4) ����Ŀ��\n\n");
				printf("\nM : 2,000�� / XL : 3,500��\n------------------------------\n");
				printf("ǰ����� �Է��ϼ��� : ");
				scanf("%s", &prd[idx].name);
				printf("����� �Է��ϼ���(M / XL) : ");
				scanf("%s", &prd[idx].size);
				printf("������ �Է��ϼ��� : ");
				scanf("%d", &prd[idx].qty);
				prd[idx].price = coffee(prd[idx].qty, prd[idx].size);
				sum += prd[idx].price;
				idx++;
			}
			else if (menu == 4) {
				printf("\n--------[YOGULT]--------\n");
				printf("1) �ٳ������Ʈ\n2) ������Ʈ\n3) ��纣�����Ʈ\n\n");
				printf("\nM : 2,000�� / XL : 3,800��\n-------------------------\n");
				printf("ǰ����� �Է��ϼ��� : ");
				scanf("%s", &prd[idx].name);
				printf("����� �Է��ϼ���(M / XL) : ");
				scanf("%s", &prd[idx].size);
				printf("������ �Է��ϼ��� : ");
				scanf("%d", &prd[idx].qty);
				prd[idx].price = yogult(prd[idx].qty, prd[idx].size);
				sum += prd[idx].price;
				idx++;
			}
			else if (menu == 5) {
				printf("\n--------[ADE]--------\n");
				printf("1) ����\n2) ������\n3) �ڸ�\n4) û����\n\n");
				printf("\nM : 3,800��\n-------------------------\n");
				printf("ǰ����� �Է��ϼ��� : ");
				scanf("%s", &prd[idx].name);
				printf("����� �Է��ϼ���(M) : ");
				scanf("%s", &prd[idx].size);
				printf("������ �Է��ϼ��� : ");
				scanf("%d", &prd[idx].qty);
				prd[idx].price = ade(prd[idx].qty, prd[idx].size);
				sum += prd[idx].price;
				idx++;
			}
			else {
				printf("\n�߸� �����ϼ̽��ϴ�. �ٽ� �������ּ���.\n");
			}
			printf("\n�߰��� �ֹ��Ͻðڽ��ϱ�?(y/n) : ");
			scanf(" %c", &input);
			if (input == 'n') {
				break;
			}
		}

		printf("\n�ֹ� ����Ʈ�� Ȯ���� �ּ���.");
		printf("\n\n======= �ֹ� ����Ʈ =======\n");
		printf("ǰ��          ����  ������\n");
		for (int i = 0; i < idx; i++) {
			printf("%-10s  %4d  %4s\n", prd[i].name, prd[i].qty, prd[i].size);
		}
		printf("\n\n�� �ݾ� : %d��\n", sum); 
		printf("=========================\n");

		printf("�����Ͻðڽ��ϱ�?(y/n) : ");
		scanf(" %c", &check);
		if (check == 'y') {
			break;
		}
		idx = 0;
		sum = 0;
		getchar();
	}
	getchar();
	printf("\n����� ������ �Ͻðڽ��ϱ�?(y/n) {VIP��� 10%% ���� (�� 1ȸ�� ����)} : ");
	scanf("%c", &discnt);
	if (discnt == 'y') {
		sum *= 0.9;
		printf("10%% ���εƽ��ϴ�. ���ε� ���� %d������ �����˴ϴ�.\n", sum);
	} 
	else {
		printf("���� ���� %d������ �����˴ϴ�.\n\n", sum);
	}

	receipt(idx, prd, sum);

	return 0;
}
int seoson(int qty, char size[]) {
	if (strcmp(size, "M") == 0) {
		return 3500 * qty;
	}
}
int juice(int qty, char size[]) {
	if (strcmp(size, "M") == 0) {
		return 1500 * qty;
	}
	if (strcmp(size, "XL") == 0) {
		return 2800 * qty;
	}
}
int coffee(int qty, char size[]) {
	if (strcmp(size, "M") == 0) {
		return 2000 * qty;
	}
	if (strcmp(size, "XL") == 0) {
		return 3500 * qty;
	}
}
int yogult(int qty, char size[]) {
	if (strcmp(size, "M") == 0) {
		return 2000 * qty;
	}
	if (strcmp(size, "XL") == 0) {
		return 3800 * qty;
	}
}
int ade(int qty, char size[]) {
	if (strcmp(size, "M") == 0) {
		return 3800 * qty;
	}
}
void receipt(int idx, product prd[], int sum) {
	FILE* fp = fopen("receipt.txt", "w");
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	//�ܼ�â�� ���(ǥ�� ���(ȭ��))
	printf("=====================================\n");
	printf("               ������                \n");
	printf("=====================================\n");
	printf("[�����] �꾾 �ܱ�����\n");
	printf("[�����] 106-82-02786\n");
	printf("[�ּ�] ��� ���ν� ������ ������ 152-1\n");
	printf("[��ȭ��ȣ] 031-262-2770\n");
	printf("[������] %d-%d-%d  %d:%d:%d\n", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("[�ֹ���ȣ] 0050\n");
	printf("-------------------------------------\n");
	printf("��ǰ��             ����    �ݾ�\n");
	for (int i = 0; i < idx; i++) {
		printf("%s(%s) %8d %8d\n", prd[i].name, prd[i].size, prd[i].qty, prd[i].price);
	}
	printf("-------------------------------------\n");
	printf("�հ�ݾ�                    %d��\n", sum);
	printf("=====================================\n");
	printf("    ***�ſ��������(����)[1]***   \n");


	//���Ͽ� ���(����)

	fputs("=====================================\n", fp);
	fputs("               ������                \n", fp);
	fputs("=====================================\n", fp);
	fputs("[�����] �꾾 �ܱ�����\n", fp);
	fputs("[�����] 106-82-02786\n", fp);
	fputs("[�ּ�] ��� ���ν� ������ ������ 152-1\n", fp);
	fputs("[��ȭ��ȣ] 031-262-2770\n", fp);
	fprintf(fp, "%s %d%c%d%c%d  %d%c%d%c%d\n", "[������]", tm.tm_year + 1900, '-', tm.tm_mon + 1, '-', tm.tm_mday, tm.tm_hour, ':', tm.tm_min, ':', tm.tm_sec);
	fputs("[�ֹ���ȣ] 0050\n", fp);
	fputs("-------------------------------------\n", fp);
	fputs("��ǰ��             ����    �ݾ�\n", fp);
	for (int i = 0; i < idx; i++) {
		fprintf(fp, "%s(%s) %8d %8d\n", prd[i].name, prd[i].size, prd[i].qty, prd[i].price);
	}
	fputs("-------------------------------------\n", fp);
	fprintf(fp, "%s                    %d%s\n", "�հ�ݾ�", sum, "��");
	fputs("=====================================\n", fp);
	fputs("    ***�ſ��������(����)[1]***   \n", fp);
	
	fclose(fp);
}