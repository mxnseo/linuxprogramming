#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임스페이스 내 정의된 std 이름 생략

namespace MINSEO { // 네임 스페이스 설정
    class Power { // 클래스 선언
        int kick, punch; // 멤버 변수 선언
    public: // 멤버 접근지정자
        Power(int kick = 0, int punch = 0); // 생성자 선언
        void show(); // 출력 함수 선언
        friend Power operator* (int op1, Power op2); // 연산자 함수 선언
    };
}

#endif // !_MYLIB_H
