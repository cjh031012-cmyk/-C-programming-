// **********************************************
// 제 목 : ch4-2 실습과제5
// 날 짜 : 2026년 04월 07일
// 작성자 : 2201053 최종화
// **********************************************


#include <iostream>
using namespace std;
int main() {
    cout << "저장할 문자열의 크기를 입력하세요:";
    int n;
    cin >> n;
    if (n <= 0) return -1;
    cin.ignore();
    char* p = new char[n+1];
    if (!p) {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return -1;
    }
    cout << "문자열을 입력하세요:" ;
    cin.getline(p, n + 1);

    cout << "입력한 문자열은 " << p << "입니다." << endl;
    delete[] p;
    return 0;
}
