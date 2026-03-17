// **********************************************
// 제 목 : ch3-1 실습과제4
// 날 짜 : 2026년 03월 16일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Rectangle {
public:
	int x;
	int y;
	int width;
	int height;
	int getArea();
	int getCircum();
	void getRighthight(int* px, int*py);
};
int Rectangle::getArea() {
	return width * height;
}
int Rectangle::getCircum() {
	return 2 * width + 2 * height;
}
void Rectangle::getRighthight(int* px, int* py) {
	*px = x + width;
	*py = y - height;
}
int main() {
	Rectangle rect;
	rect.x = 1;
	rect.y = 2;
	rect.width = 3;
	rect.height = 4;
	cout << "사각형의 면적은" << rect.getArea() << endl;
	cout << "사각형의 둘레길이는" << rect.getCircum() << endl;
	int px, py;
	rect.getRighthight(&px, &py);

	cout << "사각형의 우측하단의 좌표는 (" << px << "," << py << ")" << endl;

	return 0;
}
