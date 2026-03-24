###소스코드 설명
---

```cpp
#include <iostream>
```

- 표준 입출력의 선언이 들어있는 iostream 헤더파일 포함

```cpp
using namespace std;
```

- 표준 이름공간 std 생략

```cpp
class Triangle {
```

- 객체 선언 및 정의

```cpp
	int under, height;
```

- 밑변과 높이를 저장받을 멤버변수

```cpp
public:
```

- 어디서든 허용 가능하게 만들어줌

```cpp
	Triangle(int a, int b);
```

- 타겟생성자가 될 생성자 선언

```cpp
	Triangle();
```

- 위임생성자가 될 생성자 선언

```cpp
	~Triangle();
```

- 소멸자 선언

```cpp
	double getArea();
```

- 삼각형의 넓이를 받을 함수 선언

```cpp
double Triangle::getArea() {
	return under * height * (1.0 / 2.0);
}
```

- 삼각형의 넓이를 받을 함수 정의 (삼각형의 넓이 공식으로 구한 값 리턴)

```
Triangle::Triangle(): Triangle(1,1){}
```

- 위임생성자 정의 (객체를 생성할때 매개변수를 받지 않으면 자동으로 멤버변수 under,height에 각각 1씩 저장된다.

```cpp
Triangle::Triangle(int a, int b) : under(a), height(b) { cout << "밑변" << under << "높이" << height << "인 삼각형 생성" << endl; }
```

- 타겟생성자 정의 (객체를 생성할 때 매개변수를 받으면 멤버변수 under,height에 각각 매개변수 a,b를 저장하고, 객체가 생성될때 cout을 통해 삼각형의 생성 글자를 모니터에 출력함

```cpp
Triangle::~Triangle() { cout << "밑변" << under << "높이" << height << "인 삼각형 소멸" << endl; }
```

- 소멸자 정의 (객체가 사라질때 cout을 통해 삼각형 소멸 메시지를 모니터에 출력함

```cpp
		Triangle tri1;
```

- triagnle형 전역객체 tri1 생성


```cpp
		Triangle tri2(2, 4);
```

- triagnel형 전역객체 tri2 생성
```cpp
int main() {
```

- 메인함수 시작

```cpp
		cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```

- cout을 통해  삼각형의 면적을 모니터로 출력하고, 함수 getArea 호출을 통해 삼각형의 넓이 값을 내본냄

```cpp
		cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```

- cout을 삼각형의 면적을 모니터에 출력하고, 함수 getArea 호출을 통해 삼각형의 넓이 값을 내보냄

```cpp
		return 0;
```

- 0을 리턴하며 함수 종료

###실행결과
<img width="1108" height="305" alt="image" src="https://github.com/user-attachments/assets/954c1ea7-af87-401c-a129-9c09afb37996" />


###실습과제 2번과 실행결과가 다른 이유

- 객체 생성을 전역객체로 생성해서 main 함수 시작 전부터 초기화를 먼저하기 때문입니다.
