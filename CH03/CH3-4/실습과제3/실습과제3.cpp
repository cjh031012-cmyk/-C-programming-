// **********************************************
// 제 목 : ch3-4 실습과제3
// 날 짜 : 2026년 03월 25일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Triangle {
private:
	double under;
	double height;
public:
	Triangle();
	void setWidth(double u);
	void setHeight(double h);
	double getWidth();
	double getHeight();
	double getArea();
	~Triangle();
};
Triangle::Triangle() { under = 1; height = 1; cout << "폭" << under << "높이" << height << "삼각형생성" << endl; }
void Triangle::setWidth(double u) { under = u; }
void Triangle::setHeight(double h) { height = h; }
double Triangle::getWidth() {
	return under;
}
double Triangle::getHeight() {
	return height;
}
double Triangle::getArea() {
	return under * height * (0.5);
}
Triangle::~Triangle() { cout << "폭" << under << "높이" << height << "삼각형 소멸" << endl; }
int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은" << tri.getWidth() << endl;
		cout << "삼각형의 높이는" << tri.getHeight() << endl;
		cout << "삼각형의 넓이는" << tri.getArea() << endl;
		return 0;
}
