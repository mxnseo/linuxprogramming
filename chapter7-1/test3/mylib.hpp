#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임스페이스 내 정의된 std 이름 생략

namespace MINSEO { // 네임 스페이스 설정
    class Complex;
    class ComplexManager {
    public:
        Complex ComplexAdd(Complex c1, Complex c2);
        Complex ComplexSub(Complex c1, Complex c2);
    };
    class Complex { // 클래스 정의
        int real;  // 실수부
        int img;   // 허수부
    public: // 접근 지정자
        // 생성자
        Complex(int r = 0, int i = 0);
        // 복소수 출력 함수
        void show();
        // friend 선언으로 전역함수가 private 멤버 접근 가능하도록 함
        friend Complex ComplexManager::ComplexAdd(Complex c1, Complex c2);
        friend Complex ComplexManager::ComplexSub(Complex c1, Complex c2);
    };
}

#endif // !_MYLIB_H
