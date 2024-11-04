#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // MINSEO 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
    Complex x(2, 3); // 객체 생성
    ++x; // 연산자 함수 호출
    cout << "증가결과 "; 
    x.show(); // 출력 문구
    x--; // 연산자 함수 호출
    cout << "감소결과 ";
    x.show(); // 출력 문구
    return 0; // 0 반환 후 종료
}
