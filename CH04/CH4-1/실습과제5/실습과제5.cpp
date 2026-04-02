// **********************************************
// 제 목 : ch4-1 실습과제5
// 날 짜 : 2026년 04월 02일
// 작성자 : 2201053 최종화
// **********************************************

#include<iostream>
using namespace std;
class Triangle {
private:
	double width;
	double height;
public:
	Triangle(double width, double height) { this->width = width; this->height = height; cout << "밑변" << this->width << "높이" << this->height << "인 삼각형 생성" << endl; }
	Triangle() { width = 1; height = 1; }
	double getArea() {
		return width * height * (0.5);
	}
	~Triangle() { cout << "밑변" << width << "높이" << height << "인 삼각형 소멸" << endl; }
};
int main(void) {
	Triangle t[3] = { Triangle(2,2), Triangle(4, 4), Triangle(6, 6) };
	Triangle* p = t;
	int i = 0;
	for (i = 0; i < 3; i++) {
		cout << "삼각형" << i << "의 면적은" << (p+i)->getArea() << endl;
	}
	return 0;
}
