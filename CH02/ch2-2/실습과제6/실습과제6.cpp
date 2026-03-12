// **********************************************
// 제 목 : ch2-2 실습과제6
// 날 짜 : 2026년 03월 12일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
	while (true) {
		char text[100];
		cout << "영문 텍스트를 입력하세요(빈칸 포함 가능) >>";
		cin.getline(text, sizeof(text),'\n');
		if (strcmp(text,"exit") == 0) {
			break;
		}

		if (strlen(text) == 0) {
			cout << "단어의 개수는 0개 입니다." << endl;
			continue;
		}

		int count = 1;
		for (int i = 0; text[i] != '\0'; i++) {
			if (text[i] == ' ') {
				count++;
			}
		}
		cout << "단어의 개수는" << count << "개입니다." << endl;
	}
	return 0;
}
