###소스코드 설명
---
```cpp
#include<iostream>
```

- C++ 표준입출력의 선언이 들어있는 iostream 헤더파일을 포함

```cpp
using namespace std;
```

- 표준입출력 std 이름공간 생략

```cpp
void swap(int& a, int& b);
```

- 두 값을 바꿀 swap 함수 선언

```cpp
int main(void)
```

- 메인 함수 시작

```cpp
{
	int x, y;
	cout << "정수x를 입력하시오:" << endl;
	cin >> x;
	cout << "정수y를 입력하시오:" << endl;
	cin >> y;
```

- 스왑할 정수 2개를 입력 받고 각각 x와 y에 값을 저장

```cpp
	cout << "swap함수 호출 전 x =" << x << ", y=" << y << endl;
```

- 스왑함수 호출 전 x,y 값 출력

```cpp
	swap(x, y);
```

- swap함수 호출

```cpp
	cout << "swap함수 호출 후 x =" << x << ", y=" << y << endl;
```

- swap함수 호출 후 x,y 값 출력

```cpp
	return 0;
}
```

- 0을 리턴하며 함수 종료

```cpp
void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
```

- swap 함수 정의, 참조에 의한 호출로 지역변수 tmp을 이용해 값을 바꿈
