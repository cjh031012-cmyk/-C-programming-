###소스코드 설명
---

```cpp
#include <iostream>
```

- cout가 포함된 헤더파일 iostream을 포함
  
```cpp
using namespace std;
```

- C++ 표준에서 정의한 이름공간 생략방법

```cpp
int main() {
```

- 메인 함수 시작

```cpp
for (int n = 0; n < 4; n++) {
```

- 행의 개수를 위한 반복


```cpp
		for (int j = -1; j < n; j++) {
	cout << "*";
		}
```

- *을 행의 숫자만큼 생성 반복


```cpp
		cout << "\n";
```

- 행을 만들기 위한 줄바꿈

```cpp
	return 0;
```

- 0을 반환하며 함수 종료

###실행결과
---
<img width="832" height="260" alt="image" src="https://github.com/user-attachments/assets/40651e38-1439-4ef8-8278-4fdd800e2c13" />
