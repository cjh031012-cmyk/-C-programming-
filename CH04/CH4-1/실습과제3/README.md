###소스코드 설명
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
class Triangle {
```

- class Triangle 선언 및 정의

```cpp
private:
	double width;
	double height;
```

- 멤버변수 width와 height를 정보은닉함

```cpp
public:
```

- 생성자, 함수들을 어디든지 접근 가능하게 함

```cpp
    Triangle(double width, double height) { this -> width = width; this ->height = height; }
```

- 매개변수를 두개 받을때 멤버변수 width를 매개변수로 받은 width로 초기화 멤버변수 height를 매개변수로 받은 height로 초기화 한다 (this포인터를 사용해 같은 이름의 매개변수와 멤버변수 구분)

```cpp
    Triangle(double width) {this-> width = width; height = 1; }
```

- 매개변수를 하나만 받을 때 멤버변수 width를 매개변수로 받은 width로 초기화 멤버변수 height를 1로 초기화 (this포인터를 사용해 같은 이름의 매개변수와 멤버변수 구분)

```cpp
    Triangle() { this->width = 1; this->height = 1; }
```

- 매개변수가 없을 때 멤버변수 width와 height를 1로 초기화

```cpp
    double getArea() {
        return width * height * (0.5);
    }
```

- getArea 함수를 통해 호출되면 삼각형의 넓이가 리턴 된다.

```cpp
};
int main() {
```

- 메인함수 시작

```cpp
    Triangle tri1; // 밑변=높이=1로 초기화
```

- tri1 객체 생성

```cpp
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```

- cout을 통해 삼각형 면적을 알려주는 메시지를 모니터에 출력

```cpp
        Triangle tri2(10); // 밑변=10,높이=1로 초기화
```

- tri2객체 생성 매개변수가 하나 있으므로 위에 생성자를 통해 width가 10인 객체 생성

```cpp
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```

- cout을 통해 삼각형 면적을 알려주는 메시지를 모니터에 출력

```cpp
        Triangle tri3(10, 2); // 밑변=10,높이=2로 초기화
```

- tri3 객체 생성에 매개변수가 두개가 있으므로 위에 생성자를 통해 width는 10 height는 2인 객체 생성

```cpp
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;
```

- cout을 통해 삼각형 면적을 알려주는 메시지를 모니터에 출력

```cpp
        return 0;
}
```

- 0을 반환하며 함수종료

###실행결과
---
<img width="1100" height="233" alt="image" src="https://github.com/user-attachments/assets/42f10d36-9345-457c-98ce-b3c701ac9898" />

