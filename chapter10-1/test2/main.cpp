#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

class Circle { // 클래스 생성
    int radius; // 멤버 변수 선언
public: // 접근 지정자 설정
    Circle(int radius = 1) { this->radius = radius; } // 생성자 함수
    int getRadius() { return radius; } // 멤버 변수 리턴 함수
    bool operator > (Circle a) { // 연산자 함수, 객체끼리 비교연산
        return this->radius > a.radius; // true or false 반환
    }
};

template <class T> // 템플릿 선언 키워드, 매개 변수 T 선언
T bigger(T a, T b) { // 템플릿 함수 정의, 자료형 T
    if (a > b) return a; // 값을 비교하여 더 큰 값을 리턴
    else return b;
}

int main() { // 메인 함수 선언
    int a = 20, b = 50, c; // int형 변수 선언
    c = bigger(a, b); // 비교 함수 호출하여 리턴한 값 대입
    cout << "20과 50중 큰 값은 " << c << endl; // 결과 출력

    Circle donut(10), pizza(20), y; // 클래스 객체 생성
    y = bigger(donut, pizza); // 연산자 함수 호출하여 리턴한 값 대입
    cout << "donut과 pizza중 큰 반지름은 " << y.getRadius() << endl; // 결과 출력

    return 0; // 0 반환 후 종료
}

