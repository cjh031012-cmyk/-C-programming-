###소소코드설명
---
```cpp
#include <iostream>
```

- C++ 표준입출력의 선언이 들어있는 iostream 헤더파일을 포함

```cpp
using namespace std;
```

- 표준입출력 std 이름공간 생략

```cpp
class Triangle {
```

- Triangle 클래스 선언 및 정의

```cpp
private:
	double under;
	double height;
```

- private으로 멤버변수 under,height를 정보은닉함

```cpp
public:
```

- public으로 선언된 멤버들은 어디든 접근 가능하게 함

```cpp
	Triangle();
```

- 생성자 선언

```cpp
	void setWidth(double u);
	void setHeight(double h);
```

- 멤버변수 width와 height를 초기화할 함수 선언

```cpp
	double getWidth();
	double getHeight();
```

- 멤버변수 width와 height를 리턴할 함수 선언

```cpp
	double getArea();
```

- 넓이를 구해주는 함수 선언

```cpp
	~Triangle();
};
```

- 소멸자 선언

```cpp
Triangle::Triangle() { under = 1; height = 1; cout << "폭" << under << "높이" << height << "삼각형생성" << endl; }
```

- 객체를 생성하면 멤버변수 under와 height 를 1로 초기화 하고, cout을 통해 모니터에 삼각형 생성 메시지 출력

```cpp
void Triangle::setWidth(double u) { under = u; }
void Triangle::setHeight(double h) { height = h; }
```

- 멤버변수 값을 초기화 하는 set 함수 정의

```cpp
double Triangle::getWidth() {
	return under;
}
double Triangle::getHeight() {
	return height;
}
```

- 멤버변수를 리턴해주는 get 함수 정의

```cpp
double Triangle::getArea() {
	return under * height * (0.5);
}
```

- 삼각형 넓이를 구해주는 함수 정의

```cpp
Triangle::~Triangle() { cout << "폭" << under << "높이" << height << "삼각형 소멸" << endl; }
```

- 소멸자 정의 cout을 통해 삼각형 소멸 메시지 출력

```cpp
int main() {
```

- 메인 함수 시작

```cpp
	Triangle tri;
```

- Triangle형 tri객체 생성

```cpp
tri.setWidth(3);
```

- set함수를 호출해 멤버변수 width 값을 3으로 초기화

```cpp
tri.setHeight(5);
```

- set함수를 호출해 멤버변수 height 값을 5로 초기화

```cpp
	cout << "삼각형의 폭은" << tri.getWidth() << endl;
		cout << "삼각형의 높이는" << tri.getHeight() << endl;
		cout << "삼각형의 넓이는" << tri.getArea() << endl;
		return 0;
```

- cout을 통해 삼격형 폭,높이,넓이 값을 모니터에 출력하고 0을 반환하며 함수 종료

###실행결과
---

<img width="1100" height="243" alt="image" src="https://github.com/user-attachments/assets/e838a122-13d7-4d6b-9436-75db57fda090" />
