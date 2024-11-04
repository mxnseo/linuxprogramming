#include "mylib.hpp" // 헤더 파일 선언

int main() { // 메인 함수 선언
    MINSEO::Book2 a("청춘", 20000, 300); // 객체 생성
    string b; // 이름 입력 받을 string 변수
    cout << "책 이름을 입력하세요. > ";
    getline(cin, b);
    if (b < a) // 연산자 함수 호출
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
    return 0; // 0 반환 후 종료
}
