###소스코드 설명
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

- class Triangle 선언 및 정의

```cpp
private:
	int width;
	int height;
```

- private를 통해 멤버변수 width,height를 정보은닉함

```
public:
```

- 밑에 선언되는 멤버들을 어디든 접근 가능하게 만듬

```cpp
	Triangle();
	Triangle(int w, int h);
```

- 타겟,위임 생성자를 위한 생성자 선언

```cpp
	void setWidth(int w);
	void setHeight(int h);
```

- 멤버변수의 값을 다른값으로 초기화할 set함수 선언

```cpp
	int getWidth();
	int getHeight();
```

- 멤버변수를 리턴해줄 get 함수 선언

```cpp
	~Triangle();
};
```

- 소멸자 선언

```cpp
Triangle::Triangle(int w, int h) : width(w), height(h) {
	if (w <= 0 or h <= 0) {
		width = 1;
		height = 1;
		cout << "길이는 양수여야함, 대신에 폭 1,높이1 삼각형 생성" << endl;
	}
	else
	{
		cout << "폭" << width << "높이" << height << "삼각형 생성" << endl;
	}
}
```

- 타겟생성자 선언 (int형 매개변수 2개를 가지고 있는 객체일때 호출), 둘중에 하나라도 양수면 두 멤버변수를 1로 초기화, 그외면 두 멤버변수를 받은 매개변수로 초기화

```cpp 
Triangle::Triangle() :Triangle(1, 1) { }
```

- 객체 생성될때 매개변수가 없으면 멤버변수를 1로 초기화

```cpp
Triangle::~Triangle(){ cout << "폭" << width << "높이" << height << "삼각형 소멸" << endl; }
```

- 객체가 사라질때 cout을 통해 삼각형 소멸 메시지를 모니터에 출력

```cpp
void Triangle::setWidth(int w) {
	if (w <= 0) {
		cout << "폭은 양수이어야 함" << endl;
    width = 1;
	}
	else
	width = w;
}
void Triangle::setHeight(int h) {
	if (h <= 0) {
		cout << "높이는 양수이어야 함" << endl;
    height = 1;
	}
	height = h;
}
```

- 멤버변수 값을 바꿀 set 함수 정의 (매개변수가 0보다 작거나 같으면 양수여야 한다고 메시지 출력, 그 외는 멤버변수 초기화

```cpp
int Triangle::getWidth() {
	return width;
}
int Triangle::getHeight(){
	return height;
}
```

- 멤버변수를 리턴하는 get함수 정의

```cpp
int main() {
```

- 메인함수 시작

```cpp
	Triangle tri(-10, -5);
```

- Triangle형 tri객체 생성

```cpp
	tri.setWidth(-3);
	tri.setHeight(-5);
	tri.setWidth(3);
	tri.setHeight(5);
```

- set 함수를 통해 멤버변수 초기화

```cpp
	cout << "삼각형의 폭은" << tri.getWidth() << endl;
	cout << "삼각형의 높이는" << tri.getHeight() << endl;
```

- cout을 통해 삼각형 폭, 넓이 값을 모니터에 출력

```cpp
	return 0;
```

- 0을 리턴하며 함수종료

###실행결과
