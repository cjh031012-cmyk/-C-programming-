// **********************************************
// 제 목 : ch3-2 실습과제4
// 날 짜 : 2026년 03월 19일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;
    int x, y;

    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int w, int h);

    int getArea();
    int getPerimeter();
    void getRightBottom();
};
Rectangle::Rectangle(int x, int y, int w, int h)
    : x(x), y(y), width(w), height(h) {}
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
int Rectangle::getArea() {
    return width * height;
}
int Rectangle::getPerimeter() {
    return 2 * (width + height);
}
void Rectangle::getRightBottom() {
    cout << "(" << x + width << ", " << y - height << ")" << endl;
}
int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3, 5, 2, 4);

    cout << "rect1의 면적은 " << rect1.getArea() << endl;
    cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;

    cout << "rect3의 우측하단 좌표는 ";
    rect3.getRightBottom();

    return 0;
}
