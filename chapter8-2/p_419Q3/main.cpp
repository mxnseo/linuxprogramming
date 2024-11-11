#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
    ColorPoint cp(5, 5, "RED"); // 클래스 객체 생성
    cp.setPoint(10, 20); // 좌표 설정함수 호출
    cp.setColor("BLUE"); // 색 이름 설정함수 호출
    cp.show(); // 출력 함수 호출
}
