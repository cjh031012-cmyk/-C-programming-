###소스코드 설명
---
```cpp
#include <iostream>
```

- 표준입출력 선언이 들어있는 iostream 헤더파일 포함

```cpp
using namespace std;
```

- 표준 이름 공간 std 생략

```cpp
class Sphere {
```

- Sphere 클래스 생성

```cpp
	double radius;
```

- 반지름을 받을 멤버변수 radius

```cpp
public:
```

- 어디서든 접근 가능하게 만듬

```cpp
	Sphere();
```

- 매개변수가 없는 객채를 생성할때 위임생성자로 호출될 생성자 선언

```cpp
	Sphere(double a);
```

- 매개변수가 있는 객체를 생성할때 타겟생성자로 호출될 생성자 선언

```cpp
	double getVolume();
```

- 구의 부피 값을 리턴할 getVolume 함수 선언

```cpp
	~Sphere();
```

- 소멸자 선언

```cpp
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
```

- 구의 부피 값을 리턴하는 getVolume 함수 정의

```cpp
Sphere::Sphere(double a) :radius(a) { cout << "반지름" << radius << "인 구 생성" << endl; }
```

- 매개변수가 있는 객체를 만들때 반지름 값으로 바로 초기화 하고, cout을 통해 구의 생성을 알려주는 메시지를 모니터에 출력하는 타켓생성자 정의

```cpp
Sphere::Sphere() :Sphere(1.0) {}
```

- 매개변수가 없는 객체를 만들때 반지름 값을 바로 1로 초기화 하고, cout을 통해 반지름이 1인 구의 생성을 알려주는 메시지를 모니터에 출력하는 위임생성자 정의

```cpp
Sphere::~Sphere() { cout << "반지름" << radius << "인 구 소멸" << endl; }
```

- 객체가 사라질때 소멸자 정의를 통해 구의 소멸을 알려주는 메시지를 모니터에 출력함


```cpp
	Sphere sph1;
```

- Sphere형 sph1 객체 생성

```cpp
	Sphere sph2(3);
```

- Sphere형 sph2 객체 생성 (구의 반지름이 3인)


```cpp
int main() {
```

- 메인 함수 시작

```cpp
	cout << "구의 부피는" << sph1.getVolume() << endl;
```

- cout을 통해 구의 부피를 알려주는 메시지를 모니터에 출력, getVolume 함수 호출로 구의 부피값 리턴 받음


```cpp
	cout << "구의 부피는" << sph2.getVolume() << endl;
```

- cout을 통해 구의 부피를 알려주는 메시지를 모니터에 출력, getVolume 함수 호출로 구의 부피값 리턴 받음

```cpp
	return 0;
```

- 0을 반환하며 함수종료

###실행결과
---
<img width="1104" height="287" alt="image" src="https://github.com/user-attachments/assets/954961c3-34de-41a9-a4ac-dfcedf336c8c" />

