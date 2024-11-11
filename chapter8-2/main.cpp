#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	Circle x(0, 0, 2); // 객체 생성
	Rect y(1, 1, 5, 10);
	Triangle z(2, 2, 5, 10);
	x.show(); // 출력 함수 호출
	y.show();
	z.show();
	return 0;
}
