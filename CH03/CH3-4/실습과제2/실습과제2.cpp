// **********************************************
// 제 목 : ch3-4 실습과제2
// 날 짜 : 2026년 03월 25일
// 작성자 : 2201053 최종화
// **********************************************
#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int i);
	int getRadius();
	void setRadius(int r);
};
Circle::Circle() { radius = 1; }
Circle::Circle(int i) {
	if (i <= 0) {
		cout << "반지름은 양수여야합니다" << endl;
		radius = 1;
	}
	else {
		radius = i;
	}
}
int Circle::getRadius() {
	return radius;
}
void Circle::setRadius(int r) {
	radius = r;
}
int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은" << waffle.getRadius() << endl;
	return 0;
}
