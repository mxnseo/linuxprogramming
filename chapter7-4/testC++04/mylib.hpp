#ifndef MYLIB_H // 전처리문, 중복 방지
#define MYLIB_H

#include <iostream> // 헤더 파일 선언
#include <string>
using namespace std; // 네임 스페이스 이름 생략

namespace MINSEO { // 네임 스페이스 내 정의
    class Book2 { // 클래스 선언
        string title; // 멤버 변수 선언
        int price, pages;
    public: // 접근 지정자
        Book2(string title = " ", int price = 0, int pages = 0); // 생성자 함수 선언
        string getTitle(); // 제목 얻는 함수 선언
        friend bool operator < (string name, Book2 op); // 연산자 함수 선언
    };
}
#endif // !MYLIB_H
