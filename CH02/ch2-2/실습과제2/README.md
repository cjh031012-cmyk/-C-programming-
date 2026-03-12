###소스코드 설명
---

```cpp
#include <iostream>
```

- cout,cin을 포함하고 있는 헤더파일 iostream을 포함

```cpp
using namespace std;
```

- C++표준에서 정의한 이름공간 생략방법

```cpp
int main(void) {
```

- 메인함수 시작

  
```cpp
  int x = 0;
```

- 정수를 받을 변수 x 초기화

```cpp
	cout << "정수 x를 입력 하시오:";
```

- cout을 통해 모니터에 안내설명 출력

```cpp
cin >> x;
```

- 입력받은 정수를 변수x에 저장
  
```cpp
	int y = x * x + 2 * x - 5;
```

- y에 계산하고 싶은 방정식을 넣어서 저장

```cpp
cout << "x=" << x << "일때" << "y의 값은" << y << "입니다";
```

- cout을 통해 y값 모니터에 출력

  
```cpp
  return 0;
```

- 0을 반환하고 함수 종료

###실행결과
<img width="710" height="386" alt="image" src="https://github.com/user-attachments/assets/64f5f845-c174-444e-800f-9352637a48f3" />
