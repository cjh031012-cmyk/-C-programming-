// **********************************************
// 제 목 : ch3-2 실습과제2
// 날 짜 : 2026년 03월 19일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Triangle {
	int under, height;
public:
	Triangle();
	Triangle(int a, int b);
	double getArea();
};
double Triangle::getArea() {
	return under * height * (1.0 / 2.0);
}
Triangle::Triangle(): Triangle(1,1){}
Triangle::Triangle(int a, int b) : under(a), height(b) { }
int main() {
		Triangle tri1;
		cout << "삼각형의 면적은 " << tri1.getArea() << endl;
		Triangle tri2(2, 4);
		cout << "삼각형의 면적은 " << tri2.getArea() << endl;
		return 0;
}
