#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 내 선언에 접근
    Complex::Complex(int r, int i) : real(r), img(i) { // 생성자 정의
        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
    }

    // 복소수 출력 함수
    void Complex::show() { 
        cout << real << "+" << img << "j" << endl;
    }

    // 복소수 더한 값을 새로운 객체로 생성해서 반환해줌
    Complex ComplexAdd(Complex c1, Complex c2) {
        Complex c;
        c.img = c1.img + c2.img;
        c.real = c1.real + c2.real;
        return c;
    }
};
