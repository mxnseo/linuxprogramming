#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 공간 내 정의
	Point::Point(int x, int y) { // 생성자 정의
		this->x = x; this->y = y;
	}
	int Point::getX() { return x; } // 멤버 변수 리턴
	int Point::getY() { return y; }
	void Point::move(int x, int y) { // 멤버 변수 설정함수 정의
		this->x = x; this->y = y;
	}

	ColorPoint::ColorPoint(int x, int y, string color) : Point(x, y) {
		this->color = color; // 생성자 정의, 부모 클래스 초기화
	}
	void ColorPoint::setPoint(int x, int y) {
		move(x, y); // 설정 함수 호출
	}
	void ColorPoint::setColor(string color) {
		this->color = color;
	}
	void ColorPoint::show() {
		cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
	}
}
