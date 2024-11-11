#include "mylib.hpp" // 헤더 파일 선언

namespace MINSEO { // 네임 스페이스 공간 내 정의
    // TV 클래스 구현
    TV::TV() : size(0) { // 생성자 초기화
        cout << "TV 생성" << endl;
    }

    void TV::setSize(int s) {
        size = s;
    }

    int TV::getSize() {
        return size;
    }

    // WideTV 클래스 구현
    WideTV::WideTV() : videoIn(false) {
        cout << "WideTV 생성" << endl;
    }

    void WideTV::setVideoIn(bool v) {
        videoIn = v;
    }

    bool WideTV::getVideoIn() {
        return videoIn;
    }

    // SmartTV 클래스 구현
    SmartTV::SmartTV() : ipAddr("0.0.0.0") {
        cout << "SmartTV 생성" << endl;
    }

    void SmartTV::setIpAddr(string ip) {
        ipAddr = ip;
    }

    string SmartTV::getIpAddr() {
        return ipAddr;
    }

    void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) {
        setSize(size);
        setVideoIn(videoIn);
        setIpAddr(ipAddr);
    }
}
