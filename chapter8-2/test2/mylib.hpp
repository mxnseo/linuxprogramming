#ifndef MYLIB_H // 전처리문, 중복 방지
#define MYLIB_H

#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 생략

namespace MINSEO { // 네임 스페이스 정의
    class TV { // 클래스 선언, (부모)
    protected: // 상속된 클래스들이 접근 가능한 지정자
        int size;
    public:
        TV(); // 생성자 선언
        void setSize(int s); // 함수 선언
        int getSize(); // 함수 선언
    };

    class WideTV : public TV { // 상속 클래스 선언
    protected: // 다음 파생 클래스들이 접근 가능한 지정자
        bool videoIn;
    public:
        WideTV();
        void setVideoIn(bool v);
        bool getVideoIn();
    };

    class SmartTV : public WideTV {
    private:
        string ipAddr;
    public:
        SmartTV();
        void setIpAddr(string ip);
        string getIpAddr();
        void setSmartTV(int size, bool videoIn, string ipAddr);
    };
}
#endif // !MYLIB_H
