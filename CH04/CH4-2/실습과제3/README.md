###소스코드설명
---
```cpp
#include <iostream>
```

- C++ 표준 입출력에 선언이 들어있는 헤더파일 <iostream> 포함

```cpp
using namespace std;
```

- 표준 std 이름공간으로 생성으로 생략

```cpp
int main() {
```

- 메인함수시작

```cpp
    cout << "입력할 정수의 개수를 입력하세요:";
```

- 메모리 할당의 크기를 받기위한 메시지 모니터에 출력

```cpp
    int n;
```

- 메모리 할당을 크기를 받을 변수 n 초기화

```cpp
    cin >> n;
```

- 입력 받은 정수를 변수 n에 저장

```cpp
    if (n <= 0) return -1;
```

- n이 0보다 작거나 같으면 오류 처리

```cpp
    int* p = new int[n];
```

- int형 배열 n 만큼 동적할당 받음

```cpp
    if (!p) {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return -1;
    }
```

- 힙 메모리가 부족하면 null(포인터)을 리턴

```cpp
    cout << n << "개의 정수를 입력하시오" << endl;
```

- 정수를 입력하라는 메세지 출력

```cpp
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
```

- n-1만큼 반복하고, 받은 정수를 배열에 하나씩 반복 저장

```cpp
    int sum = 0;
```

- 총합을 받을 변수 sum 초기화

```cpp
    for (int i = 0; i < n; i++)
        sum += p[i];
```

- n-1만큼 반복하게 하고 sum값 배열에 있는 처음값 [0] 부터 [n-1]값을 다 더하고 저장

```cpp
    cout << "평균값은  " << sum / n << "입니다." << endl;
```

- 평균값을 내보내는 메시지 출력

```cpp
    delete[] p;
```

- 동적할당 받은 배열 반납

```cpp
    return 0;
}
```

- 0을 리턴하면서 함수종료

###실행결과
---
