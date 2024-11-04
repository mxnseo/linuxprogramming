#ifndef TEST_2 // 전처리문, 중복 방지
#define TEST_2
 
#include <iostream> // 헤더 파일 선언
#include <string>
using namespace std; // 네임 스페이스 내 이름 정의 생략
 
namespace MINSEO { // 네임 스페이스 정의
    class Book2 { // 클래스 생성
        string title; // 멤버 변수 선언
        int price, pages;
    public: // 접근 지정자
        Book2(string title = " ", int price = 0, int pages = 0); // 생성자 함수 선언
        bool operator !(); // 공짜인지 아닌지 판단
    };
}
#endif // !TEST_2
