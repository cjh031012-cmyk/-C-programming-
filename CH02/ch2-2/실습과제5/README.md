###소스코드 설명
---

```cpp
#include <iostream>
```

- cout, cin이 들어있는 헤더파일 iostream을 포함함

```cpp
using namespace std;
```

- C++ 표준 이름공간 생략 방법

```cpp
int main(void) {
```

- 메인함수시작

```cpp
   char text[100];
```

- 문자열을 받을 문자형 배열 text 초기화

```cpp
    cout << "빈칸 없이 문자 열을 입력하세요:";
```

- cout을 통해 문자열을 받을 메시지 모니터에 출력

```cpp
    cin >> text;
```

- 입력받은 문자열 text 배열에 저장

```cpp
    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i] << ' ';
    }
```

- 반복문을 text의 \0문자를 만나기 전까지 반복하고 한칸씩 띄어쓰게 함

```cpp
  return 0;
```

- 0을 반환하고 함수 종료

###실행결과
---
<img width="979" height="283" alt="image" src="https://github.com/user-attachments/assets/60c59876-5dab-43ee-8107-11acc1955afc" />
