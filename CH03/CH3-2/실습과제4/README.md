###소스코드 설명
---
```cpp
#include <iostream>
```

- 표준입출력 선언이 들어있는 iostream 헤더파일을 포함

```cpp
using namespace std;
```

- 표준 이름공간 std 생략

```cpp
class Rectangle {
```

- class Rectangle 선언 및 호출

```cpp
public:
```

- 어디서든 허용 가능하게 만듬

```cpp
    int width, height;
    int x, y;
```

- 밑변과 높이, 좌표를 입력 받을 멤버변수 선언

```cpp
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int w, int h);
```

- 객체를 다양한 방식으로 초기화하기 위해 여러 생성자를 선언함

```cpp
    int getArea();
    int getPerimeter();
    void getRightBottom();
};
```

- 멤버 함수 선언

```cpp
Rectangle::Rectangle(int x, int y, int w, int h)
    : x(x), y(y), width(w), height(h) {}
```

- 타켓 생성자

```cpp
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
```

- 매개변수가 없을때 모든 값을 1로 초기화 하는 위임 생성자

```cpp
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
```

- int형 매개변수를 두 개를 받으면 x,y 값이 그 값으로 초기화 되고 나머지 w,h는 1로 초기화 하는 위임 생성자

```cpp
int Rectangle::getArea() {
    return width * height;
}
```

- 넓이를 구하는 함수 getArea 정의

```cpp
int Rectangle::getPerimeter() {
    return 2 * (width + height);
}
```

- 둘레를 구하는 함수 getPerimeter 정의

```cpp
void Rectangle::getRightBottom() {
    cout << "(" << x + width << ", " << y - height << ")" << endl;
}
```

- 우측상단의 값을 모니터에 출력하는 getRightBottom 정의

```cpp
int main() {
```

- 메인 함수 시작

```cpp
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3, 5, 2, 4);
```

- Rectangle 클래스형 객체 rect1,2,3 생성해서 1은 1로 초기화 하는 위임 생성자를 2는 x값을 3과 y값을 5로 초기화 하는 위임 생성자를 3은 타켓생성자를 호출

```cpp
    cout << "rect1의 면적은 " << rect1.getArea() << endl;
    cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
    cout << "rect3의 우측하단 좌표는 ";
```

- cout을 통해 면적 툴레 우측하단 좌표를 모니터에 출력

```
    rect3.getRightBottom();
```

- 멤버함수호출로 우측 상단 좌표를 나타냄

```cpp
    return 0;
```

- 0을 리턴하고 함수종료

###실행화면
---
<img width="987" height="272" alt="image" src="https://github.com/user-attachments/assets/a09997e7-d39b-42ec-aad0-cb8c90908cee" />

