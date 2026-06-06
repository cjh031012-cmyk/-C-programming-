//5-1 실습과제2
#include<iostream>
#include<string>
using namespace std;
string GetLatterString(string a, string b);
int main() {
	string s1("hello");
	string s2("world");
	string res;
	res = GetLatterString(s1, s2);
	cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}
string GetLatterString(string a, string b) {
	if (a > b)
		return a;
	else
		return b;
}

//5-1 실습과제3
#include<iostream>
#include<string>
using namespace std;
string GetLatterString(string* a, string* b);
int main() {
	string s1("hello");
	string s2("world");
	string res;
	res = GetLatterString(&s1, &s2);
	cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}
string GetLatterString(string* a, string* b) {
	if (a > b)
		return *a;
	else
		return *b;
}

//5-1 실습과제4
#include<iostream>
#include<string>
using namespace std;
void SwapString(string* a, string* b);
int main() {
	string s1("hello");
	string s2("world");
	cout << "호출전 s1:" << s1 << "s2:" << s2 << endl;
	SwapString(&s1,&s2);
	cout << "호출후 s1:" << s1 << "s2:" << s2 << endl;
 }
void SwapString(string* a,string* b) {
	string tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

//5-1 실습과제5
#include<iostream>
#include<string>
using namespace std;
string GetLastName(string* a);
int main() {
	string names[5];
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}
	string res = GetLastName(names);
	cout << "사전에서 가장 뒤에 나오는 문자열은" << res << endl;
}
string GetLastName(string* a) {
	string last = "A";
	for (int i= 0; i < 5; i++) {
		if (last < a[i]) {
			last = a[i];
		}
	}
	return last;
}

//5-2 실습과제 2
#include<iostream>
using namespace std;
void add2(int& value);
int main(void)
{
	int number;
	cout << "정수를 입력하세요:";
	cin >> number;
	add2(number);
	cout << "2만큼 증가한 값:" << number << endl;
	return 0;
}
void add2(int& value)
{
	value += 2;
}

//5-2 실습과제 3
#include<iostream>
using namespace std;
void swap(int& a, int& b);
int main() {
	int x, y;
	cout << "정수x를 입력하시오:";
	cin >> x;
	cout << "정수y를 입력하시오:";
	cin >> y;
	cout << "swap함수 호출 전 x =" << x << ", y =" << y << endl;
	swap(x, y);
	cout << "swap함수 호출 후 y =" << x << ", y =" << y << endl;
	return 0;
}
void swap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//5-2 실습과제 4
#include<iostream>
using namespace std;
int get_part(double& a);
int main() {
	double a;
	cout << "실수를 입력하시오:";
	cin >> a;
	int b = get_part(a);
	cout << "정수부:" << b << endl;
	cout << "소수부:" << a << endl;
	return 0;
}
int get_part(double& a) {
	int x = a;
	a -= x;
	return x;
}


//5-3 실습과제2
#include<iostream>
#include<string>
using namespace std;
void Uppercase(string& a);
int main() {
	string s1("hello");
	cout << "변환전 문자열 " << s1 << endl;
	Uppercase(s1);
	cout << "변환후 문자열 " << s1 << endl;
	return 0;
}
void Uppercase(string& a) {
	for (int i = 0; i < a.length(); i++) {
		a[i] = toupper(a[i]);
	}
}

//5-3 실습과제3
#include <iostream>
#include <string>
using namespace std;
void SwapString(string& a, string& b);
int main() {
	string s1("hello");
	string s2("world");
	cout << "교환전 문자열 " << s1 << s2 << endl;
	SwapString(s1, s2);
	cout << "교환후 문자열 " << s1 << s2 << endl;
	return 0;
}
void SwapString(string& a, string& b) {
	string tmp;
	tmp = a;
	a = b;
	b = a;
}

//5-3 실습과제4
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	Circle& plus(int n) {
		radius += n;
		return *this;
	}
	Circle& minus(int n) {
		radius -= n;
		return *this;
	}
	int getRadius() { return radius; }
};
int main() {
	Circle a(5);
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
	cout << "객체 a의 반지름은 " << a.getRadius();
	return 0;
}

