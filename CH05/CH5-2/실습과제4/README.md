###소스코드설명
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
int get_parts(double& a);
```

- 정수부와 소수부를 구분하는 함수 get_parts 선언

```cpp
int main(void) {
	double x;
	cout << "실수를 입력하시오:" << endl;
	cin >> x;
```

- 메인 함수 시작, 실수 하나를 입력 받음

```cpp
	int integer = get_parts(x);
```

- get_parts 함수 호출

```cpp
	cout << "정수부: " << integer << endl;
	cout << "소수부: " << x << endl;
}
```

- 정소부, 소수부 출력

```cpp
int get_parts(double& a)
{
	int integer = (int)a;
	a = a - integer;
	return integer;
}
```

- 정수부는 반환하고, 참조에 의한 호출로 매개변수를 소수부분으로 값을 바꾸는 함수

###실행화면
---
<img width="1109" height="187" alt="image" src="https://github.com/user-attachments/assets/44c68843-1009-48a1-b307-eef37c3e4be6" />
