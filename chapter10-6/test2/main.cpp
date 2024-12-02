#include <iostream> // 헤더파일 선언
#include <vector>
using namespace std; // 네임 스페이스 내 이름 생략

int main() { // 메인 함수 정의
    vector<int> std;
    vector<int>::iterator it;

    for (int i = 0; i < 3; i++) { // 반복문 이용하여 학생 성적 저장
        int num; int sum = 0;
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < 3; j++) {
            cin >> num;
            sum += num;
        }
        std.push_back(sum / 3); // push_back 함수 이용하여 값 저장
    }

    it = max_element(std.begin(), std.end()); // 이터레이터로 최대값 구하는 함수 호출 후 가리킴
    // 결과 출력
    cout << "최우수 학생은 " << distance(std.begin(), it) + 1 << "번째 학생이고 평균 점수는 " << *it << "점이다." << endl;

    return 0;
}

