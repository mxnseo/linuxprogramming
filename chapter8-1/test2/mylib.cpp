#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 공간 내 정의
	void Circle::setCircle(int x, int y, int radius) { // 멤버 변수 설정하는 함수
		this->radius = radius;
		this->x = x; // 접근 지정자를 protected로 선언해서 상속 받은 클래스가 접근 가능
		this->y = y;
	}

	void Circle::show() { // 출력 함수
		cout << "좌표 (" << x << ", " << y << ")에 반지름 " << radius << "인 원" << endl;
	}
	
	void Rect::setRect(int x, int y, int width, int height) {
		this->width = width;
		this->height = height;
		this->x = x;
		this->y = y;
	}

	void Rect::show() {
		cout << "좌표 (" << x << ", " << y << ")에 폭 " << width << ", 높이 " << height << "인 직사각형" << endl;;
	}

	void Triangle::setTriangle(int x, int y, int low, int height) {
		this->height = height;
		this->low = low;
		this->x = x;
		this->y = y;
	}

	void Triangle::show() {
		cout << "좌표 (" << x << ", " << y << ")에 밑변 " << low << ", 높이 " << height << "인 삼각형" << endl;
	}
}
