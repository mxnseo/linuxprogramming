#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // MINSEO 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
    Power a(3, 5), b; // 객체 생성, 초기값 0
    a.show(); // 출력 함수
    b.show();
    b = 2 * a; // 연산자 함수 호출
    a.show();
    b.show();
    return 0; // 0 반환 후 종료
}