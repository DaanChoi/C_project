#include <stdio.h>


typedef struct {
	char name[20]; // ǰ����� 20�� ����
	int qty;
	char size[2];
}
product;

int main(void) {
	int menu, idx = 0;
	product pro[10] = { 0 }; // ǰ���� �ִ� 10���� �������� ���� ����

	printf("JUICY KIOSK");
	printf("\n====== menu ======\n");
	printf("1. SEOSON\n2. JUICE\n3. COFFEE\n4. YOGULT\n5. ADE\n\n");

	printf("������� �޴��� �����ϼ��� : ");
	scanf_s("%d", &menu);
	

	if (menu == 1) {
		printf("\nSEOSON\n");

		printf("ǰ���� �����ϼ��� : ");
		scanf("%s", &pro[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &pro[idx].qty);
		printf("����� �Է��ϼ���(M) : ");
		scanf("%s", &pro[idx].size);
		idx++;
	}
	else if (menu == 2) {
		printf("\nJUICE\n");

		printf("ǰ���� �����ϼ��� : ");
		scanf("%s", &pro[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &pro[idx].qty);
		printf("����� �Է��ϼ���(M / XL) : ");
		scanf("%s", &pro[idx].size);
		idx++;
	}
	else if (menu == 3) {
		printf("\nJUICY COFFEE\n");

		printf("ǰ���� �����ϼ��� : ");
		scanf("%s", &pro[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &pro[idx].qty);
		printf("����� �Է��ϼ���(M / XL) : ");
		scanf("%s", &pro[idx].size);
		idx++;
	}
	else if (menu == 4) {
		printf("\nYOGULT\n");

		printf("ǰ���� �����ϼ��� : ");
		scanf("%s", &pro[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &pro[idx].qty);
		printf("����� �Է��ϼ���(M / XL) : ");
		scanf("%s", &pro[idx].size);
		idx++;
	}
	else if (menu == 5) {
		printf("\nADE\n");

		printf("ǰ���� �����ϼ��� : ");
		scanf("%s", &pro[idx].name);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &pro[idx].qty);
		printf("����� �Է��ϼ���(M) : ");
		scanf("%s", &pro[idx].size);
		idx++;
	}
	else {
		printf("\n�߸� �Է��ϼ̽��ϴ�.\n");
	} 

	printf("\n=== �ֹ� ����Ʈ ===\n");
	printf("ǰ��     ���� ������\n");
	for (int i = 0; i < idx; i++) {
		printf("%s %5d %5s", pro[i].name, pro[i].qty, pro[i].size);
	}

	return 0; 
}
