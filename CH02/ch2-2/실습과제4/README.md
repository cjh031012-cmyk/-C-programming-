###소스코드 설명
---

```cpp
#include <iostream>
```

- cout, cin이 들어있는 헤더파일 iostream을 포함

```cpp
using namespace std;
```

- C++ 표준에서 정의한 이름공간 생략 방법

```cpp
int main(void) {
```

- 메인함수 시작

```cpp
	double num[5];
```

- 실수 5개를 받을 실수형 배열 num 초기화

```cpp
cout << "실수 5개를 입력하세요:";
```

- cout을 통한 실수 5개를 받을 메시지 화면에 출력
  
```cpp
int i = 0;
```

- 반복문에 들어갈 변수 i 초기화

```cpp
	for (i = 0; i < 5; i++) {
	cin >> num[i];
	}
```

- 반복문을 통해 실수 5개를 차례대로 num배열에 저장
  
```cpp
	for (i = 0; i < 5; i++) {
		if (num[i] < 0) {
			num[i] = 0;
		}
	}
```

- 반복문을 통해 실수 5개를 검사하고, if문을 통해 값이 음수인 것은 0으로 만듬

```cpp
	double sum = num[0] + num[1] + num[2] + num[3] + num[4];
```

- 모든 값을 더하고 실수형 변수 sum에 저장
  
```cpp
	cout << "양수 합은" << sum << "입니다";
```

- cout을 통해 모니터에 sum값을 출력
  
```cpp
	return 0;
```

- 0을 반환하며 함수 종료

###실행결과
---
<img width="991" height="292" alt="image" src="https://github.com/user-attachments/assets/05366213-a267-413a-9f58-7fc71f1be3a5" />
