#include <iostream> // 헤더파일 선언
#include <vector>
using namespace std; // 네임 스페이스 내 이름 생략

int main() { // 메인 함수 선언
	vector<vector<int>> arr = { {-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25} }; // 3x3 크기의 2차원 배열 생성

	int max = arr.at(0).at(0); // 최대값을 배열의 0x0 원소로 지정
	int row = 0; int cols = 0; // 행과 열을 저장할 변수 선언

	for (int i = 0; i < arr.size(); i++) { // 최대값 비교 알고리즘
		for (int j = 0; j < arr.at(i).size(); j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i; // 인덱스 저장
				cols = j;
			}
		}
	}

	cout << "최대값은 " << max << endl; // 결과 출력
	cout << "위치는 " << row + 1 << "행 " << cols + 1 << "열" << endl;

	return 0; // 0 반환 후 종료
}

