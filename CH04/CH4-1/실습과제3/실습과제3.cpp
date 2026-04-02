// **********************************************
// 제 목 : ch4-1 실습과제3
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
    Triangle(double width, double height) { this -> width = width; this ->height = height; }
    Triangle(double width) {this-> width = width; height = 1; }
    Triangle() { this->width = 1; this->height = 1; }
    double getArea() {
        return width * height * (0.5);
    }
};
int main() {
    Triangle tri1; // 밑변=높이=1로 초기화
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
        Triangle tri2(10); // 밑변=10,높이=1로 초기화
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
        Triangle tri3(10, 2); // 밑변=10,높이=2로 초기화
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;
        return 0;
}
