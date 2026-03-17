###소스코드설명
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
class Rectangle {
```

- rectangle 클래스 선언 및 정의

```cpp
public:
```

- main 함수에 접근 가능하게 만듬

```cpp
	int x;
	int y;
	int width;
	int height;
	int getArea();
	int getCircum();
```

- 좌표 데이터를 입력할 멤버변수 x,y 넓이와 높이를 받을 멤버변수 width, height 넓이와 둘레를 값을 구하기 위한 멤버함수 선언

```cpp
	void getRighthight(int* px, int*py);
};
```

- 우측 상단의 좌표로 바꿀 함수 선언

```cpp
int Rectangle::getArea() {
	return width * height;
}
```

- 사각형의 넓이를 구하는 함수 정의

```cpp
int Rectangle::getCircum() {
	return 2 * width + 2 * height;
}
```

- 사각형의 둘레를 구하는 함수 정의

```cpp
void Rectangle::getRighthight(int* px, int* py) {
	*px = x + width;
	*py = y - height;
}
```

- 함수 인자에 포인터를 이용해 값을 바꾸는 함수 정의

```cpp
int main() {
```

- 메인함수 시작

```cpp
	Rectangle rect;
```

- 객체 rect 선언

```cpp
	rect.x = 1;
	rect.y = 2;
	rect.width = 3;
	rect.height = 4;
```

- 객체 rect에 멤버변수 좌표 x,y를 1과 2로 넓이와 높이를 3과 4로 초기화

```cpp
	cout << "사각형의 면적은" << rect.getArea() << endl;
	cout << "사각형의 둘레길이는" << rect.getCircum() << endl;
```

- 표준출력 cout을 통해 사각형의 면적과 둘레길이를 화면에 출력, 함수 호출로 값 호출

```cpp
int px, py;
```

- 우측 상단 좌표를 받을 x,y 선언

```cpp
	rect.getRighthight(&px, &py);
```

- 우측 좌표를 px,py 주소를 통해 함수로 받음

```cpp
	cout << "사각형의 우측상단의 좌표는 (" << px << "," << py << ")" << endl;
```

- cout을 통해 사각형의 우측상단의 좌표를 모니터에 출력

```cpp
	return 0;
}
```

- 0을 반환하고 함수 종료

###실행화면
---
<img width="1096" height="396" alt="image" src="https://github.com/user-attachments/assets/14ea0eb9-7c76-4c38-9d16-fded192ac6a8" />
