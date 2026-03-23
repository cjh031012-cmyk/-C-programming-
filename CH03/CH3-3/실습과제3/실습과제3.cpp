// **********************************************
// 제 목 : ch3-3 실습과제3
// 날 짜 : 2026년 03월 23일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Triangle {
	int under, height;
public:
	Triangle(int a, int b);
	Triangle();
	~Triangle();
	double getArea();
};
double Triangle::getArea() {
	return under * height * (1.0 / 2.0);
}
Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(int a, int b) : under(a), height(b) { cout << "밑변" << under << "높이" << height << "인 삼각형 생성" << endl; }
Triangle::~Triangle() { cout << "밑변" << under << "높이" << height << "인 삼각형 소멸" << endl; }

Triangle tri1;
Triangle tri2(2, 4);
int main() {
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
