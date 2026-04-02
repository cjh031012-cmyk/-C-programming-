###소스코드
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

- class Triangle 선언 밑 정의

```cpp
private:
	double width;
	double height;
```

- 멤버변수 width와 height를 정보은닉함

```cpp
public:
```

- 생성자, 함수들을 어디든지 접근 가능하게 함

```cpp
	Triangle() : Triangle(1, 1) {}
```

- 매개변수가 없이 객체를 생성할때 width,height 값을 1로 초기화 하는 생성자 (위임생성자)

```cpp
	Triangle(double w, double h) {
		if (w <= 0) {
			cout << "폭은 양수여야합니다." << endl;
			width = 1;
		}
		else {
			width = w;
		}

		if (h <= 0) {
			cout << "높이는 양수여야합니다." << endl;
			height = 1;
		}
		else {
			height = h;
		}

		cout << "폭 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;
	}
```

- 매개변수를 2개 받을때 둘 다 if 문을 통해 양수인지 확인하고 양수가 아니면 1로 양수이면 매개변수로 초기화 합니다.

```cpp
	void setWidth(double w) {
		if (w <= 0) {
			cout << "폭은 양수여야합니다." << endl;
			width = 1;
		}
		else {
			width = w;
		}
	}
	void setHeight(double h) {
		if (h <= 0) {
			cout << "폭은 양수여야합니다." << endl;
			height = 1;
		}
		else {
			height = h;
		}
	}
```

- set 함수를 통해 멤버변수 width,height를 메인함수에서도 값을 바꿀수 있게 하고, if문을 통해 양수가 아니면 1로 양수이면 받은 매개변수로 초기화

```cpp
	double getWidth() {
		return width;
	}
	double getHeight() {
		return height;
	}
```

- get 함수를 통해 멤버변수 width,height의 값을 리턴할 수 있게 함

```cpp
	double getArea() {
		return width * height * (0.5);
	}
```

- getArea 함수로 삼각형의 넓이 값을 리턴할 수 있게 함

```cpp
	~Triangle() { cout << "폭" << width << "높이" << height << "인 삼각형 소멸" << endl; }
};
```

- 소멸자를 통해 객체가 사라질때 cout으로 삼각형 소멸 메시지 모니터에 출력

```cpp
int main() {
```

- 메인 함수 시작

```cpp
	Triangle tri;
```

- 객체 tri 생성

```cpp
	Triangle* p;
```

- tri 객체의 주소를 받기 위한 포인터 p 선언

```cpp
	p = &tri;
```

- 포인터 변수 p 값을 객체 tri 주소로 초기화

```cpp
  p->setWidth(3);
	p->setHeight(5);
```

- 객체의 포인터 표현으로 객체 tri의 set함수를 호출해 width는 3으로 height는 5로 초기화

```cpp
	cout << "삼각형의 면적은 " << p->getArea() << endl;
```

- cout을 통해 삼각형 면적을 모니터에 출력 (포인터 표현으로 tri.getArea() 함수 호출)

```cpp
	return 0;
}
```

- 0을 리턴하며 함수 종료

###실행결과
---
<img width="990" height="265" alt="image" src="https://github.com/user-attachments/assets/59a89bc9-4db2-4083-b3da-9a008d8c96ff" />
