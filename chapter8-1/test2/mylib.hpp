#ifndef MYLIB_H // 전처리문, 중복 방지
#define MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 생략

namespace MINSEO { // 네임 스페이스 정의
    class Shape { // 클래스 생성
    protected: // 접근 지정자 설정, protected는 파생 클래스에서만 접근 가능함.
        int x, y; // 멤버 변수
    };
    class Circle :public Shape { // 클래스 상속 받음, 상속 받은 클래스 내 함수 접근 가능
        int radius;
    public:
        void setCircle(int x, int y, int radius); // 멤버 변수 설정 함수 선언
        void show(); // 출력 함수 선언
    };
    class Rect :public Shape {
        int width, height;
    public:
        void setRect(int x, int y, int width, int height);
        void show();
    };
    class Triangle :public Shape {
        int low, height;
    public:
        void setTriangle(int x, int y, int low, int height);
        void show();
    };
}
#endif // !MYLIB_H
