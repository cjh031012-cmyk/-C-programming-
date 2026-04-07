// **********************************************
// 제 목 : ch4-2 실습과제4
// 날 짜 : 2026년 04월 07일
// 작성자 : 2201053 최종화
// **********************************************


#include <iostream>
using namespace std;
int main() {
    cout << "입력할 실수의 개수를 입력하세요:";
    double n;
    cin >> n;
    if (n <= 0) return -1;
    double* p = new double[n];
    if (!p) {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return -1;
    }
    cout << n << "개의 실수를 입력하시오" << endl;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int best = 0;
    for (int i = 0; i < n; i++)
        if (p[best] < p[i]) {
            best = i;
        }
    cout << "최대값은은  " << p[best] << "입니다." << endl;
    delete[] p; 
    return 0;
}
