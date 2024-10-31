#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 내 선언에 접근
    Complex::Complex(int r, int i) : real(r), img(i) {} // 생성자 정의, 출력 문구 없음
    // 복소수 출력 함수
    void Complex::show() { 
        cout << real << "+" << img << "j" << endl;
    }
    Complex Complex::operator + (Complex a) { // 객체를 자료형으로 하는 연산자 함수 정의
        Complex tmp; // 리턴할 새로운 객체 생성
        tmp.img = this->img + a.img; // 객체 내 멤버 변수들을 더하기 위한 연산자이기 때문에
        tmp.real = this->real + a.real; // 멤버 변수들을 더해서 객체에 대입 후 반환
        return tmp;
    }
};
