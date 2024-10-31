#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // MINSEO 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
    Power a(3, 5), b; // 객체 생성
    a.show(); // 연산 전 값을 출력
    b.show();
    b = a - 2; // 연산자 함수 사용 부분
    a.show(); // 연산 후 값을 출력
    b.show();
    return 0; // 0 반환 후 종료
}
