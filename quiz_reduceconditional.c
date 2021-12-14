#include<stdio.h>
#include<string.h>
#define BUF_SIZE 32
void main() {
	/*포인터배열*/
	char* p_str_table[5] = { "abc", "def", "ghi", "jkl", "mno" };
	char find_string[32];
	int i;

	printf("찾고 싶은 문자열을 입력하세요 : ");
	scanf_s("%s", find_string, 32);

	for (i = 0; i < 5; i++) {
		if (strcmp(find_string, p_str_table[i]) == 0)	break;
	}
	
	if (i == 5) {
		printf("찾으시는 문자열이 없습니다\n");
		int len = strlen(p_str_table[0])+1;
		/*널문자전까지만복사하고 출력하기전 널문자넣어주는 코드
		도 많이 쓰이길래(소켓) 같이 보여드리고 싶어서 이렇게해요*/
		memcpy(find_string, p_str_table[0], len-1);
		find_string[strlen(p_str_table)] = 0;
		printf("%s\n", find_string);
	}
	else {
		printf("%s\n", find_string);
	}
}