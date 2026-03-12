// **********************************************
// 제 목 : ch2-2 실습과제4
// 날 짜 : 2026년 03월 12일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
int main(void) {
	double num[5];
	cout << "실수 5개를 입력하세요:";
	int i = 0;
	for (i = 0; i < 5; i++) {
		cin >> num[i];
	}
	for (i = 0; i < 5; i++) {
		if (num[i] < 0) {
			num[i] = 0;
		}
	}
	double sum = num[0] + num[1] + num[2] + num[3] + num[4];
	cout << "양수 합은" << sum << "입니다";
	return 0;
}
