#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임스페이스 내 정의된 std 이름 생략

namespace MINSEO { // 네임 스페이스 설정
    class Complex { // 클래스 생성
        int real, img; // 멤버 변수, 각각 실수부와 허수부
    public: // 접근 지정자
        Complex(int real=0, int img=0); // 생성자 함수, 0 초기값
        void show(); // 출력 함수 선언
        friend Complex operator++(Complex& comp); // 전위증가 연산자함수
        friend Complex operator--(Complex& comp, int x); // 후위감소 연산자함수
    };
}

#endif // !_MYLIB_H
