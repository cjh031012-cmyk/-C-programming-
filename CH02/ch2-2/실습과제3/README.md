###소스코드 설명
---

```cpp
#include <iostream>
```

- cin, cout가 들어있는 헤더파일 iostream 포함

  
```cpp
using namespace std;
```

- C++ 표준에서 정의한 이름공간 생략방법

```cpp
int main(void) {
```

- 메인함수 시작
  
```cpp
	int num;
```

- 학번을 받을 정수형 변수 num 초기화
  
```cpp
char name[20];
```

- 이름을 받을 문자형 배열 name 초기화
  
```cpp
	char address[30];
```

- 주소를 받을 문자형 배열 address 초기화

```cpp
	cout << "학번을 입력하시오:";
```

- cout을 통해 학번을 입력받을 메시지를 모니터에 출력

```cpp
cin >> num;
```

- 변수 num에 입력받은 정보 저장

```cpp
	cin.ignore();
```

- 버퍼를 비움

```cpp
cout << "이름을 입력하시오:";
```

- cout을 통해 이름을 받을 메시지를 모니터에 출력

```cpp
cin >> name;
```

- 입력받은 이름을 배열 name에 저장
  
```cpp
  cin.ignore();
```

- 버퍼를 비움
  
```cpp
cout << "주소를 입력하시오:";
```

- cout을 통해 주소를 받을 메시지를 모니터에 출력
  
```cpp
cin.getline(address, sizeof(address), '\n');
```

- 스페이스바까지 저장할 getline 사용해 address에 저장

  
```cpp
cout << "1.학번:" << num << '\n' << endl;
cout << "2.이름:" << name << '\n' << endl;
cout << "3.주소: " << address << endl ;
```

- cout을 통해 학번 이름 주소를 모니터에 출력
  
```cpp  
	return 0;
```

- 0을 반환하며 함수종료

###실행결과
---
<img width="987" height="470" alt="image" src="https://github.com/user-attachments/assets/b419c761-61e3-4668-b8b9-bb23dcbe3219" />
