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

- 클래스 Triangle 선언 및 정의

```cpp
private:
```

- 멤버변수를 정보은닉하기 위한 private 사용

```cpp
	double width;
	double height;
```

- 높이와 넓이 값을 저장할 width와 height 변수 선언

```cpp
public:
```

- 어디든 접근 가능하게 하기위해서 public 사용

```cpp
	Triangle(): Triangle(1,1) {}
```

- 매개변수가 없을때 밑변과 높이를 1,1로 초기화하는 생성자 선언

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

- 타켓생성자 생성(매개변수가 있을때 받은 매개변수를 각각 width와 height에 각각 저장하고 cout을 통해 생성을 알리는 메시지 출력

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

- set함수 통해 메인함수에서 private 변수 값을 바꿀수있게 선언 및 정의

```cpp
	double getWidth() {
		return width;
	}
	double getHeight() {
		return height;
	}
	double getArea() {
		return width * height * (0.5);
	}
```

- get함수 통해 메인함수에서 private 변수 값을 나타낼수있게 선언 및 정의

```cpp
	~Triangle() { cout << "폭" << width << "높이" << height << "인 삼각형 소멸" << endl; }
};
```

- 객체가 사라질때 소멸했다는 메시지 출력

```cpp
int main() {
```

- 메인함수 시작

```cpp
	Triangle tri;
```

- Triangle 형 객체 생성

```cpp
	tri.setWidth(3);
```

- set함수를 호출해 width 값에 3으로 초기화

```cpp
	tri.setHeight(5);
```

- set함수를 호출해 height 값을 5로 초기화

```cpp
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
```

- cout을 통해 삼각형 면적을 알려주는 메시지 출력(getArea 함수를 호출해 넓이를 리턴받음)

```cpp
	return 0;
```

- 0을 반환하며 함수 종료

###실행결과
---
<img width="492" height="280" alt="image" src="https://github.com/user-attachments/assets/41d2730a-7049-4e91-a4a3-c99a4f9e95ed" />


