// **********************************************
// 제 목 : ch3-5 실습과제3
// 날 짜 : 2026년 03월 30일
// 작성자 : 2201053 최종화
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Picture {
private:
    int width;
    int height;
    char place[30];
public:
    Picture(int w, int h, const char* p) {
        width = w;
        height = h;
        strcpy(place, p);
    }
    Picture() : Picture(5, 7, "모름") {}
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    void setPlace(const char* p) {
        strcpy(place, p);
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    const char* getPlace() {
        return place;
    }
};

int main() {
    Picture pic;
    Picture mt(10, 14, "한라산");
    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
    return 0;
}
