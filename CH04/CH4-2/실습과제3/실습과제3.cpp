// **********************************************
// 제 목 : ch4-2 실습과제3
// 날 짜 : 2026년 04월 07일
// 작성자 : 2201053 최종화
// **********************************************


#include <iostream>
using namespace std;
int main() {
    cout << "입력할 정수의 개수를 입력하세요:";
    int n;
    cin >> n;
    if (n <= 0) return -1;
    int* p = new int[n];
    if (!p) {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return -1;
    }
    cout << n << "개의 정수를 입력하시오" << endl;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += p[i];
    cout << "평균값은  " << sum / n << "입니다." << endl;
    delete[] p; 
    return 0;
}
