####소스코드설명
---

```cpp
#include <iostream>
```

- C++ 표준입출력의 선언이 들어있는 헤더파일 iostream을 포함

```cpp
using namespace std;
```

- 표준입출력 std 이름공간의 생략 

```cpp
class Triangle {
```

- 클래스 Triangle 선언, 정의

```cpp
public:
```

- 멤버변수와 멤버함수를 main함수에 접근 가능하게 하기 위해서 사용

```cpp
	int under;
	int height;
	double getArea();
};
```

- 멤버 변수 밑변, 높이, 넓이를 구하는 멤버변수 선언

```cpp
double Triangle::getArea() {
	return under * height * 0.5;
}
```

- 넓이를 구하는 멤버 함수 정의

```cpp
int main() {
```

- 메인함수 시작

```cpp
	Triangle rect;
```

- 객체 rect 선언
  
```cpp
	rect.under = 3;
	rect.height = 5;
```

- 객체 rect의 멤버변수 under를 3으로 height를 5로 초기화

```cpp
	cout << "삼각형의 면적은" << rect.getArea() << endl;
```

- 표준 출력 cout을 통해 삼각형의 면적을 모니터에 출력

###실행결과
---
<img width="1108" height="234" alt="image" src="https://github.com/user-attachments/assets/eb696b5f-508c-4b56-8878-7ef534b0d355" />
