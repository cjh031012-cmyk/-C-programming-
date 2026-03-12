// **********************************************
// 제 목 : ch2-2 실습과제5
// 날 짜 : 2026년 03월 12일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;

int main(void) {
    char text[100];

    cout << "빈칸 없이 문자 열을 입력하세요:";
    cin >> text;

    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i] << ' ';
    }

    return 0;
}
 
