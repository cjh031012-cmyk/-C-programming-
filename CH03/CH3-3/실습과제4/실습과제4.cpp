// **********************************************
// 제 목 : ch3-3 실습과제4
// 날 짜 : 2026년 03월 23일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Sphere {
	double radius;
public:
	Sphere();
	Sphere(double a);
	double getVolume();
	~Sphere();
};
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
Sphere::Sphere(double a) :radius(a) { cout << "반지름" << radius << "인 구 생성" << endl; }
Sphere::Sphere() :Sphere(1.0) {}
Sphere::~Sphere() { cout << "반지름" << radius << "인 구 소멸" << endl; }
int main() {
	Sphere sph1;
	cout << "구의 부피는" << sph1.getVolume() << endl;
	Sphere sph2(3);
	cout << "구의 부피는" << sph2.getVolume() << endl;
	return 0;
}
