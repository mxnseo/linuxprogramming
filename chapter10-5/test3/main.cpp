#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	int arr[3][3] = { {-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25} }; // 3x3 크기의 2차원 배열 생성

	int max = arr[0][0]; // 최대값을 배열의 0x0 원소로 지정
	int row = 0; int cols = 0; // 행과 열을 저장할 변수 선언

	for (int i = 0; i < 3; i++) { // 최대값 비교 알고리즘
		for (int j = 0; j < 3; j++) {
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
