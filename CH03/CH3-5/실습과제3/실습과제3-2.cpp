// **********************************************
// 제 목 : ch3-5 실습과제3
// 날 짜 : 2026년 03월 30일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
class Coffee {
private:
	int coffee;
	int sugar;
	int milk;
	int water;
public:
	Coffee(int c, int s, int m, int w) { coffee = c; sugar = s; milk = m; water = w; }
	Coffee() :Coffee(10, 0, 0, 0) {}
	void show() {
		int i = 0;
		cout << "coffee" << " ";
		for (i = 0; i < coffee; i++) {
			cout << "*";
		}
		cout << endl;
		cout << "sugar" << " ";
		for (i = 0; i < sugar; i++) {
			cout << "*";
		}
		cout << endl;
		cout << "milk" << " ";
		for (i = 0; i < milk; i++) {
			cout << "*";
		}
		cout << endl;
		cout << "water" << " ";
		for (i = 0; i < water; i++) {
			cout << "*";
		}
		cout << endl;
	}

};
int main() {
	Coffee espresso;
	Coffee americano(5,0,0,10);
	Coffee cappuchhion(5, 1, 5, 2);
	Coffee mySweet(3, 7, 5, 5);

	espresso.show();
	cout << endl;
	mySweet.show();

	return 0;
}
