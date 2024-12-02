#include <iostream> // 헤더파일 선언
#include <vector>
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 정의
    vector<vector<int>> arr1 = { {2, 4}, {5, -5} }; // 벡터 선언
    vector<vector<int>> arr2 = { {-2, 3}, {0, -5} };
    vector<vector<int>> result; // 결과 저장할 객체

    for (int i = 0; i < arr1.size(); i++) {
        vector<int> row;  // 각 행을 임시로 저장할 벡터
        for (int j = 0; j < arr1[i].size(); j++) {
            row.push_back(arr1[i][j] + arr2[i][j]);  // 행마다 더한 값을 추가
        }
        result.push_back(row);  // 계산된 행을 result에 추가
    }

    cout << "연산결과" << endl; // 반복문을 이용하여 출력
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << "     ";
        }
        cout << endl;
    }

    return 0; // 0 반환 후 종료
}

