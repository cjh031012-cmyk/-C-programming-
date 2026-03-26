####소스코드 설명
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
class Circle {
```

- 클래스 Circle 선언 및 정의

```cpp
private:
	int radius;
```

- private을 통해 멤버 변수 radius를 정보은닉함

```cpp
public:
```

- 밑에 있는 멤버들의 정보를 어디든 접근 가능하게 만듬

```cpp
	Circle();
	Circle(int i);
```

- 타겟생성자와 위임생성자를 위한 생성자 선언

```cpp
	int getRadius();
	void setRadius(int r);
};
```

- 메인함수에서 멤버변수 값을 바꾸고 리턴 할 수 있는 set, get함수 선언

```cpp
Circle::Circle() { radius = 1; }
```

- 매개변수가 없는 객체 생성시 멤버변수 radius에 1을 초기화 함 (위임생성자)

```
Circle::Circle(int i) {
	if (i <= 0) {
		cout << "반지름은 양수여야합니다" << endl;
		radius = 1;
	}
	else {
		radius = i;
	}
}
```

- 매개변수가 있을때 매개변수 값이 0보다 작으면 멤버변수 값을 1로 그 외에는 매개변수 값을 멤버변수 값으로 초기화 (타겟생성자)

```cpp
int Circle::getRadius() {
	return radius;
}
void Circle::setRadius(int r) {
	radius = r;
}
```

- 메인함수에서 멤버변수 값을 바꾸고 리턴 하는 함수 정의

```cpp
int main() {
```

- 메인 함수 시작

```cpp
	Circle waffle;
```

- Circle형 waffle객체 생성

```cpp 
	waffle.setRadius(5);
```

- set 함수 호출로 멤버변수 radius 값을 5로 바꿈

```cpp
	cout << "원의 반지름은" << waffle.getRadius() << endl;
```

- 표준출력 cout을 통해 원의 반지름을 알려주는 메시지 모니터에 출력

```cpp
	return 0;
```

- 0을 리턴하고 함수 종료

###실행결과
---
<img width="1105" height="302" alt="image" src="https://github.com/user-attachments/assets/afeee38c-f595-4c28-9d83-676b1cf42942" />

