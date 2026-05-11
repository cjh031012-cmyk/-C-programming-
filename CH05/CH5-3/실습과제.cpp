#include <iostream>
#include <string>
using namespace std;
void Uppercase(string& a);
int main() {
    string s1 = "hello";

    cout << "변환전 문자열: " << s1 << endl;

    Uppercase(s1);

    cout << "변환후 문자열: " << s1 << endl;

    return 0;
}

void Uppercase(string& a)
{
    for (int i = 0; i < a.length(); i++) {
        a[i] = toupper(a[i]);
    }
}


#include<iostream>
#include<string>
using namespace std;
void SwapString(string& a1, string& a2);
int main(void) {
	string s1("hello");
	string s2("world");
	cout << "교환전 문자열 " << s1 << s2 << endl;
	SwapString(s1, s2);
	cout << "교환후 문자열 " << s1 << s2 << endl;
	return 0;
}
void SwapString(string& a1, string& a2)
{
	string tmp;
	tmp = a1;
	a1 = a2;
	a2 = tmp;
}

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
