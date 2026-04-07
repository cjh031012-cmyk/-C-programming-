###소스코드설명
---
```cpp
#include <iostream>
```

- C++ 표준 입출력 선언이 들어있는 iostream 포함

```cpp
using namespace std;
```

- 표준 이름공간 std 생략

```cpp
int main() {
```

- 메인함수시작

```cpp
    cout << "입력할 실수의 개수를 입력하세요:";
```

- 할당받을 배열의 수를 받기 위한 메시지 출력

```cpp
    double n;
```

- 받은 값을 저장받을 double형 변수 n 초기화

```cpp
    cin >> n;
```

- 받은 값을 n에 저장

```cpp
    if (n <= 0) return -1;
```

- n값이 0이랑 같거나 작을 경우 오류처리

```cpp
    double* p = new double[n];
```

- double형 n크기의 배열 동적 할당 받음

```cpp
    if (!p) {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return -1;
    }
```

- 힙메모리가 부족하면 널포인터을 리턴

```cpp
    cout << n << "개의 실수를 입력하시오" << endl;
```

- 실수를 입력하라는 메시지 출력

```cpp
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
```

- 반복문을 통해 입력 받는 실수를 배열에 저장

```cpp
    int best = 0;
```

- 최댓값을 가지는 인덱스 값을 0으로 초기화

```cpp
    for (int i = 0; i < n; i++)
        if (p[best] < p[i]) {
            best = i;
        }
```

- 배열에 있는 모든 값을 최댓값이랑 비교하고, 최댓값보다 크다면 최댓값을 가지는 인덱스로 best값 초기화

```cpp
    cout << "최대값은은  " << p[best] << "입니다." << endl;
```

- 최댓값을 내보내는 메시지 출력

```cpp
    delete[] p;
```

- 할당받은 메모리 반납

```cpp
    return 0;
}
```

- 0을 리턴하며 함수종료

###실행결과
---
