#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 내 선언에 접근
    Complex::Complex(int r, int i) : real(r), img(i) {} // 생성자 정의, 출력 문구 없음
    // 복소수 출력 함수
    void Complex::show() { 
        cout << real << "+" << img << "j" << endl;
    }
    Complex Complex::operator * (Complex a) { // 객체를 자료형으로 하는 연산자 함수 정의
        Complex tmp; // 리턴할 새로운 객체 생성
        // Complex x(2, 3), y(-5, 10)
        tmp.real = (this->real * a.real) + (this->img * a.img * -1);
        tmp.img = (this->real * a.img) + (this->img * a.real);
        return tmp;
    }
};
