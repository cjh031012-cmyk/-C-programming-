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
```

- 중복을 하지 않기 위해 Triangle 초기화

```cpp
	Triangle(int a, int b);
	double getArea();
};
double Triangle::getArea() {
	return under * height * (1.0 / 2.0);
}
Triangle::Triangle(): Triangle(1,1){}
Triangle::Triangle(int a, int b) : under(a), height(b) { }
int main() {
		Triangle tri1;
		cout << "삼각형의 면적은 " << tri1.getArea() << endl;
		Triangle tri2(2, 4);
		cout << "삼각형의 면적은 " << tri2.getArea() << endl;
		return 0;
}
