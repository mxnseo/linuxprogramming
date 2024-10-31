#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // MINSEO 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
    Complex x(2, 3), y(-5, 10), sum;// 클래스 객체 생성

    sum = x + y; // 연산자 함수 사용한 부분
    cout << "두 복소수의 합은 "; // 출력 문구
    sum.show(); // 출력 함수 호출
    return 0; // 0 반환 후 종료
}
