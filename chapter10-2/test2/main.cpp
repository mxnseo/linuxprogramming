#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

template <class T> // 템플릿 클래스 선언
class Container {
    T* p;        // 동적 배열 포인터
    int size;    // 배열 크기
public:
    Container(int n){
        size = n; // size 초기화
        p = new T[size]; // 동적 메모리 할당
    }
    ~Container() { // 소멸자
        delete[] p; // 동적 메모리 해제
    }
    void set(int index, T value) { // index 위치에 value 저장
        p[index] = value;
    }
    T get(int index) { // index 위치의 값 리턴
        return p[index];
    }
};

int main() { // 메인 함수 선언
    Container<char> c(26); // 크기가 26인 Container<char> 객체 생성
    for (int i = 0; i < 26; i++)
        c.set(i, 'a' + i); // 알파벳 소문자 설정
    for (int i = 25; i >= 0; i--)
        cout << c.get(i); // 역순으로 출력
    cout << endl;

    return 0;
}

