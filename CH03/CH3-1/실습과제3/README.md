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
class Sphere{
```

- Sphere 클래스 선언 및 정의

```cpp
public:
```

- main 함수에 접근 가능하게 만듬

```cpp
	int radius;
	double getVolume();
	double getArea();
};
```

- 멤버변수 radius, 부피와 넓이를 구하는 멤버함수 선언
  
```cpp
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * (radius * radius * radius);
}
```

- 부피를 구하는 함수 정의

```cpp
double Sphere::getArea() {
	return 4 * 3.14 * (radius * radius);
}
```

- 넓이를 구하는 함수 정의

```cpp
int main() {
```

- 메인 함수 시작

```cpp
	Sphere rect;
```

- 객체 rect 선언

```cpp
	rect.radius = 5;
```

- 객체 rect에 변수 radius 를 5로 초기화

```cpp
	cout << "구의 부피는" << rect.getVolume() << endl;
	cout << "구의 표면적은" << rect.getArea() << endl;
	return 0;
}
```

- 표준출력 cout 을 통해 부피와 표면적을 모니터로 출력하고, 함수 호출로 값을 불러옴

###실행결과
---
<img width="1059" height="436" alt="image" src="https://github.com/user-attachments/assets/22d8c508-3655-4dbb-b6be-670bb1d6994f" />
