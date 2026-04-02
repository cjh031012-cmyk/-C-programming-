// **********************************************
// 제 목 : ch4-1 실습과제2
// 날 짜 : 2026년 04월 02일
// 작성자 : 2201053 최종화
// **********************************************


#include <iostream>
using namespace std;
class Triangle {
private:
	double width;
	double height;
public:
	Triangle() : Triangle(1, 1) {}
	Triangle(double w, double h) {
		if (w <= 0) {
			cout << "폭은 양수여야합니다." << endl;
			width = 1;
		}
		else {
			width = w;
		}

		if (h <= 0) {
			cout << "높이는 양수여야합니다." << endl;
			height = 1;
		}
		else {
			height = h;
		}

		cout << "폭 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;
	}
	void setWidth(double w) {
		if (w <= 0) {
			cout << "폭은 양수여야합니다." << endl;
			width = 1;
		}
		else {
			width = w;
		}
	}
	void setHeight(double h) {
		if (h <= 0) {
			cout << "폭은 양수여야합니다." << endl;
			height = 1;
		}
		else {
			height = h;
		}
	}
	double getWidth() {
		return width;
	}
	double getHeight() {
		return height;
	}
	double getArea() {
		return width * height * (0.5);
	}
	~Triangle() { cout << "폭" << width << "높이" << height << "인 삼각형 소멸" << endl; }
};
int main() {
	Triangle tri;
	Triangle* p;
	p = &tri;
	p->setWidth(3);
	p->setHeight(5);
	cout << "삼각형의 면적은 " << p->getArea() << endl;
	return 0;
}
