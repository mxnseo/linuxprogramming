#ifndef MYLIB_H // 전처리문, 중복 방지
#define MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 생략

namespace MINSEO { // 네임 스페이스 정의
	class Point { // 부모 클래스 생성
		int x, y;
	public:
		Point(int x, int y); // 생성자 선언
		int getX(); // x 리턴하는 함수 선언
		int getY();
	protected: // 자식 클래스 접근 가능한 지정자
		void move(int x, int y); // x, y 설정 함수 선언
	};

	class ColorPoint : public Point { // 자식 클래스 생성
		string color;
	public:
		ColorPoint(int x, int y, string color); // 생성자 선언
		void setPoint(int x, int y); // 부모 클래스 멤버함수 설정 선언
		void setColor(string color); // 자신의 멤버함수 설정 함수 선언
		void show(); // 출력 함수 선언
	};
}
#endif // !MYLIB_H
