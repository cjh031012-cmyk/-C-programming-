// **********************************************
// 제 목 : ch3-1 실습과제2
// 날 짜 : 2026년 03월 16일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Triangle {
public:
	int under;
	int height;
	double getArea();
};
double Triangle::getArea() {
	return under * height * 0.5;
}
int main() {
	Triangle rect;
	rect.under = 3;
	rect.height = 5;
	cout << "삼각형의 면적은" << rect.getArea() << endl;
}
