#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 내 선언에 접근
    Power::Power(int kick, int punch) { // 생성자 함수 정의
        this->kick = kick; // 매개변수 대입
        this->punch = punch;
    }

    void Power::show() { // 출력 함수 정의
        cout << "kick=" << kick << ", punch=" << punch << endl;
    }

    Power operator* (int op1, Power op2) { // 연산자 함수 정의
        Power tmp; // 새로운 객체 생성
        tmp.kick = op1 * op2.kick; // 정수값으로 연산 수행
        tmp.punch = op1 * op2.punch;
        return tmp; // 연산을 수행한 값으로 리턴
    }
};
