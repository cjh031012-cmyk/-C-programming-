// **********************************************
// 제 목 : ch5-2 실습과제4
// 날 짜 : 2026년 05월 10일
// 작성자 : 2201053 최종화
// **********************************************

#include<iostream>
using namespace std;
int get_parts(double& a);
int main(void) {
	double x;
	cout << "실수를 입력하시오:" << endl;
	cin >> x;

	int integer = get_parts(x);
	cout << "정수부: " << integer << endl;
	cout << "소수부: " << x << endl;
}
int get_parts(double& a)
{
	int integer = (int)a;
	a = a - integer;
	return integer;
}
