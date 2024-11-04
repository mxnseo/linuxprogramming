#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO {
    Book2::Book2(string title, int price, int pages) { // 생성자 함수 정의
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    string Book2::getTitle() { // 제목 반환 함수 정의
        return title;
    }
    bool operator < (string name, Book2 op) { // 책 제목 사전순 비교
        if (name < op.title)
            return true;
        else
            return false;
    }
}
