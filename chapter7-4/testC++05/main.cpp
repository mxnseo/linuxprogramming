#include "mylib.hpp" // 헤더 파일 선언

int main() { // 메인 함수 선언
    MINSEO::Color red(255, 0, 0), blue(0, 0, 255), c; // 객체 생성
    c = red + blue; // 연산자 함수 정의, 덧셈
    c.show(); // 출력

    MINSEO::Color fuchsia(255, 0, 255); // 객체 생성(일정 조건)
    if (c == fuchsia) // 조건에 따라 참, 거짓 반환, 연산자 함수
        cout << "보라색 맞음";
    else
        cout << "보라색 아님";

    return 0; // 0 반환 후 종료
}
