####소스코드 설명
---

```cpp
#include <iostream>
```

- 표준 입출력에 선언이 들어있는 iostream 헤더파일을 포함한다

```cpp
using namespace std;
```

- 표준 이름공간 std를 생략

```cpp
class Triangle {
```

- 클래스 Triangle 선언 및 정의

```cpp
	int under, height;
```

- 밑변과 높이 값을 받을 멤버변수 under 와 height

```cpp  
public:
```

- 어디서든 허용가능하게 한다.

```cpp
	Triangle();
	Triangle(int a, int b);
```

- 위임생성자와 타켓생성자를 선언

```cpp
	double getArea(); 
};
```

- 멤버 함수 선언

```cpp
double Triangle::getArea() {
	return under * height * (1.0 / 2.0);
}
```

- 멤버 함수 getArea의 정의
  
```cpp
Triangle::Triangle(): Triangle(1,1){}
```

- 기본 생성자가 Triangle(1,1) 생성자를 호출하도록 정의했다

```cpp
Triangle::Triangle(int a, int b) : under(a), height(b) { }
```

- 타켓 생성자 정의

```cpp
int main() {
```

- 메인 함수 시작

```cpp
		Triangle tri1;
		cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```

- 객체 tri1은 Triangle() 기본 생성자 임으로, (1,1)를 위임되어 멤버 변수 under와 height에 각각 1이 초기화된다.

```cpp
		Triangle tri2(2, 4);
		cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```

- 객체 tri2 매개변수가 있는 생성자 Triangle(int a, int b) 직접호출 되며 멤버 변수 under와 height에 각각 2와 4가 초기화된다.

```cpp
  return 0;
```

- 0을 리턴하며 함수종료

###실행화면
---
<img width="1000" height="327" alt="image" src="https://github.com/user-attachments/assets/c27d4e20-a4c1-4d04-9c45-8b7602cbb072" />

