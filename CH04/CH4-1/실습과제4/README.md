###소스코드설명
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

- 클래스 Triangle 선언 및 정의

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
	Triangle(double width, double height) { this->width = width; this->height = height; cout << "밑변" << this->width << "높이" << this->height << "인 삼각형 생성" << endl; }
```

- 매개변수를 두개 받는 객체를 생성할때 멤버함수 width를 매개변수 width, 멤버변수 height를 매개변수 height로 초기화 하고, cout을 통해 생성을 알려주는 메시지를 모니터에 출력

```cpp
	Triangle() { width = 1; height = 1; }
```

- 매개변수가 없는 객체를 생성할때 width와 height를 1로 초기화 (위임 생성자라 위에있는 타겟생성자의 cout도 나옴)

```cpp
	double getArea() {
		return width * height * (0.5);
	}
```

- 삼각형의 넓이를 리턴해주는 함수 선언 밑 정의

```cpp
	~Triangle() { cout << "밑변" << width << "높이" << height << "인 삼각형 소멸" << endl; }
};
```

- 소멸자를 통해 객체가 사라질때 cout을 통해 소멸 되는 메시지를 모니터에 출력

```cpp
int main(void) {
```

- 메인 함수 시작

```cpp
	Triangle t[3] = { Triangle(2,2), Triangle(4, 4), Triangle(6, 6) };
```

- 객체 배열을 통한 3개의 t 생성 및 각각 2,2 4,4, 6,6을 매개변수로 받게 초기화

```cpp
	int i = 0;
```

- 반복문을 위한 변수 i를 0으로 초기화

```cpp
	for (i = 0; i < 3; i++) {
		cout << "삼각형" << i << "의 면적은" << t[i].getArea() << endl;
	}
```

- 반복문을 통해 인덱스 0~2인 t객체배열을 cout을 통해 하나하나씩 삼각형의 면적을 알려주는 메시지 출력

```cpp
	return 0;
}
```

- 0을 반환하며 함수종료

###실행결과
---
<img width="981" height="291" alt="image" src="https://github.com/user-attachments/assets/76fe8cda-96d5-48af-8e42-ccb97dead860" />


