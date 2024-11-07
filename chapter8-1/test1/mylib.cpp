#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 공간 내 정의
	void Shape::setShape(int x, int y) { // 멤버 변수 설정하는 함수
		this->x = x;
		this->y = y;
	}
	void Shape::show() { // 출력 함수 정의
		cout << "좌표 (" << x << ", " << y << ")에 ";
	}

	void Circle::setCircle(int x, int y, int radius) { // 멤버 변수 설정하는 함수
		this->radius = radius;
		setShape(x, y); // 상속 받은 클래스 내의 함수를 호출해서 멤버 변수 설정
	}

	void Circle::show() { // 출력 함수
		Shape::show(); // 상속 받은 클래스 내 함수를 호출해서 출력
		cout << "반지름 " << radius << "인 원" << endl;
	}
	
	void Rect::setRect(int x, int y, int width, int height) {
		this->width = width;
		this->height = height;
		setShape(x, y);
	}

	void Rect::show() {
		Shape::show();
		cout << "폭 " << width << ", 높이 " << height << "인 직사각형" << endl;;
	}

	void Triangle::setTriangle(int x, int y, int low, int height) {
		this->height = height;
		this->low = low;
		setShape(x, y);
	}

	void Triangle::show() {
		Shape::show();
		cout << "밑변 " << low << ", 높이 " << height << "인 삼각형" << endl;
	}
}
