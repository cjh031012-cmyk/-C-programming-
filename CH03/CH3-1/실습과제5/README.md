####소스코드설명
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

- Rectangle 클래스 선언 및 정의

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
	void getRighthight(int* px, int*py);
};
```

- 좌표 멤버변수 x,y 밑변 높이 멤버변수 width, height 넓이 둘레 우측상단 좌표를 구하는 멤버함수 선언

```cpp
int Rectangle::getArea() {
	return width * height;
}
```

- 넓이를 구하는 함수 getArea 정의

```cpp
int Rectangle::getCircum() {
	return 2 * width + 2 * height;
}
```

- 둘레를 구하는 함수 getCircum 정의

```cpp
void Rectangle::getRighthight(int* px, int* py) {
	*px = x + width;
	*py = y - height;
}
```

- 우측 상단의 좌표값을 넣어줄 함수 getRighthight 정의

```cpp
int main() {
```

- 메인함수 시작

```cpp
	Rectangle rect;
```

- Rectangle 클래스형의 객체 rect 선언

```cpp
	cout << "사각형의 좌측상단좌표(x,y) :" << endl;
	cin >> rect.x >> rect.y;
	cout << "사각형의 폭과 높이(width,height):" << endl;
	cin >> rect.width >> rect.height;
```

- 표준 출력 cout을 통해 입력받아야하는 값을 설명하는 문자열 출력, 표준 입력 cin을 통해 그 값을 각각 객체 변수 x,y,width,height에 데이터 저장

```cpp
	cout << "사각형의 면적은" << rect.getArea() << endl;
	cout << "사각형의 둘레길이는" << rect.getCircum() << endl;
```

- 표준 출력 cout통해 면적과 둘레를 모니터에 출력, 함수 getArea,getCircum을 호출해서 값 호출

```cpp
int px, py;
```

- 우측 상단 좌표값을 받을 px,py 선언

```cpp
	rect.getRighthight(&px, &py);
```

-getRighthight 함수를 호출해서 px,py주소를 통해 우측 상단 좌표값 x,y를 px,py값을 바꿈

```cpp
	cout << "사각형의 우측하단의 좌표는 (" << px << "," << py << ")" << endl;
```

- 표준 출력 cout을 통해 사각형 우측 상단의 좌표를 모니터에 출력

```cpp
	return 0;
}
```

- 0을 반환하며 함수 종료

###실행결과
---
<img width="1018" height="490" alt="image" src="https://github.com/user-attachments/assets/d8e616af-227d-437f-b180-961d422e7fe7" />
