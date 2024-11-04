#include "mylib.hpp" // 헤더 파일 선언
 
int main() { // 메인 함수 선언
    MINSEO::Book2 book("벼룩시장", 0, 50); // 클래스 생성
    if (!book) // 조건문에 부합하면
        cout << "공짜다. " << endl; // 출력
    return 0; // 0 반환 후 종료
}
