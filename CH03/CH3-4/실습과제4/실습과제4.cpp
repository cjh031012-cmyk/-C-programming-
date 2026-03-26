// **********************************************
// 제 목 : ch3-4 실습과제4
// 날 짜 : 2026년 03월 26일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Triangle {
private:
	int width;
	int height;
public:
	Triangle();
	Triangle(int w, int h);
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
	~Triangle();
};

Triangle::Triangle(int w, int h) : width(w), height(h) {
	if (w <= 0 or h <= 0) {
		width = 1;
		height = 1;
		cout << "길이는 양수여야함, 대신에 폭 1,높이1 삼각형 생성" << endl;
	}
	else
	{
		cout << "폭" << width << "높이" << height << "삼각형 생성" << endl;
	}
}
Triangle::Triangle() :Triangle(1, 1) { }
Triangle::~Triangle(){ cout << "폭" << width << "높이" << height << "삼각형 소멸" << endl; }
void Triangle::setWidth(int w) {
	if (w <= 0) {
		cout << "폭은 양수이어야 함" << endl;
		width = 1;
	}
	else
	width = w;
}
void Triangle::setHeight(int h) {
	if (h <= 0) {
		cout << "높이는 양수이어야 함" << endl;
		height = 1;
	}
	height = h;
}
int Triangle::getWidth() {
	return width;
}
int Triangle::getHeight(){
	return height;
}
int main() {
	Triangle tri(-10, -5);
	tri.setWidth(-3);
	tri.setHeight(-5);
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은" << tri.getWidth() << endl;
	cout << "삼각형의 높이는" << tri.getHeight() << endl;
	return 0;
}
