#ifndef MYLIB_H // 전처리문, 중복 방지
#define MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 생략

namespace MINSEO { // 네임 스페이스 정의
	class Shape { // 클래스 객체 생성 (부모)
		int x, y;
	public:
		Shape(int x = 0, int y = 0); // 생성자
		void show(); // 출력 함수 선언
		~Shape(); // 소멸자 선언
	};

	class Circle : public Shape { // 상속 받음
		int radius;
	public:
		Circle(int x, int y, int radius = 0);
		void show();
		~Circle();
	};

	class Rect : public Shape {
		int width, height;
	public:
		Rect(int x, int y, int width = 0, int height = 0);
		void show();
		~Rect();
	};

	class Triangle : public Shape {
		int low, height;
	public:
		Triangle(int x, int y, int low, int height);
		void show();
		~Triangle();
	};
}
#endif // !MYLIB_H
