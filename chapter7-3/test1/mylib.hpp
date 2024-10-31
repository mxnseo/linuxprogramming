#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임스페이스 내 정의된 std 이름 생략

namespace MINSEO { // 네임 스페이스 설정
    class Complex { // 클래스 정의
        int real;  // 실수부
        int img;   // 허수부
    public: // 접근 지정자
        // 생성자
        Complex(int r = 0, int i = 0);
        // 복소수 출력 함수
        void show();
        // 연산자 함수
        Complex operator + (Complex a);
    };
}

#endif // !_MYLIB_H
