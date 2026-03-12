// **********************************************
// 제 목 : ch2-2 실습과제3
// 날 짜 : 2026년 03월 11일
// 작성자 : 2201053 최종화
// **********************************************

#include <iostream>
using namespace std;
int main(void) {
	int num;
	char name[20];
	char address[30];

	cout << "학번을 입력하시오:";
	cin >> num;
	cin.ignore();
	cout << "이름을 입력하시오:";
	cin >> name;
	cin.ignore();
	cout << "주소를 입력하시오:";
	cin.getline(address, sizeof(address), '\n');
	cout << "1.학번:" << num << '\n' << endl;
	cout << "2.이름:" << name << '\n' << endl;
	cout << "3.주소: " << address << endl ;
	
	return 0;
}
