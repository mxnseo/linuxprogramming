#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 내 선언에 접근
    Complex::Complex(int real, int img) { // 생성자 함수 정의
        this->real = real; // 매개변수 대입
        this->img = img;
        // 생성 시 출력 문구
        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
    }
    void Complex::show() { // 출력 함수 정의
        cout << real << "+" << img << "j" << endl;
    }
    Complex operator++(Complex& comp) { // 전위증가 함수 정의
        comp.real++; // 객체 내 변수 증가
        comp.img++;
        return comp; // 객체 자신을 리턴
    }
    Complex operator--(Complex& comp, int x) { // 후위감소 함수 정의
        Complex tmp = comp; // 새로운 객체를 자신으로 생성
        comp.real--; // 후위감소
        comp.img--;
        return tmp; // 변한 객체를 리턴, 후위연산은 피연산자값을 상수취급
    }
};
