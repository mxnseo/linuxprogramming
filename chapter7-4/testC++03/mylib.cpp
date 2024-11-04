#include "mylib.hpp"
 
namespace MINSEO {
    Book2::Book2(string title, int price, int pages) { // 생성자 함수 정의
        this->title = title; // 매개변수 값으로 초기화
        this->price = price;
        this->pages = pages;
    }
    bool Book2::operator !() { // 연산자 함수 정의
        if (price == 0) // 가격이 0이면
            return true; // 리턴
        else
            return false;
    }
}
