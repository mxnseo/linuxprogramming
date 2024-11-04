#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO {
    Color::Color(int red, int green, int blue) { // 생성자 함수 정의
        this->red = red; // 매개변수 값 대입
        this->green = green;
        this->blue = blue;
    }
    Color Color::operator + (Color op2) { // 연산자 중복 함수 정의
        Color tmp; // 새로운 객체 생성
        tmp.red = this->red + op2.red; // 멤버 변수 값 연산
        tmp.green = this->green + op2.green;
        tmp.blue = this->blue + op2.blue;
        return tmp; // 연산한 결과를 넣은 객체 리턴
    }
    bool Color::operator == (Color fu) { // 연산자 중복 함수 정의
        if (red == fu.red && green == fu.green && blue == fu.blue)
            return true; // 일정 조건의 값이 같으면 같다고 리턴
        else
            return false;
    }
    void Color::show() { // 출력 함수 정의
        cout << red << ' ' << green << ' ' << blue << endl;
    }

    // friend 사용할 경우
    /*Color operator + (Color op2) {
        Color tmp;
        tmp.red = this->red + op2.red;
        tmp.green = this->green + op2.green;
        tmp.blue = this->blue + op2.blue;
        return tmp;
    }
    bool operator == (Color fu) {
        if (red == fu.red && green == fu.green && blue == fu.blue)
            return true;
        else
            return false;
    }*/
}
