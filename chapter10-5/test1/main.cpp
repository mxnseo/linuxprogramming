#include <iostream>  // 헤더 파일 선언
using namespace std;  // 네임 스페이스 이름 생략

class Arr {  // 클래스 구현부
    int arr[2][2];  // 2x2 크기의 고정 배열 선언
public:
    // 클래스 Arr의 생성자 함수 선언
    Arr() {
        // 배열 초기화 (모든 값을 0으로 설정)
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                arr[i][j] = 0;
            }
        }
    }

    void setArr(int data[2][2]) {  // 클래스 멤버 변수에 배열 값 대입
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                arr[i][j] = data[i][j];
            }
        }
    }

    Arr operator+(Arr& a) {  // 연산자 함수 구현
        Arr result;  // 연산하고 반환할 객체 생성
        for (int i = 0; i < 2; i++) {  // 행렬 반복문
            for (int j = 0; j < 2; j++) {
                result.arr[i][j] = this->arr[i][j] + a.arr[i][j];  // 두 객체 더한 값을 result 객체에 대입
            }
        }
        return result;  // result 객체 반환
    }

    void show() {  // 출력 함수
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << arr[i][j] << "          ";
            }
            cout << endl;
        }
    }
};

int main() {  // 메인 함수 정의
    Arr arr1;  // 객체 2개 생성
    Arr arr2;

    int data1[2][2] = { {2, 4}, {5, -5} };  // 초기화 할 배열값 저장
    int data2[2][2] = { {-2, 3}, {0, -5} };

    arr1.setArr(data1);  // 배열 초기화 해 줄 함수 호출, 배열 넣음
    arr2.setArr(data2);

    Arr sum = arr1 + arr2;  // 연산자 함수 호출, 새로운 클래스 객체 생성하여
    // return result 객체 값을 받음

    cout << "연산결과:" << endl;  // 출력 문구
    sum.show();  // 출력 함수 호출

    return 0;  // 0 반환 후 종료
}

