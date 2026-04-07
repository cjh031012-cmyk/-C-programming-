###소스코드설명
---
```cpp
#include <iostream>
```

- c++ 표준 입출력 선언이 들어가있는 헤더파일 iostream 포함

```cpp
using namespace std;
```

- 표준 이름공간 std 생략

```cpp
int main() {
```

- 메인 함수 시작

```cpp
    cout << "저장할 문자열의 크기를 입력하세요:";
```

- 할당 받아야할 배열의 크기를 받는 메시지 출력

```cpp
    int n;
```

- 배열의 크기 값을 받을 정수형 변수 n 초기화

```cpp
    cin >> n;
```

- 입력받은 정수를 n에 저장

```cpp
    if (n <= 0) return -1;
```

- n값이 0보다 같거나 작으면 오류처리

```cpp
    cin.ignore();
```

- 버퍼에 남아있는 '\n' 문자 제거

```cpp
    char* p = new char[n+1];
```

- 마지막 널문자까지 저장 받아야 해서 n+1개의 char 배열 동적할당 받음

```cpp
    if (!p) {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return -1;
    }
```

- 힙 메모리가 부족하면 오류 처리

```cpp
    cout << "문자열을 입력하세요:" ;
```

- 문자열을 받을 메시지 출력

```cpp
    cin.getline(p, n + 1);
```

- cin.getline을 통해 입력받은 문자열을 p배열에 저장 (공백 포함)

```cpp
    cout << "입력한 문자열은 " << p << "입니다." << endl;
```

- 입력한 문자열을 모니터에 출력

```cpp
    delete[] p;
```

- 메모리 반납

```cpp
    return 0;
}
```

- 0을 리턴하며 함수종료

###실행결과
---
