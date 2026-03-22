###소스코드 설명
---
```cpp
#include <iostream>
```

- 표준 입출력이 선언이 들어있는 iostream 헤더파일을 포함

```cpp
using namespace std;
```

- 표준 이름공간 std를 생략

```cpp
class Sphere {
```

- class Sphere 선언 및 정의 시작

```cpp
	double radius;
```

- 반지름을 받을 멤버변수 radius 선언

```cpp
public:
```

- 어디든 허용 가능하게 만듬

```cpp
	Sphere();
	Sphere(double a);
```

- 위임생성자와 타켓생성자를 위한 선언

```cpp
	double getVolume();
};
```

- 함수 getVolume 선언;

```cpp
double Sphere :: getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
```

- 멤버 함수 getVolume 정의 (부피값 리턴)

```cpp
Sphere::Sphere():Sphere(1.0) { }
```

- 매개변수를 가지지 않는 객체를 생성할때 1.0을 매개변수로 가지게 하고 호출 함

```cpp
Sphere::Sphere(double a):radius(a) { }
```

- 매개변수를 double으로 가질때 멤버변수 radius를 a로 초기화 시키고 호출함

```cpp
int main() {
```

- 메인함수 시작

```cpp
	Sphere sph1;
```

- 객체 sph1 선언 -> 매개변수가 없으므로 기본생성자 Sphere이고 인자 1.0으로 가지는 위임생성자가 호출 됨

```cpp
	cout << "구의 부피는" << sph1.getVolume() << endl;
```

- 표출 출력 cout을 통해 반지름을 1로 가지는 구의 부피 값을 모니터에 출력

```cpp
	Sphere sph2(3);
```

- 객체 sph2(3)선언-> 매개변수가 있으므로 타켓생성자 호출

```
	cout << "구의 부피는" << sph2.getVolume() << endl;
```

- 표준 출력 cout을 통해 반지름 3로 가지는 구의 부피 값을 모니터에 출력

```cpp
	return 0;
```

- 0을 반환하고 함수 종료

###실행결과
---
<img width="996" height="364" alt="image" src="https://github.com/user-attachments/assets/13a33d1e-b5bc-44da-bc97-d73eeb6022d0" />
