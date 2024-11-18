#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

template <class T1, class T2> // 템플릿 클래스 선언
class GClass { // 클래스 구현부
	T1 data1; // 템플릿 매개변수로 정의함
	T2 data2;
public:
    GClass() {
        data1 = 0; data2 = 0;
    }
    void set(T1 a, T2 b) { // 템플릿 매개변수로 함수 정의
        data1 = a; data2 = b;
    }
    void get(T1& a, T2& b) {
        a = data1; b = data2;
    }
    void swap() {
        T1 tmp = data1;
        data1 = data2;
        data2 = tmp;
    }
};

int main() { // 메인 함수 선언
    int a, b;
    GClass<int, int> x; // 객체 생성
    x.set(2, 5); // 함수 호출
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;
    x.swap();
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    double c, d;
    GClass<double, double> y;
    y.set(3.14, 6.28);
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;
    y.swap();
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    return 0;
}

