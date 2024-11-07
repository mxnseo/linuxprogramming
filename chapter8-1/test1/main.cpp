#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	Circle x; Rect y; Triangle z; // 객체 생성
	x.setCircle(0, 0, 2); // 멤버변수 설정 함수 호출
	y.setRect(1, 1, 5, 10);
	z.setTriangle(2, 2, 3, 4);
	x.show(); y.show(); z.show(); // 출력 함수 호출
	return 0; // 0 반환 후 종료
}
