####소스코드 설명
----

```cpp
#include <iostream>
```

- cout,cin이 있는 헤더파일 iostream을 포함한다

```cpp
#include <string.h>
```

- strcmp, strlen이 있는 string.h 헤더파일을 포함

```cpp
using namespace std;
```

- C++ 표준 이름공간 생략 방법

```cpp
int main(void) {
```

- 메인 함수 시작

```cpp
while (true) {
```

- 무한반복으로 계속 질문 함

```cpp
  	char text[100];
```

- 영문 텍스트를 받을 문자형 배열 선언

```cpp
cout << "영문 텍스트를 입력하세요(빈칸 포함 가능) >>";
```

- cout을 통한 영문 텍스트를 입력 받을 메시지 모니터에 출력

```cpp
	cin.getline(text, sizeof(text),'\n');
```

- getline을 통해 빈칸 포함 문자열을 받음
  
```cpp
		if (strcmp(text,"exit") == 0) {
			break;
		}
```

- strcmp함수로 text와 exit 비교 후 같으면 무한반복 종료 (while문 종료)

```cpp
		if (strlen(text) == 0) {
			cout << "단어의 개수는 0개 입니다." << endl;
			continue;
		}
```

- 문자를 입력하지 않았을때 0인 특수 경우를 넣음

```cpp
		int count = 1;
```

- 단어의 개수를 갤 변수 count를 1로 초기화 함

```cpp
		for (int i = 0; text[i] != '\0'; i++) {
			if (text[i] == ' ') {
				count++;
			}
		}
```

- 반복문을 통해 배열 text를 읽고, if문을 통해 띄어쓰기가 나올때 마다 단어 수가 올라가서 단어 개수를 샐 수 있게 만듬

```cpp
		cout << "단어의 개수는" << count << "개입니다." << endl;
}
```

- cout을 통해 단어개수를 알려주는 메시지를 모니터에 출력

```cpp
	return 0;
```

- 0을 반환하며 함수 종료

### 실행결과
---
<img width="1034" height="432" alt="image" src="https://github.com/user-attachments/assets/f071cc0e-9d6a-4dfb-b703-a428a6d7dba9" />
