#include<stdio.h>
#include<string.h>
#define BUF_SIZE 32
void main() {
	/*�����͹迭*/
	char* p_str_table[5] = { "abc", "def", "ghi", "jkl", "mno" };
	char find_string[32];
	int i;

	printf("ã�� ���� ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", find_string, 32);

	for (i = 0; i < 5; i++) {
		if (strcmp(find_string, p_str_table[i]) == 0)	break;
	}
	
	if (i == 5) {
		printf("ã���ô� ���ڿ��� �����ϴ�\n");
		int len = strlen(p_str_table[0])+1;
		/*�ι����������������ϰ� ����ϱ��� �ι��ڳ־��ִ� �ڵ�
		�� ���� ���̱淡(����) ���� �����帮�� �; �̷����ؿ�*/
		memcpy(find_string, p_str_table[0], len-1);
		find_string[strlen(p_str_table)] = 0;
		printf("%s\n", find_string);
	}
	else {
		printf("%s\n", find_string);
	}
}