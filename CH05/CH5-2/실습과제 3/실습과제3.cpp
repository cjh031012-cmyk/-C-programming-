// **********************************************
// 제 목 : ch5-2 실습과제3
// 날 짜 : 2026년 05월 10일
// 작성자 : 2201053 최종화
// **********************************************

#include<iostream>
using namespace std;
void swap(int& a, int& b);
int main(void)
{
	int x, y;
	cout << "정수x를 입력하시오:" << endl;
	cin >> x;
	cout << "정수y를 입력하시오:" << endl;
	cin >> y;

	cout << "swap함수 호출 전 x =" << x << ", y=" << y << endl;
	swap(x, y);
	cout << "swap함수 호출 후 x =" << x << ", y=" << y << endl;

	return 0;
}
void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
