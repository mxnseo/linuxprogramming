#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 내 선언에 접근
    Power::Power(int k, int p) { // 생성자 함수 정의
        kick = k; punch = p; // 매개변수 값으로 초기화
    }
    void Power::show() { // 결과 출력 함수
        cout << "kick = " << kick << ", punch = " << punch << endl;
    }
    Power Power::operator-(int x) { // 연산자 함수, 정수값으로 객체 멤버 변수의 값을 뺌
        Power tmp; // 값을 대입해서 반환할 새로운 객체 생성
        tmp.kick = this->kick - x; // 멤버변수에서 -x만큼 뺀 값 대입
        tmp.punch = this->punch - x;
        return tmp; // 객체 반환
    }
};
