#include <stdio.h>


typedef struct {
	char name[20]; // ǰ����� 20�� ����
	int qty;
	char size[2];
}
product;

int main(void) {
	int menu, idx = 0;
	product prd[10] = { 0 }; // ǰ���� �ִ� 10���� �������� ���� ����

	printf("JUICY KIOSK");
	printf("\n====== menu ======\n");
	printf("1. SEOSON\n2. JUICE\n3. COFFEE\n4. YOGULT\n5. ADE\n\n");

	printf("������� �޴��� �����ϼ��� : ");
	scanf_s("%d", &menu);
	

	if (menu == 1) {
		printf("\n[SEOSON]\n");
		printf("\nM : 3,500��\n");
		printf("\n���ڻ��ͽ�\n���ڻ��ť��\n������\n��û����\n\n");

		printf("ǰ����� �Է��ϼ��� : ");
		scanf("%s", &prd[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &prd[idx].qty);
		printf("����� �Է��ϼ���(M) : ");
		scanf("%s", &prd[idx].size);
		idx++;
	}
	else if (menu == 2) {
		printf("\n[JUICE]\n");
		printf("\nM : 1,500�� / XL : 2,800��\n");
		printf("\n�ٳ���\nŰ��\n���ξ���\n���ڹٳ���\n���\n\n");

		printf("ǰ����� �Է��ϼ��� : ");
		scanf("%s", &prd[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &prd[idx].qty);
		printf("����� �Է��ϼ���(M / XL) : ");
		scanf("%s", &prd[idx].size);
		idx++;
	}
	else if (menu == 3) {
		printf("\n[JUICY COFFEE]\n");
		printf("\nM : 2,000�� / XL : 3,500��\n");
		printf("\n�ٴҶ��\nī���ī\nī��Ḷ���߶�\n����Ŀ��\n\n");

		printf("ǰ����� �Է��ϼ��� : ");
		scanf("%s", &prd[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &prd[idx].qty);
		printf("����� �Է��ϼ���(M / XL) : ");
		scanf("%s", &prd[idx].size);
		idx++;
	}
	else if (menu == 4) {
		printf("\n[YOGULT]\n");
		printf("\nM : 2,000�� / XL : 3,800��\n");
		printf("\n�ٳ������Ʈ\n������Ʈ\n��纣�����Ʈ\n\n");

		printf("ǰ����� �Է��ϼ��� : ");
		scanf("%s", &prd[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &prd[idx].qty);
		printf("����� �Է��ϼ���(M / XL) : ");
		scanf("%s", &prd[idx].size);
		idx++;
	}
	else if (menu == 5) {
		printf("\n[ADE]\n");
		printf("\nM : 3,800��\n");
		printf("\n����\n������\n�ڸ�\nû����\n\n");

		printf("ǰ����� �Է��ϼ��� : ");
		scanf("%s", &prd[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &prd[idx].qty);
		printf("����� �Է��ϼ���(M) : ");
		scanf("%s", &prd[idx].size);
		idx++;
	}
	else {
		printf("\n�߸� �Է��ϼ̽��ϴ�.\n");
	} 

	printf("\n=== �ֹ� ����Ʈ ===\n");
	printf("ǰ��  ����  ������\n");
	for (int i = 0; i < idx; i++) {
		printf("%s %d %s", prd[i].name, prd[i].qty, prd[i].size);
	}

	return 0; 
}
// https://dailylifestory.tistory.com/147
