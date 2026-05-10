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
void add2(int& value);
```

- 2를 증가시키는 함수 선언 (참조에 의한 호출)

```cpp
int main(void)
```

- 메인 함수 시작

```cpp
{
	int number;
```

- 받을 정수를 입력할 변수 number 초기화

```cpp
	cout << "정수를 입력하세요:";
	cin >> number;
```

- cout을 통해 정수 입력 메시지 출력 후 cin으로 받은 정수 값을 number에 저장

```cpp
	add2(number);
```

- add2 함수 호출

```cpp
	cout << "2만큼 증가한 값:" << number << endl;
	return 0;
}
```

- 함수 호출 후에 2 증가한 결과물 확인 후 함수 종료

```cpp
void add2(int& value)
{
	value += 2;
}
```

- add2 함수 정의, int 위에 &를 붙여서 참조에 의한 호출로 하고, 매개변수 값을 2 증가 시킴

###실행화면
---
<img width="1106" height="147" alt="image" src="https://github.com/user-attachments/assets/2429d17c-8fe7-4ecd-b0cf-816740e17151" />
