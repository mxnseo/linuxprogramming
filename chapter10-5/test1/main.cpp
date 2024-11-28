#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

class Arr { // 클래스 구현부
    int r; // 행
    int c; // 열
    int** arr; // 2차원 배열을 나타내기 위한 멤버 변수
public:
    // 클래스 Arr의 생성자 함수 선언
    Arr(int r = 0, int c = 0) {
        this->r = r; this->c = c; // 행과 열 초기화
        // 2차원 배열을 위한 동적 메모리 할당
        arr = new int* [r]; // 배열의 행 개수(r)만큼 포인터를 동적 할당
        for (int i = 0; i < r; i++) {
            // 반복문을 통해 각 행에 해당하는 메모리 공간 할당
            arr[i] = new int[c]; // 각 포인터가 (c)만큼의 int형 배열을 동적 할당받음.
        }
    }

    ~Arr() { // 소멸자 함수
        for (int i = 0; i < r; i++) {
            delete[] arr[i]; // 생성자 형식과 비슷하게 동적할당한 부분을 delete 해줌
        }
        delete[] arr;
    }

    void setArr(int data[2][2]) { // 클래스 멤버 변수에 배열 값 대입
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                arr[i][j] = data[i][j];
            }
        }
    }

    Arr operator+(Arr& a) { // 연산자 함수 구현
        Arr result(r, c); // 연산하고 반환할 객체 생성
        for (int i = 0; i < r; i++) { // 행렬 반복문
            for (int j = 0; j < c; j++) {
                result.arr[i][j] = this->arr[i][j] + a.arr[i][j]; // 두 객체 더한 값을 result 객체에 대입
            }
        }
        return result; // result 객체 반환
    }

    void show() { // 출력 함수
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << arr[i][j] << "          ";
            }
            cout << endl;
        }
    }
};

int main() { // 메인 함수 정의
    Arr arr1(2, 2); // 객체 2개 생성
    Arr arr2(2, 2);

    int data1[2][2] = { {2, 4}, {5, -5} }; // 초기화 할 배열값 저장
    int data2[2][2] = { {-2, 3}, {0, -5} };

    arr1.setArr(data1); // 배열 초기화 해 줄 함수 호출, 배열 넣음
    arr2.setArr(data2);

    Arr sum = arr1 + arr2; // 연산자 함수 호출, 새로운 클래스 객체 생성하여
    // return reuslt 객체 값을 받음

    cout << "연산결과:" << endl; // 출력 문구
    sum.show(); // 출력 함수 호출

    return 0; // 0 반환 후 종료
}

