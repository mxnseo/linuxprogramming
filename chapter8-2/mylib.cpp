#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 공간 내 정의
	Shape::Shape(int x, int y) { // 생성자 정의
		this->x = x; this->y = y;
		cout << "Shape 생성, "; // 생성 출력 문구
	}

	void Shape::show() { // 츨력 함수 정의
		cout << "좌표 (" << x << ", " << y << ")에 ";
	}

	Shape::~Shape() { // 소멸자 정의
		cout << "Shape 소멸" << endl;
	}

	Circle::Circle(int x, int y, int radius) : Shape(x, y) { // 생성자 함수 정의
		// 부모 클래스를 자식 클래스의 매개변수 값으로 초기화
		this->radius = radius;
		cout << "Circle 생성" << endl;
	}

	void Circle::show() {
		Shape::show();
		cout << "반지름 " << radius << "인 원" << endl;
	}

	Circle::~Circle() {
		cout << "Circle 소멸, ";
	}

	Rect::Rect(int x, int y, int width, int height) : Shape(x, y) {
		this->width = width;
		this->height = height;
		cout << "Rect 생성" << endl;
	}

	void Rect::show() {
		Shape::show();
		cout << "폭 " << width << ", 높이 " << height << "인 직사각형" << endl;
	}

	Rect::~Rect() {
		cout << "Rect 소멸, ";
	}

	Triangle::Triangle(int x, int y, int low, int height) : Shape(x, y) {
		this->low = low; this->height = height;
		cout << "Triancle 생성" << endl;
	}

	void Triangle::show() {
		Shape::show();
		cout << "밑변 " << low << ", 높이 " << height << "인 삼각형" << endl;
	}

	Triangle::~Triangle() {
		cout << "Triangle 소멸, ";
	}
}
