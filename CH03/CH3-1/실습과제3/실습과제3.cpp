// **********************************************
// 제 목 : ch3-1 실습과제3
// 날 짜 : 2026년 03월 16일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Sphere{
public:
	int radius;
	double getVolume();
	double getArea();
};
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * (radius * radius * radius);
}
double Sphere::getArea() {
	return 4 * 3.14 * (radius * radius);
}
int main() {
	Sphere rect;
	rect.radius = 5;
	cout << "구의 부피는" << rect.getVolume() << endl;
	cout << "구의 표면적은" << rect.getArea() << endl;
	return 0;
}
