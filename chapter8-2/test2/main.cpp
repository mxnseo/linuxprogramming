#include "mylib.hpp" // 헤더 파일 선언
using namespace MINSEO; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
    SmartTV htv;
    htv.setSmartTV(50, false, "192.0.0.2");
    cout << "size=" << htv.getSize() << endl;
    cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
    cout << "IP=" << htv.getIpAddr() << endl;
    return 0;
}
